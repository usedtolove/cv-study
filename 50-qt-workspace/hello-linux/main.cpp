#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    printf("Hello world!");

    Mat image = imread("e:/maogou_25b.JPG");
    imshow("li",image);
    waitKey(0);

//    Mat img(Size(200,200), CV_8UC3, Scalar(128,0,255));
//    cout << "M = "<< endl << " "  << img << endl << endl;

    return 0;
}
