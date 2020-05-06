#include "controlpanel.h"
#include "database.h"
#include <iostream>
#include <QMessageBox>
#include <QObject>

InputDialog::InputDialog()
{
    setWindowTitle("Dialog menu");
    this->move(1025/2,520/2);
    accept_button.setText("OK");
    accept_button.resize(50,25);
    choice_list.insertItem(0,"Wall");
    choice_list.insertItem(1,"Door");
    choice_list.insertItem(2,"Chest");
    choice_list.insertItem(3,"Gold");
    choice_list.insertItem(4,"Floor");
    choice_list.insertItem(5,"Elixir");
    choice_list.insertItem(6,"Key");

    horizontal_layout.addWidget(&choice_list);
    vertical_layout.addLayout(&horizontal_layout);
    vertical_layout.addWidget(&accept_button);

    this->setLayout(&vertical_layout);
}



TestInputDialog::TestInputDialog()
{
    setWindowTitle("Dialog menu");
    this->move(1025/2,520/2);
    accept_button.setText("OK");
    accept_button.resize(50,25);
    x_label.setText("X:");
    y_label.setText("Y:");
    all_label.setText("All");

    horizontal_layout.addWidget(&x_label);
    horizontal_layout.addWidget(&first_id_list);
    horizontal_layout.addWidget(&y_label);
    horizontal_layout.addWidget(&second_id_list);
    horizontal_layout.addWidget(&all_label);
    horizontal_layout.addWidget(&all_check_box);
    vertical_layout.addLayout(&horizontal_layout);
    vertical_layout.addWidget(&accept_button);

    this->setLayout(&vertical_layout);

}


ExpInputDialog::ExpInputDialog(int control_mode_, ControlPanel *cp)
{
    parent = cp;
    control_mode = control_mode_;
    setWindowTitle("Dialog menu");
    this->move(1025/2,520/2);
    accept_button.setText("OK");
    accept_button.resize(50,25);

    x_size.setMinimum(3);
    y_size.setMinimum(3);
    x_size.setValue(23);
    y_size.setValue(15);

    x_size_label.setText("X size: ");
    y_size_label.setText("Y size: ");
    el_type.setText("Element: ");
    first_room.setText("From room: ");
    second_room.setText("To room: ");
    first_door.setText("From door: ");
    second_door.setText("To door: ");
    id.setText("Room id: ");

    switch (control_mode)
    {
    case adding_room:
        horizontal_layout.addWidget(&x_size_label);
        horizontal_layout.addWidget(&x_size);
        horizontal_layout.addWidget(&y_size_label);
        horizontal_layout.addWidget(&y_size);
        break;
    case deleting_room:
        horizontal_layout.addWidget(&id);
        horizontal_layout.addWidget(&room_id);
        break;
    case connecting:
        vertical_layout.addWidget(&first_door);
        vertical_layout.addWidget(&door_id1);
        vertical_layout.addWidget(&second_door);
        vertical_layout.addWidget(&door_id2);
        break;
    case disconnecting:
        horizontal_layout.addWidget(&first_door);
        horizontal_layout.addWidget(&door_id1);
        horizontal_layout.addWidget(&second_door);
        horizontal_layout.addWidget(&door_id2);
        break;
    }
    vertical_layout.addLayout(&horizontal_layout);
    vertical_layout.addWidget(&accept_button);
    this->setLayout(&vertical_layout);
    QObject::connect(&this->accept_button, SIGNAL(clicked()), this, SLOT(info_absorb()) );

}

void ExpInputDialog::info_absorb()
{
    this->hide();
    switch (control_mode)
    {
    case adding_room:
        emit parent->add_room_request(this->x_size.value(),this->y_size.value());
        break;
    case deleting_room:
        emit parent->delete_room_request(this->room_id.value());
        break;
    case connecting:
        emit parent->connect_request(this->door_id1.value(),this->door_id2.value());
        break;
    case disconnecting:
        emit parent->disconnect_request(this->door_id1.value(),this->door_id2.value());
        break;

    }

}



