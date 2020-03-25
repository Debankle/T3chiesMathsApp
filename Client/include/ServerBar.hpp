#ifndef MATHS_SERVER_BAR_H
#define MATHS_SERVER_BAR_H

#include "ServerWidget.hpp"
#include "MathsDisplay.hpp"
#include <QtGui/QPalette>
#include <QtWidgets/QWidget>
#include <fstream>
#include <iostream>
#include <vector>
#include <QtCore/QString>

class ServerBar : public QWidget {

    Q_OBJECT

  public:
    ServerBar(QSize *sideBarSize, MathsDisplay *mthDsplPtr,
              QWidget *parent = nullptr);
    ~ServerBar();
    void loadServers();
    void renderServers();

    ServerWidget *w1;
    ServerWidget *w2;

  private:
    QSize *widgetSize;
    QPalette *p;
    std::fstream *serverStream;
    MathsDisplay *mthDsplPtr;
};

#endif // MATHS_SERVER_BAR_H