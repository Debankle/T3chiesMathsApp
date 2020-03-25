#include "../include/ChatDisplay.hpp"

ChatDisplay::ChatDisplay(QSize *displayWidgetSize, QWidget *parent)
    : QWidget(parent) {
    this->widgetSize = displayWidgetSize;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, "#100010");
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);
}