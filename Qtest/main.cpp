#include "qtest.h"
#include <iostream>
#include <QtWidgets/QApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qtest w;
	w.show();


  //  Mat image;
 //   image = imread("C:\\Users\\thinkpad\\Desktop\\lina.jpg", CV_LOAD_IMAGE_COLOR);   // Read the file

 //   if(! image.data )                              // Check for invalid input
 //   {
 //       cout <<  "Could not open or find the image" << std::endl ;
 //       return -1;
 //   }

 //   namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
 //   imshow( "Display window", image );                   // Show our image inside it.

	//waitKey(0);
	//return 0;
	return a.exec();
}
