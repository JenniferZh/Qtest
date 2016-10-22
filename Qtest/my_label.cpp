#include "my_label.h"


my_label::my_label(QWidget *parent) : QLabel(parent)
{

}

void my_label::mouseMoveEvent(QMouseEvent *ev)
{
	this->x = ev->x();
	this->y = ev->y();
	emit Mouse_Pos();
}

void my_label::mousePressEvent(QMouseEvent *ev) {
	emit Mouse_pressed();
}

void my_label::leaveEvent(QEvent *) {
	emit Mouse_Left();
}


