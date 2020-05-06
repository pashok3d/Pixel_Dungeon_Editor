#include <QTimer>
#include <QTime>
#include <QEventLoop>
#include <QCoreApplication>
#include <QMessageBox>
#include <QString>
#include <iostream>
#include "database.h"

#define X_SIZE 5
#define Y_SIZE 5
#define MIN_ROOM_SIZE 3
#define ICON_SIZE 20
#define BORDER 5
#define X_LOCAL 1
#define Y_LOCAL 1

void in_connect(Door *, Door *, Room *, Room*);

DataBase::DataBase()
{
    current = -1;
    mode = idling;
    current_element_type = wall;
}

int Room::counter = 0;

Room::Room()
{
    id = counter++;
        x_size = 10;
        y_size = 10;
        x_global = (ICON_SIZE * (rand() % 10 + 0)) +BORDER;
        y_global = (ICON_SIZE * (rand() % 10 + 0)) +BORDER;
}

Room::Room(int x_size_, int y_size_)
{
    id = counter++;
        x_size = x_size_;
        y_size = y_size_;
        x_global = (ICON_SIZE * (rand() % 10 + 0)) +BORDER;
        y_global = (ICON_SIZE * (rand() % 10 + 0)) +BORDER;
}

Door::Door()
{
    x_local = 0;
    y_local = 0;
    id = 0;
    lead_door = NULL;
    lead_room = NULL;
}

int Element::element_counter = 0;

Element::Element()
{
    x_local = 1;
    y_local = 1;
    id = element_counter++;
    color = 1;
}

Element::Element(int color_, int x_local_, int y_local_)
{
    x_local = x_local_;
    y_local = y_local_;
    color = color_;
    id = element_counter++;
}

int Door::door_counter = 0;

Door::Door(int x_local_, int y_local_)
{
    x_local = x_local_;
    y_local = y_local_;
    id = door_counter++;
    lead_door = NULL;
    lead_room = NULL;
}

void DataBase::move_to(int x, int y)
{
    if (!(this->rooms.at(current)->doors.empty()))
    {
        for (int i = 0; i < this->rooms.at(current)->doors.size(); i++)
        {
            if (this->rooms.at(current)->doors.at(i)->x_local == x && this->rooms.at(current)->doors.at(i)->y_local == y)
            {
                if (this->rooms.at(current)->doors.at(i)->lead_room != NULL)
                {
                    for (int n = 0; n < this->rooms.size(); n++)
                    {
                        if (this->rooms.at(n)->id == this->rooms.at(current)->doors.at(i)->lead_room->id)
                        {
                            current = n;
                            this->info_answer(this);
                            return;
                        }
                    }
                }
            }
        }
    }
}

void DataBase::plate_info(int x, int y)
{
    if (!(this->rooms.at(current)->elements.empty()) || !(this->rooms.at(current)->doors.empty())) //flag
    {
        for (int i = 0; i < this->rooms.at(current)->doors.size(); i++)
        {
            if (this->rooms.at(current)->doors.at(i)->x_local == x && this->rooms.at(current)->doors.at(i)->y_local == y)
            {
                    QMessageBox  * msgBox = new QMessageBox;
                    msgBox->setFixedSize(500,250);
                    QString sx = QString::number(x);
                    QString sy = QString::number(y);
                    QString id = QString::number(this->rooms.at(current)->doors.at(i)->id);
                    QString coordinates = "Coordinates: " + sx + 'x' + sy;
                    QString info;
                    if (this->rooms.at(current)->doors.at(i)->lead_door != NULL)
                    {
                        QString leads = QString::number(this->rooms.at(current)->doors.at(i)->lead_room->id);
                        info = coordinates + '\n' +  "Id: " + id + '\n' + "It leads to " + leads + " room."  ;
                    }
                    else
                    {
                        info =coordinates + '\n' + "Id: " + id + '\n' + "Watch out!" + '\n' + "It leads to another dimension.";
                    }
                    msgBox->setText(info);
                    msgBox->show();
                return;
            }

        }

        for (int i = 0; i < this->rooms.at(current)->elements.size(); i++)
        {
            if (this->rooms.at(current)->elements.at(i)->x_local == x && this->rooms.at(current)->elements.at(i)->y_local == y && (this->rooms.at(current)->elements.at(i)->color != plate ))
            {

                QMessageBox  * msgBox = new QMessageBox;
                QString s1 = QString::number(x);
                QString s2 = QString::number(y);
                QString id = QString::number(this->rooms.at(current)->elements.at(i)->id);          
                QString coordinates = "Coordinates: " + s1 + 'x' + s2;
                QString message;
                switch (this->rooms.at(current)->elements.at(i)->color)
                {

                case wall:
                    message = "Wall. Nothing interesing. ";
                    break;
                case gold:
                    message = "Some gold coins. ";
                    break;
                case chest:
                    message = "Old empty chest. ";
                    break;
                case elixir:
                    message = "Small bottle of glowing elixir. ";
                    break;
                case key:
                    message = "Gold key. ";
                    break;
                default:
                    message = "Hmm.. Floor. Cold and wet. ";
                    break;
                }

                QString info = coordinates + '\n' + "Id: " + id + '\n' + message;
                msgBox->setText(info);
                msgBox->show();
                return;
            }
        }

        QMessageBox  * msgBox = new QMessageBox;
        QString s1 = QString::number(x);
        QString s2 = QString::number(y);
        QString help_message = "Coordinates: " + s1 + 'x' + s2 + '\n' + "Hmm.. Floor. Cold and wet. ";
        msgBox->setText(help_message);
        msgBox->show();
        return;
    }
}


