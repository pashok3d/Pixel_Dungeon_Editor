#include "mainwindow.h"
#include "insidepool.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Pixel Dungeon Map Editor");
    setMinimumSize(200,240); //MINSIZE
    setMaximumSize(1025,520); //MAXSIZE
    resize(1025,520);

    vertical_layout.addWidget(&outside_pool);
    vertical_layout.addWidget(&control_panel);
    horizontal_layout.addLayout(&vertical_layout);
    horizontal_layout.addWidget(&inside_pool);
    central_help_widget.setLayout(&horizontal_layout);
    this->setCentralWidget(&central_help_widget);
}

MainWindow::~MainWindow()
{
}

