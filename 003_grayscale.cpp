#include "opencv2/highgui.hpp"
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>


using namespace cv;
using namespace std;


int main() 
{
    Mat img;
    Mat gray;

    img = imread("images.png");

    //rgb_color = cv::cvtColor(img, rgb_color, cv::COLOR_RGB2BGR);
    cvtColor(img, gray, COLOR_BGR2GRAY);
    namedWindow("img", CV_WINDOW_AUTOSIZE);
    namedWindow("GRAY", CV_WINDOW_AUTOSIZE);

    imshow("img", img);
    imshow("GRAY", gray);

    waitKey(0);
    return 0;
}