void DataBase::get_rid()
{
    if (!(this->rooms.empty()))
    {
        if ((this->rooms.at(current)->doors.empty()) && !(this->rooms.at(current)->elements.empty()))
            {
                for (int i = 0; i < this->rooms.at(current)->elements.size(); i++)
                {
                        delete rooms.at(current)->elements.at(i);
                }
                rooms.at(current)->elements.clear();

            }
    }
}

void DataBase::add_room(int x_size, int y_size)
{
    if(x_size >= MIN_ROOM_SIZE  && y_size >= MIN_ROOM_SIZE)
    {
    Room * room = new Room(x_size, y_size);
    this->rooms.push_back(room);
    this->refresh();
        for(int i =0; i < x_size; i++)
        {
            add_element(i,0,wall);
            add_element(i,y_size-1,wall);
        }

        for(int i =1; i < x_size-1; i++ )
        {
            for (int n=1; n < y_size-1; n++)
            add_element(i,n,plate);
        }

        for(int i =1; i < y_size-1; i++)
        {
            add_element(0,i,wall);
            add_element(x_size-1,i,wall);
        }
    }
    else
    {
        QMessageBox  * msgBox = new QMessageBox;
        QString info = "To small to be a room.";
        msgBox->setText(info);
        msgBox->show();
    }

}

void DataBase::delete_room(int id_)
{
    QMessageBox  * msgBox = new QMessageBox;
    QString info;
    if (!(this->rooms.empty()))
    {
        for (int i = 0; i < rooms.size(); i++)
        {
            if (rooms.at(i)->id == id_)
            {
                if ((rooms.at(i)->doors.empty()) && (rooms.at(i)->elements.empty()))
                {

                    delete rooms.at(i);
                    rooms.erase(rooms.begin() + i); //flag delete
                    this->refresh();
                    return;
                }
                else
                {
                    info = "You should first delete all the elements.";
                    msgBox->setText(info);
                    msgBox->show();
                    return;
                }
            }
        }
        info = "Can't delete this room.";
        msgBox->setText(info);
        msgBox->show();
    }
    else
    {
            info = "There are no rooms to delete.";
            msgBox->setText(info);
            msgBox->show();
    }
}

void DataBase::add_element(int x_local, int y_local, int type)
{
    QMessageBox  * msgBox = new QMessageBox;
    QString info;
    if (!(this->rooms.empty()))
    {
        if (x_local < rooms.at(current)->x_size && y_local < rooms.at(current)->y_size)
        {

            for (int i = 0; i < this->rooms.at(current)->elements.size(); i++)
            {
                if (this->rooms.at(current)->elements.at(i)->x_local == x_local && this->rooms.at(current)->elements.at(i)->y_local == y_local && this->rooms.at(current)->elements.at(i)->color != plate && type != door)
                {
                    info = "Can't place it here.";
                    msgBox->setText(info);
                    msgBox->show();
                    return;
                }
            }

            if (type == door)
            {
                if ( x_local == 0 || x_local == rooms.at(current)->x_size-1 || y_local == 0 || y_local == rooms.at(current)->y_size-1 )
                {
                Door * el = new Door(x_local,y_local);
                rooms.at(current)->doors.push_back(el);
                }
                else
                {   
                    info = "Can't place it there.";
                    msgBox->setText(info);
                    msgBox->show();
                }
            }
            else
            {
                Element * el = new Element(type,x_local,y_local);
                rooms.at(current)->elements.push_back(el);
            }
        }
        else
        {
            info = "You can only add element inside the room.";
            msgBox->setText(info);
            msgBox->show();
        }
    }
    else
    {
    info = "There are no rooms.";
    msgBox->setText(info);
    msgBox->show();
    }
    info_answer(this);
}

