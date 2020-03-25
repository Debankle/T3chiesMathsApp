#include "../include/ServerWidget.hpp"

ServerWidget::ServerWidget(MathsDisplay *mthDsplPtr, QString title,
                           QString description, QWidget *parent)
    : QWidget(parent) {

    this->mthDsplPtr = mthDsplPtr;

    this->p = new QPalette();
    this->p->setColor(QPalette::Window, Qt::green);
    this->setAutoFillBackground(true);
    this->setPalette(*this->p);

    this->title = title;
    this->description = description;
    this->selected = false;

    // this->imageLabel = new QLabel(this);
    // this->iconPixmap = new QPixmap("icon.jpeg");
    // this->imageLabel->setPixmap(this->icomPixmap);
    // this->imageLabel->show();

    this->titleLabel = new QLabel(this);
    this->titleLabel->setText(this->title);
    this->titleLabel->setGeometry(5, 0, 180, 30);

    this->descriptionLabel = new QLabel(this);
    this->descriptionLabel->setText(this->description);
    this->descriptionLabel->setGeometry(10, 35, 180, 40);

    this->show();
}

void ServerWidget::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        this->mthDsplPtr->loadServer("Hello");
    }
}
