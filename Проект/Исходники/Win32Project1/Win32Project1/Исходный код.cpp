#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <stdio.h>
#pragma comment (lib,"Gdiplus.lib")
#pragma comment (lib,"User32.lib")

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	VideoCapture cap(0); //

	cap.open("http://192.168.43.200:8080/video?vidscreen.mjpeg");
	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the video cam" << endl;
		return -1;
	}
	namedWindow("VideoCapture", CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"
		Mat save_img; cap >> save_img;
		imwrite("photo.jpg", save_img);
	return 0;
}