void DataBase::delete_element(int x_local_, int y_local_, int all)
{
    QMessageBox  * msgBox = new QMessageBox;
    QString info;
    if (!(this->rooms.empty()))
    {
        if (!(this->rooms.at(current)->doors.empty()))
        {
            for (int i = 0; i < this->rooms.at(current)->doors.size(); i++)
            {
                if (this->rooms.at(current)->doors.at(i)->x_local == x_local_ && this->rooms.at(current)->doors.at(i)->y_local == y_local_)
                {
                    if(this->rooms.at(current)->doors.at(i)->lead_door == NULL)
                    {
                        delete rooms.at(current)->doors.at(i);
                        this->rooms.at(current)->doors.erase(this->rooms.at(this->current)->doors.begin() + i);
                        info_answer(this);
                        return;
                    }
                    else
                    {
                        info = "Can't delete it. This door leads somewhere.";
                        msgBox->setText(info);
                        msgBox->show();
                        return;
                    }
                }
            }
        }

        if (!(this->rooms.at(current)->elements.empty()))
        {
            if(all)
            {
                get_rid();
                info_answer(this);
                return;
            }

            for (int i = 0; i < this->rooms.at(current)->elements.size(); i++)
            {
                if (this->rooms.at(current)->elements.at(i)->x_local == x_local_ && this->rooms.at(current)->elements.at(i)->y_local == y_local_)
                {
                    if (this->rooms.at(current)->elements.at(i)->color != plate)
                    {
                    delete rooms.at(current)->elements.at(i);
                    this->rooms.at(current)->elements.erase(this->rooms.at(this->current)->elements.begin() + i);
                    info_answer(this);
                    return;
                    }
                }
            }

            for (int i = 0; i < this->rooms.at(current)->elements.size(); i++)
            {
                if (this->rooms.at(current)->elements.at(i)->x_local == x_local_ && this->rooms.at(current)->elements.at(i)->y_local == y_local_)
                {
                    delete rooms.at(current)->elements.at(i);
                    this->rooms.at(current)->elements.erase(this->rooms.at(this->current)->elements.begin() + i);
                    info_answer(this);
                    return;
                }
            }
        }
        else
        {
            info = "There are no elements in this room.";
            msgBox->setText(info);
            msgBox->show();
        }
    }
    else
    {
        info = "There are no rooms.";
        msgBox->setText(info);
        msgBox->show();
    }
    info_answer(this);
}

void DataBase::next()
{
    if (this->current < this->amount() - 1)
        this->current++;
}

void DataBase::prev()
{
    if (this->current > 0)
        this->current--;
}

int DataBase::amount()
{
    return (this->rooms.size());
}

inline void DataBase::refresh()
{
    this->current = this->amount()-1;
}


void DataBase::test()
{
}

void DataBase::add_room_request(int x_size, int y_size) //flag
{
    this->add_room(x_size,y_size);
    info_answer(this);

}

void DataBase::delete_room_request(int id)
{
    this->delete_room(id);
    info_answer(this);

}

void DataBase::add_element_request(int x_local, int y_local, int type)
{
        add_element(x_local, y_local, type);
}

void DataBase::add_element_mode_request(bool state)
{
    if (state)
    {
        if (this->mode == idling)
            this->mode = adding;
    }
    else
    {
        if (this->mode == adding)
            this->mode = idling;
    }
}

void DataBase::element_type_request(int type)
{
    this->current_element_type = type;
}

void DataBase::delete_element_request(int x_local, int y_local, int all)
{
    delete_element(x_local,y_local,all );
}

void DataBase::delete_element_mode_request(bool state)
{
    if (state)
    {
        if (this->mode == idling)
            this->mode = deleting;
    }
    else
    {
        if (this->mode == deleting)
            this->mode = idling;
    }
}

