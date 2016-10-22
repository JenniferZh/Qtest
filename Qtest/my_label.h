#ifndef MY_LABEL_H
#define MY_LABEL_H

#include "qlabel.h"
#include <QLabel>
#include <QMouseEvent>
#include <QEvent>
#include <QDebug>
class my_label : public QLabel
{
	Q_OBJECT
public:
	explicit my_label(QWidget *parent=0);
	void mouseMoveEvent(QMouseEvent *ev);
	void mousePressEvent(QMouseEvent *ev);
	void leaveEvent(QEvent *);

	int x,y;

signals:
	void Mouse_pressed();
	void Mouse_Pos();
	void Mouse_Left();

	public slots:

};

#endif 