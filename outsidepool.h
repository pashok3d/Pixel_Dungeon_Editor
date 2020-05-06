#ifndef OUTSIDEPOOL_H
#define OUTSIDEPOOL_H
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include "database.h"

class OutsidePool : public QWidget
{
    Q_OBJECT
public:
    OutsidePool();
    DataBase * outside_map;
    void paintEvent(QPaintEvent *) override;
protected:
virtual void mousePressEvent(QMouseEvent *event);
private:
private slots:
    void draw(DataBase *);//flag
signals:
};

#endif // OUTSIDEPOOL_H
