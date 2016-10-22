#include "qtest.h"
#include <QtWidgets/QApplication>
#include <QtCore>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <my_label.h>
//ctrl+e+c

Qtest::Qtest(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	connect(ui.picture, SIGNAL(Mouse_Pos()), this, SLOT(Mouse_current_pos()));
	connect(ui.picture, SIGNAL(Mouse_Pressed()), this, SLOT(Mouse_Pressed()));
	connect(ui.picture, SIGNAL(Mouse_Left()), this, SLOT(Mouse_left()));
	
}

Qtest::~Qtest()
{
	
}

  void Qtest::on_Qtest_fileopen()
  {
	  
	  QString filename = QFileDialog::getOpenFileName(
		  this,tr("Open File"),"C://","All files (*.*)"
		  );
	  Mat image = imread(filename.toStdString(), CV_LOAD_IMAGE_COLOR); 
	  _origin = image;
	  showImage(image);
	  //ui.mylabel->setText(filename);
  }


  bool Qtest::loadFile(const QString &fileName)
{
	QImageReader reader;
	reader.setFileName(fileName);
    reader.setAutoTransform(true);
    const QImage newImage = reader.read();
    if (newImage.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
        return false;
    }
  }

  void Qtest::on_Qtest_reversetest() {
      Mat image = imread("C:\\Users\\thinkpad\\Desktop\\lina.jpg", CV_LOAD_IMAGE_COLOR); 
	  Mat outimage;
	  //reverselr(image, outimage);
	  //rectTailor(image, outimage, 100, 100, 200, 200);
	  //overturn180(image, outimage);
	  //overturn90(image, outimage, false);
	  showImage(image);
	  //imwrite("C:\\Users\\thinkpad\\Desktop\\lina2.jpg",outimage);
	  //namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
      //imshow( "Display window", outimage );  
  }


  //up-down reverse of a picture
  void Qtest::reverse(Mat& image, Mat& outImage){
	  outImage.create(image.size(), image.type());
	  const int channels = image.channels();

	  switch(channels)
	  {
	  case 1:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
					  outImage.at<uchar>(i,j) = image.at<uchar>(image.rows-1-i,image.cols-1-j);
			  break;
		  }
	  case 3:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
				  {
					  
					  outImage.at<Vec3b>(i,j)[0] = image.at<Vec3b>(image.rows-1-i,j)[0];
					  outImage.at<Vec3b>(i,j)[1] = image.at<Vec3b>(image.rows-1-i,j)[1];
					  outImage.at<Vec3b>(i,j)[2] = image.at<Vec3b>(image.rows-1-i,j)[2];
				  }
		  }
	  }

	 
  }

  //left-right reverse of a picture
  void Qtest::reverselr(Mat& image, Mat& outImage)
  {
	  outImage.create(image.size(), image.type());
	  const int channels = image.channels();

	  switch(channels)
	  {
	  case 1:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
					  outImage.at<uchar>(i,j) = image.at<uchar>(i,image.cols-1-j);
			  break;
		  }
	  case 3:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
				  {
					  
					  outImage.at<Vec3b>(i,j)[0] = image.at<Vec3b>(i,image.cols-1-j)[0];
					  outImage.at<Vec3b>(i,j)[1] = image.at<Vec3b>(i,image.cols-1-j)[1];
					  outImage.at<Vec3b>(i,j)[2] = image.at<Vec3b>(i,image.cols-1-j)[2];
				  }
		  }
	  }
  }

  void Qtest::rectTailor(Mat& image, Mat& outImage, int x1, int y1, int x2, int y2) {
	  Size s;
	  s.height = abs(y2 - y1);
	  s.width = abs(x2 - x1);

	  outImage.create(s, image.type());
	  const int channels = image.channels();

	  switch(channels)
	  {
	  case 1:
		  {
			  for(int i = x1; i < x2; i++)
				  for(int j = y1; j < y2; j++)
					  outImage.at<uchar>(i-x1,j-y1) = image.at<uchar>(i,j);
			  break;
		  }
	  case 3:
		  {
			  for(int i = x1; i < x2; i++)
				  for(int j = y1; j < y2; j++)
				  {
					  
					  outImage.at<Vec3b>(i-x1,j-y1)[0] = image.at<Vec3b>(i,j)[0];
					  outImage.at<Vec3b>(i-x1,j-y1)[1] = image.at<Vec3b>(i,j)[1];
					  outImage.at<Vec3b>(i-x1,j-y1)[2] = image.at<Vec3b>(i,j)[2];
				  }
		  }
	  }
  }

  void Qtest::overturn180(Mat& image, Mat& outImage)
  {
	  outImage.create(image.size(), image.type());
	  const int channels = image.channels();

	  switch(channels)
	  {
	  case 1:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
					  outImage.at<uchar>(i,j) = image.at<uchar>(image.rows-1-i,image.cols-1-j);
			  break;
		  }
	  case 3:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
				  {
					  
					  outImage.at<Vec3b>(i,j)[0] = image.at<Vec3b>(image.rows-1-i,image.cols-1-j)[0];
					  outImage.at<Vec3b>(i,j)[1] = image.at<Vec3b>(image.rows-1-i,image.cols-1-j)[1];
					  outImage.at<Vec3b>(i,j)[2] = image.at<Vec3b>(image.rows-1-i,image.cols-1-j)[2];
				  }
		  }
	  }

  }

  void Qtest::overturn90(Mat& image, Mat& outImage, bool isright){
	  Size s;
	  s.width = image.size().height;
	  s.height = image.size().width;
	  outImage.create(s, image.type());
	  const int channels = image.channels(); 

	  switch(channels)
	  {
	  case 1:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++) {

					  if(isright)
						  outImage.at<uchar>(j,image.rows-i) = image.at<uchar>(i,j);
					  else
						  outImage.at<uchar>(image.cols-j,i) = image.at<uchar>(i,j);
				  }
			  break;
		  }
	  case 3:
		  {
			  for(int i = 0; i < image.rows; i++)
				  for(int j = 0; j < image.cols; j++)
				  {
					  int xlabel, ylabel;
					  if(isright) {
						  xlabel = j; ylabel = image.rows-1-i;}
					  else {
						  xlabel = image.cols-1-j; ylabel = i;}
					  
					  outImage.at<Vec3b>(xlabel,ylabel)[0] = image.at<Vec3b>(i,j)[0];
					  outImage.at<Vec3b>(xlabel,ylabel)[1] = image.at<Vec3b>(i,j)[1];
					  outImage.at<Vec3b>(xlabel,ylabel)[2] = image.at<Vec3b>(i,j)[2];
				  }
		  }
	  }
  }

  void Qtest::showImage(Mat& image) {
	  switch(image.type()) {
	  case CV_8UC1:
		  cvtColor(image, _tmp, CV_GRAY2RGB);
		  break;
	  case CV_8UC3:
		  cvtColor(image, _tmp, CV_BGR2RGB);
		  break;
	  }
	  _qimage = QImage(_tmp.data, _tmp.cols,_tmp.rows,_tmp.cols*3,QImage::Format_RGB888);
	 // ui.picture->setPixmap(QPixmap::fromImage(_qimage));
	  ui.picture->setPixmap(QPixmap::fromImage(_qimage).scaled(ui.picture->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
	  ui.picture->show();
	  //this->setFixedSize(image.cols, image.row);
	  //repaint();
  }


  void Qtest::on_Qtest_reverseoperation(){
	  if(ui.updown->isChecked()) {
		  Mat result;
		  reverse(_origin, result);
		  _origin = result;
		  showImage(result);
	  }
	  else if(ui.leftright->isChecked()) {
		  Mat result;
		  reverselr(_origin, result);
		  _origin = result;
		  showImage(result);
	  }
  }

  void Qtest::on_Qtest_turnoperation() {
	  Mat result;
	  if(ui.angle2->isChecked()) {
		  overturn180(_origin, result);
		  _origin = result;
		  showImage(result);
	  } else if(ui.angle1->isChecked()) {
		  if(ui.turnleft->isChecked()) {
			  overturn90(_origin, result, false);
			  _origin = result;
			  showImage(result);
		  } else if (ui.turnright->isChecked()) {
			  overturn90(_origin, result, true);
			  _origin = result;
		      showImage(result);
		  }
	  }
  }

  void Qtest::on_Qtest_filesave() {
	  QString filename = QFileDialog::getSaveFileName(this, "Save file", "C://", "Images (*.png *.xpm *.jpg)");
	  imwrite(filename.toStdString(), _origin); 
  }

  void Qtest::Mouse_current_pos()
  {
	  ui.xlabel->setText(QString("X: %1").arg(ui.picture->x));
	  ui.ylabel->setText(QString("Y: %1").arg(ui.picture->y));
  }

  void Qtest::Mouse_Pressed()
  {
  }

  void Qtest::Mouse_left()
  {
	  ui.xlabel->setText(QString("X: "));
	  ui.ylabel->setText(QString("Y: "));

  }