#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H
#include <QObject>
#include <QPushButton>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QCheckBox>
#include <QLabel>
#include <QSpinBox>
#include "database.h"

enum control_mode{adding_room = 0, deleting_room = 1, adding_element =2,
                 deleting_element =3, connecting = 4, disconnecting = 5, undoing =6, redoing =7,
                 saving = 8, loading = 9, checking = 10};

class InputDialog : public QWidget
{
    Q_OBJECT
public:
    InputDialog();
    QComboBox choice_list;
    QHBoxLayout horizontal_layout;
    QVBoxLayout vertical_layout;
    QPushButton accept_button;
private slots:
       void accept_button_clicked();
signals:
       void choice_info_answer(int);
};

class TestInputDialog : public QWidget
{
    Q_OBJECT
public:
    TestInputDialog();
    QSpinBox first_id_list;
    QSpinBox second_id_list;
    QHBoxLayout horizontal_layout;
    QVBoxLayout vertical_layout;
    QPushButton accept_button;
    QCheckBox all_check_box;
    QLabel x_label;
    QLabel y_label;
    QLabel all_label;
private slots:
       void accept_button_clicked();
signals:
       void test_choice_info_answer(int,int,int);
};


class ControlPanel;

class ExpInputDialog : public QWidget
{
    Q_OBJECT
public:
    ExpInputDialog(int control_mode, ControlPanel * cp);
    QVBoxLayout vertical_layout;
    QHBoxLayout horizontal_layout;
    QPushButton accept_button;
    QSpinBox x_size;
    QSpinBox y_size;
    QSpinBox  x_pos;
    QSpinBox y_pos;
    QSpinBox room_id;
    QSpinBox room_id1;
    QSpinBox door_id1;
    QSpinBox room_id2;
    QSpinBox door_id2;
    QComboBox choice_list;

    QLabel x_size_label;
    QLabel y_size_label;
    QLabel el_type;
    QLabel first_room;
    QLabel second_room;
    QLabel first_door;
    QLabel second_door;
    QLabel id;


    ControlPanel * parent;
    int control_mode;
private slots:
    void info_absorb();
signals:
};

class ControlPanel : public QWidget
{
    Q_OBJECT
public:
    ControlPanel();
    InputDialog control_panel_dialog;
    TestInputDialog control_panel_test_dialog;

    QPushButton add_room_button;
    QPushButton delete_room_button;

    QPushButton undo_button;
    QPushButton redo_button;
    QPushButton save_button;
    QPushButton load_button;
    QPushButton exit_button;

    QPushButton next_button;
    QPushButton prev_button;

    QPushButton add_element_button;
    QPushButton delete_element_button;

    QPushButton connect_button;
    QPushButton disconnect_button;

    QGridLayout buttons_layout;

    int control_mode;

private slots:
    void add_room_button_clicked();
    void delete_room_button_clicked();

    void undo_button_clicked();
    void redo_button_clicked();
    void save_button_clicked();
    void load_button_clicked();
    void exit_button_clicked();
    void next_button_clicked();
    void prev_button_clicked();
        void add_element_button_toggled(bool state);
        void delete_element_button_toggled(bool state);
    void connect_button_clicked();
    void disconnect_button_clicked();

    void choice_info_answer(int);
    void test_choice_info_answer(int, int, int);

signals:
   void add_room_request(int x_size, int y_size);
   void delete_room_request(int id);
   void add_element_request(int x, int y, int type);
        void add_element_mode_request(bool);
        void element_type_request(int);
   void delete_element_request(int x, int y, int all);
        void delete_element_mode_request(bool);
   void connect_request(int door1, int door2);
   void disconnect_request(int id1, int id2);
   void redo_request();
   void undo_request();
   void save_request();
   void load_request();
   void next();
   void prev();
   void exit_request();
   void exit();

   void outside_draw_request(DataBase *);
   void inside_draw_request(DataBase *);
};

#endif // CONTROLPANEL_H
