#include <QApplication>
#include <QMessageBox>
#include "mainwindow.h"
#include "controlpanel.h"
#include "database.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DataBase db;

    QMessageBox  * msgBox = new QMessageBox;
    msgBox->setWindowTitle("Pixel Dungeon Map Editor Tutorial");
    QString info = "Welcome to Pixel Dungeon Map Editor! \n Tips: \n - Min. room size 3x3. \n"
    " - Unable to delete rooms with elements inside (floor and wall as well). \n"
    " - Save, load, redo and undo are not working. \n  For left window: \n - Use LButton to switch the room. \n"
    " - Use RButton to rearrange room icon's position. \n For right window: \n - Use RButton to get the information. \n"
    " - Use LButton to walk through the door or to add(delete) elements when certain button is toggled.";
    msgBox->setFixedSize(500,500);
    msgBox->setText(info);
    msgBox->show();


    //Buttons
    QObject::connect(&w.control_panel.add_room_button, SIGNAL(clicked()), &w.control_panel, SLOT(add_room_button_clicked()));
    QObject::connect(&w.control_panel.delete_room_button, SIGNAL(clicked()), &w.control_panel, SLOT(delete_room_button_clicked()));

    QObject::connect(&w.control_panel.next_button, SIGNAL(clicked()), &w.control_panel, SLOT(next_button_clicked()));
    QObject::connect(&w.control_panel.prev_button, SIGNAL(clicked()), &w.control_panel, SLOT(prev_button_clicked()));

    QObject::connect(&w.control_panel.undo_button, SIGNAL(clicked()), &w.control_panel, SLOT(undo_button_clicked()));
    QObject::connect(&w.control_panel.redo_button, SIGNAL(clicked()), &w.control_panel, SLOT(redo_button_clicked()));

    QObject::connect(&w.control_panel.save_button, SIGNAL(clicked()), &w.control_panel, SLOT(save_button_clicked()));
    QObject::connect(&w.control_panel.load_button, SIGNAL(clicked()), &w.control_panel, SLOT(load_button_clicked()));

    QObject::connect(&w.control_panel.exit_button, SIGNAL(clicked()), &w.control_panel, SLOT(exit_button_clicked()));

    QObject::connect(&w.control_panel.add_element_button, SIGNAL(toggled(bool)), &w.control_panel, SLOT(add_element_button_toggled(bool)));
    QObject::connect(&w.control_panel.delete_element_button, SIGNAL(toggled(bool)), &w.control_panel, SLOT(delete_element_button_toggled(bool)));

    QObject::connect(&w.control_panel.connect_button, SIGNAL(clicked()), &w.control_panel, SLOT(connect_button_clicked()));
    QObject::connect(&w.control_panel.disconnect_button, SIGNAL(clicked()), &w.control_panel, SLOT(disconnect_button_clicked()));

    //Dialog buttons

    QObject::connect(&w.control_panel.control_panel_dialog.accept_button, SIGNAL(clicked()), &w.control_panel.control_panel_dialog, SLOT(accept_button_clicked()));


    QObject::connect(&w.control_panel.control_panel_test_dialog.accept_button, SIGNAL(clicked()), &w.control_panel.control_panel_test_dialog, SLOT(accept_button_clicked()));


    //Dialogs

    QObject::connect(&w.control_panel.control_panel_dialog, SIGNAL(choice_info_answer(int)), &w.control_panel, SLOT(choice_info_answer(int)));

    QObject::connect(&w.control_panel.control_panel_test_dialog, SIGNAL(test_choice_info_answer(int,int,int)), &w.control_panel, SLOT(test_choice_info_answer(int,int,int)));


    //Main connections
    QObject::connect(&w.control_panel, SIGNAL(add_room_request(int, int)), &db, SLOT(add_room_request(int,int)));
    QObject::connect(&w.control_panel, SIGNAL(delete_room_request(int)), &db, SLOT(delete_room_request(int)));

    QObject::connect(&w.control_panel, SIGNAL(add_element_request(int,int,int)), &db, SLOT(add_element_request(int,int,int)));
        QObject::connect(&w.control_panel, SIGNAL(add_element_mode_request(bool)), &db, SLOT(add_element_mode_request(bool)));
    QObject::connect(&w.control_panel, SIGNAL(delete_element_request(int,int,int)), &db, SLOT(delete_element_request(int,int,int)));
        QObject::connect(&w.control_panel, SIGNAL(delete_element_mode_request(bool)), &db, SLOT(delete_element_mode_request(bool)));

    QObject::connect(&w.control_panel, SIGNAL(element_type_request(int)), &db, SLOT(element_type_request(int)));

    QObject::connect(&w.control_panel, SIGNAL(connect_request(int,int)), &db, SLOT(connect_request(int,int)));
    QObject::connect(&w.control_panel, SIGNAL(disconnect_request(int, int)), &db, SLOT(disconnect_request(int, int)));

    QObject::connect(&w.control_panel, SIGNAL(redo_request()), &db, SLOT(redo_request()));
    QObject::connect(&w.control_panel, SIGNAL(undo_request()), &db, SLOT(undo_request()));

    QObject::connect(&w.control_panel, SIGNAL(save_request()), &db, SLOT(save_request()));
    QObject::connect(&w.control_panel, SIGNAL(load_request()), &db, SLOT(load_request()));

    QObject::connect(&w.control_panel, SIGNAL(exit_request()), &db, SLOT(exit_request()));

    QObject::connect(&w.control_panel, SIGNAL(next()), &db, SLOT(next_request()));
    QObject::connect(&w.control_panel, SIGNAL(prev()), &db, SLOT(prev_request()));

    QObject::connect(&db, SIGNAL(info_answer(DataBase *)),  &w.outside_pool, SLOT(draw(DataBase *)));
    QObject::connect(&db, SIGNAL(info_answer(DataBase *)),  &w.inside_pool, SLOT(draw(DataBase *)));

    QObject::connect(&w.control_panel, SIGNAL(exit()), &w, SLOT(close()));

    w.show();

    return a.exec();
}


