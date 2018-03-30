#include "opencv2/highgui.hpp"
#include <iostream>


using namespace cv;
using namespace std;


int main(int argc, const char** argv) 
{

    //https://en.wikipedia.org/wiki/8-bit_color
    //https://en.wikipedia.org/wiki/Color_depth
    //Any primitive type below can be defined by an identifier in the
    //form CV_<bit-depth>{U|S|F}C(<number_of_channels>) where U is unsigned
    //integer type, S is signed integer type, and F is float type.so CV_8UC3
    //is an 8-bit unsigned integer matrix/image with 3 channels.

    // create your mat
    Mat img(300, 300, CV_8UC1, Scalar(127));
    //Mat img(300, 300, CV_8UC3, cv::Scalar(0,255,255));
    
    //watch for unforeseen circumstances
    if (img.empty()) {
       cout << "Image not found" << endl;
       return -1;
}

    namedWindow("1 channel", CV_WINDOW_AUTOSIZE);
    imshow("1 channel", img);


    waitKey(0);
    return 0;

}
