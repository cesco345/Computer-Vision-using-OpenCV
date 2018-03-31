#include "opencv2/highgui.hpp"
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>


using namespace cv;
using namespace std;


int main() 
{
    Mat img;
    Mat rgb_color;

    img = imread("images.png");

    //rgb_color = cv::cvtColor(img, rgb_color, cv::COLOR_RGB2BGR);
    cvtColor(img, rgb_color, COLOR_BGR2RGB);
    namedWindow("img", CV_WINDOW_AUTOSIZE);
    namedWindow("rgb_color", CV_WINDOW_AUTOSIZE);

    imshow("img", img);
    imshow("rgb_color", rgb_color);

    waitKey(0);
    return 0;
}

