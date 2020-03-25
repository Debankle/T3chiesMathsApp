#ifndef MATHS_SERVER_WIDGET_H
#define MATHS_SERVER_WIDGET_H

#include <QtCore/QString>
#include <QtGui/QMouseEvent>
#include <QtGui/QPalette>
#include <QtGui/QPixmap>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <iostream>
#include "MathsDisplay.hpp"

class ServerWidget : public QWidget {

    Q_OBJECT

  public:
    ServerWidget(MathsDisplay *mthDsplPtr, QString title, QString description,
                 QWidget *parent = nullptr);
    QString title;
    QString description;

  protected:
    void mousePressEvent(QMouseEvent *event) override;

  private:
    bool selected;
    QString address;
    QPalette *p;
    QLabel *titleLabel;
    QLabel *descriptionLabel;
    QLabel *imageLabel;
    QPixmap *icomPixmap;
    MathsDisplay *mthDsplPtr;
};

#endif // MATHS_SERVER_WIDGET_H