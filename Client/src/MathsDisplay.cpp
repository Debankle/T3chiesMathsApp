#include "../include/MathsDisplay.hpp"

MathsDisplay::MathsDisplay(QSize *mthDsplSize, QWidget *parent)
    : QWidget(parent) {
    this->widgetSize = mthDsplSize;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, Qt::red);
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);

    QSize *chatDsplSize = new QSize(this->widgetSize->width() - 10,
                                    this->widgetSize->height() * 9 / 10 - 5);
    chatDspl = new ChatDisplay(chatDsplSize, this);
    chatDspl->setGeometry(5, 5, this->widgetSize->width() - 10,
                          this->widgetSize->height() * 9 / 10 - 10);
    chatDspl->setParent(this);
    chatDspl->show();

    QSize *msgAreaSize = new QSize(this->widgetSize->width() - 10,
                                   this->widgetSize->height() / 10 - 5);
    messageArea = new MessageInput(msgAreaSize, this);
    messageArea->setGeometry(5, 9 * widgetSize->height() / 10,
                             widgetSize->width() - 10,
                             widgetSize->height() / 10 - 5);
    messageArea->setParent(this);
    messageArea->show();
}

void MathsDisplay::loadServer(QString addr) {
    std::cout << addr.toUtf8().constData() << std::endl;
}