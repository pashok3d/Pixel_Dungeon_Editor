#ifndef INSIDEPOOL_H
#define INSIDEPOOL_H
#define PLATE_SIZE 32
#include <QWidget>
#include <QObject>
#include <QPainter>
#include <QMouseEvent>
#include "database.h"


class InsidePool : public QWidget
{
    Q_OBJECT
public:
    InsidePool();

    DataBase * inside_map;
    void paintEvent(QPaintEvent *) override;
protected:
    virtual void mousePressEvent(QMouseEvent *event);
private:


private slots:
    void draw(DataBase *);
signals:
};

#endif // INSIDEPOOL_H
