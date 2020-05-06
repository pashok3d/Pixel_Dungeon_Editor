#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include "controlpanel.h"
#include "insidepool.h"
#include "outsidepool.h"
#include "database.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    InsidePool inside_pool;
    OutsidePool outside_pool;
    ControlPanel control_panel;
    QHBoxLayout horizontal_layout;
    QVBoxLayout vertical_layout;
    QWidget central_help_widget;
    ~MainWindow();
};

#endif // MAINWINDOW_H