void DataBase::connect_request(int first_door_id, int second_door_id)
{
    if (first_door_id != second_door_id )
    {
        int first_room_index = -1;
        int second_room_index = -1;
        int first_door_index = -1;
        int second_door_index = -1;
        if (this->rooms.size() > 1)
        {
            for (int i = 0; i < this->rooms.size(); i++)
            {
               if (!this->rooms.at(i)->doors.empty())
               {
                   for(int n =0; n< this->rooms.at(i)->doors.size(); n++ )
                   {
                       if(this->rooms.at(i)->doors.at(n)->id == first_door_id)
                       {
                           first_room_index = i;
                           first_door_index = n;
                       }
                       if(this->rooms.at(i)->doors.at(n)->id == second_door_id)
                       {
                           second_room_index = i;
                           second_door_index = n;
                       }
                       if(first_room_index != -1 && second_room_index!= -1)
                       {
                           in_connect(this->rooms.at(first_room_index)->doors.at(first_door_index),this->rooms.at(second_room_index)->doors.at(second_door_index),this->rooms.at(first_room_index), this->rooms.at(second_room_index));
                           return;
                       }
                   }
               }
            }
        }
        else
        {
            QMessageBox  * msgBox = new QMessageBox;
            QString info = "There should be at least two rooms.";
            msgBox->setText(info);
            msgBox->show();
        }
    }
    else
    {
        QMessageBox  * msgBox = new QMessageBox;
        QString info = "Can't do that.";
        msgBox->setText(info);
        msgBox->show();
    }
}


void DataBase::icon_info(int x, int y)
{
    if (!(this->rooms.empty()))
    {
        for (int i = 0; i < this->rooms.size(); i++)
        {
            if ( (ceil((this->rooms.at(i)->x_global-BORDER)/ICON_SIZE))  == x && (ceil((this->rooms.at(i)->y_global-BORDER)/ICON_SIZE))  == y)
            {
                this->current = i;
                info_answer(this);
                return;
            }
        }
    }
}

void in_connect(Door *first_door, Door *second_door, Room * first_room, Room * second_room)
{
    if(first_door->lead_door == NULL && first_door->lead_room == NULL &&second_door->lead_door == NULL &&second_door->lead_room == NULL)
    {
       first_door->lead_room =  second_room;
       first_door->lead_door =  second_door;
       second_door->lead_room = first_room;
       second_door->lead_door = first_door;
    }
    else
    {
        QMessageBox  * msgBox = new QMessageBox;
        QString info = "One of these doors leads somewhere.";
        msgBox->setText(info);
        msgBox->show();
    }

}

void DataBase::disconnect_request(int door1, int door2)
{

    if (this->rooms.size() > 1)
    {
        for (int i = 0; i < this->rooms.size(); i++)
        {
            if (!this->rooms.at(i)->doors.empty())
            {
                for(int n = 0; n < this->rooms.at(i)->doors.size(); n++)
                {
                    if (this->rooms.at(i)->doors.at(n)->lead_door != NULL )
                    {
                        if(this->rooms.at(i)->doors.at(n)->id == door1 &&  this->rooms.at(i)->doors.at(n)->lead_door->id == door2)
                        {
                            this->rooms.at(i)->doors.at(n)->lead_door->lead_door = NULL;
                            this->rooms.at(i)->doors.at(n)->lead_door->lead_room = NULL;
                            this->rooms.at(i)->doors.at(n)->lead_door = NULL;
                            this->rooms.at(i)->doors.at(n)->lead_room = NULL;
                            return;
                        }
                    }

                }
            }
        }

    }
    else
    {
        QMessageBox  * msgBox = new QMessageBox;
        QString info = "There should be at least two rooms.";
        msgBox->setText(info);
        msgBox->show();
    }


}
void DataBase::exit_request()
{
    this->collapse();
}
void DataBase::redo_request()
{
}
void DataBase::undo_request()
{
}
void DataBase::save_request()
{
    std::cout << "save request" << std::endl;
}
void DataBase::load_request()
{
}

void DataBase::next_request()
{
}
void DataBase::prev_request()
{
}

void DataBase::replace(int x, int y)
{
    this->rooms.at(current)->x_global =  (ICON_SIZE * x) +BORDER;;
    this->rooms.at(current)->y_global = (ICON_SIZE * y) +BORDER;;
    this->info_answer(this);
}

void DataBase::collapse()
{
    while (!this->rooms.empty())
    {
        while (!(this->rooms.at(current)->doors.empty()))
        {
            for (int i = 0; i < this->rooms.at(current)->doors.size(); i++)
            {
                if(this->rooms.at(current)->doors.at(i)->lead_door == NULL)
                {
                    delete rooms.at(current)->doors.at(i);
                    this->rooms.at(current)->doors.erase(this->rooms.at(this->current)->doors.begin() + i);
                    info_answer(this);
                    return;
                }
                else
                {
                    this->disconnect_request(this->rooms.at(current)->doors.at(i)->id, this->rooms.at(current)->doors.at(i)->lead_door->id);
                    continue;
                }
            }

        }
            if (!(this->rooms.at(current)->elements.empty()))
            this->get_rid();
        delete_room(this->rooms.at(current)->id);
    }
}

void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
