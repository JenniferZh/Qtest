#ifndef QTEST_H
#define QTEST_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qfiledialog.h>
#include <QtWidgets/qmessagebox.h>
#include <QtWidgets/qgroupbox.h>
#include <QtGui/qimagereader.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "ui_qtest.h"

using namespace cv;

class Qtest : public QMainWindow
{
	Q_OBJECT

public:
	Qtest(QWidget *parent = 0);
	~Qtest();

	void Qtest::createActions();
	bool Qtest::loadFile(const QString &fileName);
	void Qtest::reverse(Mat& image, Mat& outImage);
	void Qtest::reverselr(Mat& image, Mat& outImage);
	void Qtest::rectTailor(Mat& image, Mat& outImage, int x1, int y1, int x2, int y2);
	void Qtest::overturn180(Mat& image, Mat& outImage);
	void Qtest::overturn90(Mat& image, Mat& outImage, bool isright);
	void Qtest::showImage(Mat& image);
	void Qtest::setRadioButton();

	public slots:
		void on_Qtest_fileopen();
		void on_Qtest_reversetest();
		void on_Qtest_reverseoperation();
		void on_Qtest_turnoperation();
		void on_Qtest_filesave();
		void Mouse_current_pos();
		void Mouse_Pressed();
		void Mouse_left();
 

private:
	Ui::QtestClass ui;
	int val;
	QImage _qimage;
	Mat _tmp;
	Mat _origin;
};

#endif // QTEST_H
