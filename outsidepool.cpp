#include "outsidepool.h"
#include "database.h"
#include <QString>
#include <iostream>
#include <QPen>
#define ICON_SIZE 20
#define BORDER 5

OutsidePool::OutsidePool()
{
    setMaximumSize(250,250);
    outside_map = NULL;
}

void OutsidePool::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setBrush(Qt::gray);
    painter.setPen(Qt::black);
    painter.drawRect(BORDER,BORDER,240,240);

  if (outside_map != NULL)
  {
      for (int i =0; i < outside_map->rooms.size(); i++)
      {
        if (!outside_map->rooms.at(i)->doors.empty())
        {
            for (int n = 0; n < outside_map->rooms.at(i)->doors.size(); n++)
            {
                if(outside_map->rooms.at(i)->doors.at(n)->lead_door != NULL && outside_map->rooms.at(i)->doors.at(n)->lead_room != NULL)
                {
                    QPen pen(Qt::black,2,Qt::SolidLine,Qt::RoundCap);
                    painter.setPen(pen);
                    painter.drawLine(outside_map->rooms.at(i)->x_global+(ICON_SIZE*sqrt(2)/2),outside_map->rooms.at(i)->y_global +(ICON_SIZE*sqrt(2)/2), outside_map->rooms.at(i)->doors.at(n)->lead_room->x_global+(ICON_SIZE*sqrt(2)/2), outside_map->rooms.at(i)->doors.at(n)->lead_room->y_global +(ICON_SIZE*sqrt(2)/2) );
                }
            }
        }

      }

      for (int i =0; i < outside_map->rooms.size(); i++)
      {
        painter.setPen(Qt::black);
        painter.setBrush(Qt::white);
        if(outside_map->current == i)
        {
            painter.setBrush(Qt::yellow);
            painter.setPen(QPen(Qt::black, 2));
        }
        painter.drawRect(outside_map->rooms.at(i)->x_global,outside_map->rooms.at(i)->y_global,ICON_SIZE,ICON_SIZE);
        QString s = QString::number(outside_map->rooms.at(i)->id);
        painter.drawText(outside_map->rooms.at(i)->x_global+(ICON_SIZE*sqrt(2)/4),outside_map->rooms.at(i)->y_global+(ICON_SIZE*sqrt(2)/2),s);
      }
  }
}

void OutsidePool::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
      int x = (ceil((event->x()-BORDER)/ICON_SIZE));
      int y = (ceil((event->y()-BORDER)/ICON_SIZE));

      if (outside_map != NULL && !outside_map->rooms.empty())
      {
          outside_map->icon_info(x,y);
      }
    }

    if (event->button() == Qt::RightButton)
    {
      int x = (ceil((event->x()-BORDER)/ICON_SIZE));
      int y = (ceil((event->y()-BORDER)/ICON_SIZE));

      if (outside_map != NULL && !outside_map->rooms.empty())
      {
          outside_map->replace(x,y);
      }
    }


}

void OutsidePool::draw(DataBase * out_map) //flag
{
  outside_map = out_map;
  update();
}


