#include "../include/Display.hpp"

Display::Display(QWidget *parent) : QWidget(parent) {
    this->parent = parent;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);

    QRect size = parent->geometry();

    QSize *mthAreaSize = new QSize(6 * size.width() / 7 - 10, size.height());
    mathsArea = new MathsDisplay(mthAreaSize, this);
    mathsArea->setGeometry(size.width() / 7 + 10, 0,
                           (6 * size.width() / 7 - 10), size.height());
    mathsArea->setParent(this);
    mathsArea->show();

    QSize *sideBarSize = new QSize(size.width() / 7, size.height());
    sideBar = new ServerBar(sideBarSize, mathsArea, this);
    sideBar->setGeometry(0, 0, size.width() / 7, size.height());
    sideBar->setParent(this);
    sideBar->show();
}

Display::~Display() {
    delete this->sideBar;
    // delete this->mathsArea;
}