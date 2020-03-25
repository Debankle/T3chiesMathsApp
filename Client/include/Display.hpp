#ifndef MATHS_DISPLAY_H
#define MATHS_DISPLAY_H

#include "MathsDisplay.hpp"
#include "ServerBar.hpp"
#include <QtGUI/QPalette>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

class Display : public QWidget {

    Q_OBJECT

  public:
    Display(QWidget *parent = nullptr);
    ~Display();

  private:
  QPalette *p;
    QWidget *parent;
    MathsDisplay *mathsArea;
    ServerBar *sideBar;
};

#endif // MATHS_DISPLAY_H