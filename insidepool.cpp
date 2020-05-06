#include "insidepool.h"
#include "database.h"
#include <iostream>
#include <QMessageBox>

#define IN_POOL_SIZE_X 25
#define IN_POOL_SIZE_Y 15


InsidePool::InsidePool()
{
    setMaximumSize(IN_POOL_SIZE_X*PLATE_SIZE,IN_POOL_SIZE_Y *PLATE_SIZE);
    inside_map = NULL;
}


void InsidePool::mousePressEvent(QMouseEvent *event)
{
    int x = (ceil((event->x())/PLATE_SIZE));
    int y = (ceil((event->y())/PLATE_SIZE));

    if (event->button() == Qt::RightButton)
    {

      if (inside_map != NULL && !inside_map->rooms.empty())
      {
          inside_map->plate_info(x,y);
      }

    }

    if (event->button() == Qt::LeftButton)
    {
      if (inside_map != NULL && !inside_map->rooms.empty())
      {
          switch (inside_map->mode)
          {
          case idling:
              //std::cout << "Idling " << std::endl;
              inside_map->move_to(x,y);
              break;
          case deleting:
              //std::cout << "Deleting " << x << " " << y << std::endl;
              inside_map->delete_element(x,y,0);
              break;
          case adding:
              //std::cout << "Adding " << x << " " << y << " " << wall << std::endl;
              inside_map->add_element(x,y,inside_map->current_element_type);
              break;
          default:
              //std::cout << "Default " << std::endl;
              break;
          }

      }

    }



}

void InsidePool::paintEvent(QPaintEvent *)
{
    QPixmap chest("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/chest.png");
    QPixmap door("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/door2.png");
    QPixmap gold("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/gold.png");
    QPixmap floor("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/floor2.png");
    QPixmap wall("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/wall2.png");
    QPixmap elixir("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/elixir.png");
    QPixmap key("C:/Qt_Projects/Project_3/Dev_Projects/Project_3_NewEra_2/images/key.png");



    QPainter painter(this);
    painter.setPen(QPen(Qt::white, 1));
    painter.setBrush(Qt::white);
    //painter.drawRect(0,0,OUT_POOL_SIZE_X*PLATE_SIZE,OUT_POOL_SIZE_Y *PLATE_SIZE);

    if (inside_map != NULL && !inside_map->rooms.empty())
    {
    painter.setPen(QPen(Qt::black, 1));
    for (int i =0; i <= inside_map->rooms.at(inside_map->current)->x_size; i++)
    {
        painter.drawLine(PLATE_SIZE*i,0,PLATE_SIZE*i, PLATE_SIZE*inside_map->rooms.at(inside_map->current)->y_size);
    }

    for (int i =0; i <= inside_map->rooms.at(inside_map->current)->y_size; i++)
    {
        painter.drawLine(0,PLATE_SIZE*i,PLATE_SIZE*inside_map->rooms.at(inside_map->current)->x_size, PLATE_SIZE*i);
    }

    for (int i =0; i < inside_map->rooms.at(inside_map->current)->elements.size(); i++)
    {
        switch (inside_map->rooms.at(inside_map->current)->elements.at(i)->color)
        {
        case 0:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , wall);
        //painter.setBrush(Qt::darkGray);
        //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 1:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , door);
            //painter.setBrush(Qt::darkYellow);
            //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 2:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , chest);
             //painter.setBrush(Qt::darkMagenta);
            //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 3:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , gold);
            //painter.setBrush(Qt::yellow);
           //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 4:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , floor);
            //painter.setBrush(Qt::gray);
           //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 5:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , elixir);
            //painter.setBrush(Qt::darkRed);
           //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        case 6:
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , key);
            //painter.setBrush(Qt::darkGreen);
           //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;

        default:
            painter.setBrush(Qt::red);
            painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->elements.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
            break;
        }

        for (int i =0; i < inside_map->rooms.at(inside_map->current)->doors.size(); i++)
        {
            painter.drawPixmap( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->doors.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->doors.at(i)->y_local,PLATE_SIZE,PLATE_SIZE , door);
            //painter.setBrush(Qt::darkYellow);
            //painter.drawRect( PLATE_SIZE*inside_map->rooms.at(inside_map->current)->doors.at(i)->x_local,  PLATE_SIZE*inside_map->rooms.at(inside_map->current)->doors.at(i)->y_local,PLATE_SIZE,PLATE_SIZE );
        }



}
       }

}

void InsidePool::draw(DataBase * in_map) //flag
{
    inside_map = in_map;
    update();
}
