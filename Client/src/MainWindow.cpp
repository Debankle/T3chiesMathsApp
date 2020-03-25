#include "../include/MainWindow.hpp"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    MainWindow::resize(1366, 768);

    mainDisplay = new Display(this);
    setCentralWidget(mainDisplay);
    mainDisplay->show();

    this->setWindowTitle("Maths App");
    this->show();
}

MainWindow::~MainWindow() { delete mainDisplay; }