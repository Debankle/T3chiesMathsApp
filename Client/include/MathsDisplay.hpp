#ifndef MATHS_MATHSDISPLAY_H
#define MATHS_MATHSDISPLAY_H

#include "ChatDisplay.hpp"
#include "MessageInput.hpp"
#include <QtCore/QString>
#include <QtGui/QPalette>
#include <QtGui/QShowEvent>
#include <QtWidgets/QWidget>
#include <iostream>

class MathsDisplay : public QWidget {

    Q_OBJECT

  public:
    MathsDisplay(QSize *mthDsplSize, QWidget *parent = nullptr);
    void loadServer(QString addr);

  private:
    QSize *widgetSize;
    QPalette *p;
    QString addr;
    MessageInput *messageArea;
    ChatDisplay *chatDspl;
};

#endif // MATHS_MATHSDISPLAY_H