ControlPanel::ControlPanel()
{

    setMaximumSize(250,250);


    add_room_button.setText("Add Room");
    add_room_button.resize(50,20);

    delete_room_button.setText("Delete Room");
    delete_room_button.resize(50,20);

    save_button.setText("Save");
    save_button.resize(50,20);

    load_button.setText("Load");
    load_button.resize(50,20);

    undo_button.setText("Undo");
    undo_button.resize(50,20);

    redo_button.setText("Redo");
    redo_button.resize(50,20);

    next_button.setText("Next");
    next_button.resize(50,20);
    next_button.hide();

    prev_button.setText("Prev");
    prev_button.resize(50,20);
     prev_button.hide();

    add_element_button.setText("Add Element");
    add_element_button.resize(50,20);
    add_element_button.setCheckable(1);

    delete_element_button.setText("Del Element");
    delete_element_button.resize(50,20);
    delete_element_button.setCheckable(1);

    connect_button.setText("Connect");
    connect_button.resize(50,20);

    disconnect_button.setText("Disonnect");
    disconnect_button.resize(50,20);

    exit_button.setText("Exit");
    exit_button.resize(50,20);

    buttons_layout.addWidget(&add_room_button,0,0);
    buttons_layout.addWidget(&delete_room_button,0,1);

    buttons_layout.addWidget(&next_button,1,0);
    buttons_layout.addWidget(&prev_button,1,1);

    buttons_layout.addWidget(&connect_button,2,0);
    buttons_layout.addWidget(&disconnect_button,2,1);

    buttons_layout.addWidget(&add_element_button,3,0,1,2);
    buttons_layout.addWidget(&delete_element_button,4,0,1,2);

    //buttons_layout.addWidget(&undo_button,5,0);
    //buttons_layout.addWidget(&redo_button,5,1);

    buttons_layout.addWidget(&save_button,6,0);
    buttons_layout.addWidget(&load_button,6,1);

    buttons_layout.addWidget(&exit_button,7,0,1,2);

    setLayout(&buttons_layout);
}



void ControlPanel::delete_room_button_clicked()
{
    ExpInputDialog * control_panel_exp_dialog = new ExpInputDialog(deleting_room,this);
    control_panel_exp_dialog->show();
}

void ControlPanel::undo_button_clicked()
{
    undo_request();
}

void ControlPanel::redo_button_clicked()
{
    redo_request();
}

void ControlPanel::save_button_clicked()
{
    save_request();
}

void ControlPanel::load_button_clicked()
{
    load_request();
}

void ControlPanel::exit_button_clicked()
{
    exit_request();
    exit();
}

void ControlPanel::next_button_clicked()
{
    //next();
}

void ControlPanel::prev_button_clicked()
{
    //prev();
}


void ControlPanel::add_element_button_toggled(bool state)
{
    if (state)
    control_panel_dialog.show();
    add_element_mode_request(state);
}


void ControlPanel::delete_element_button_toggled(bool state)
{
    delete_element_mode_request(state);
}

void ControlPanel::add_room_button_clicked()
{
    ExpInputDialog * control_panel_exp_dialog = new ExpInputDialog(adding_room,this);
    control_panel_exp_dialog->show();
}

void ControlPanel::connect_button_clicked()
{
    ExpInputDialog * control_panel_exp_dialog = new ExpInputDialog(connecting,this);
    control_panel_exp_dialog->show();
}

void ControlPanel::disconnect_button_clicked()
{
    ExpInputDialog * control_panel_exp_dialog = new ExpInputDialog(disconnecting,this);
    control_panel_exp_dialog->show();
}

void InputDialog::accept_button_clicked()
{
    hide();
    choice_info_answer(this->choice_list.currentIndex());
}


void TestInputDialog::accept_button_clicked()
{
    hide();
    test_choice_info_answer(this->first_id_list.value(),this->second_id_list.value(), this->all_check_box.isChecked());
}


void ControlPanel::test_choice_info_answer(int a, int b, int check)
{
    delete_element_request(a,b,check);
}

void ControlPanel::choice_info_answer(int type)
{
    element_type_request(type);
}


