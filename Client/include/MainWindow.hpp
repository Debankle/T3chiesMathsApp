#ifndef MATHS_MAINWINDOW_H
#define MATHS_MAINWINDOW_H

#include "Display.hpp"
#include <QtGui/QResizeEvent>
#include <QtWidgets/QMainWindow>
#include <iostream>

class MainWindow : public QMainWindow {

    Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  private:
    Display *mainDisplay;
};

#endif // MATHS_MAINWINDOW_H