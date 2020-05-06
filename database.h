#ifndef DATABASE_H
#define DATABASE_H

#include <QVector>
#include <QObject>


class Room;
class Door;
class Element;


void delay();

enum item_type{wall =0, door = 1, chest =2, gold =3, plate =4, elixir = 5, key =6};
enum mode{idling = -1, adding = 0, deleting = 1};

class DataBase : public QObject
{
    Q_OBJECT
public:
    DataBase();
    void add_room(int x_size, int y_size);
        void delete_room(int id);
        void add_element(int x_local, int y_local, int type);
        void delete_element(int x_local, int y_local, int all);
        void icon_info(int x, int y);
        void plate_info(int x, int y);
        void replace(int x, int y);
        void move_to(int x, int y);
        void next();
        void prev();
        int amount();
        void refresh();
        void get_rid();
        void collapse();
        int current;
        int mode;
        int current_element_type;
        QVector <Room*> rooms;

private slots:
    void test();
    void add_room_request(int x_size, int y_size);
    void delete_room_request(int id);
    void add_element_request(int x_local, int y_local, int type);
        void add_element_mode_request(bool state);
        void element_type_request(int type);
    void delete_element_request(int x_local, int y_local, int all);
        void delete_element_mode_request(bool state);

    void connect_request(int door1, int door2);
    void disconnect_request(int door1,int door2);
    void redo_request();
    void undo_request();
    void save_request();
    void load_request();
    void exit_request();
    void next_request();
    void prev_request();
signals:
    void info_answer(DataBase *);
};

class Room
{
public:
    Room();
    Room(int x_size, int y_size);
    void plate_info(int x, int y);
    static int counter;
    int x_size;
    int y_size;
    int x_global;
    int y_global;
    int id;
    QVector <Door*> doors;
    QVector <Element*> elements;
};

class Door
{
public:
    Door();
    Door(int x_local,int  y_local);
    static int door_counter;
    int x_local;
    int y_local;
    int id;
    Room * lead_room;
    Door * lead_door;
};

class Element
{
public:
    Element();
    Element(int color, int x_local,int  y_local);
    static int element_counter;
    int x_local;
    int y_local;
    int id;
    int color;
};

#endif // DATABASE_H
