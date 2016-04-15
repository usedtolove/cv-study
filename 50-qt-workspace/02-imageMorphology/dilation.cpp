#include <iomanip>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

//demo Dilation
static void demoDilation(){
    Mat image = imread("e:/p003.jpg");
    imshow("Dachshund",image);

    Mat seKernalRect = getStructuringElement(MORPH_RECT, Size(2, 2));
    Mat dst;
    dilate(image,dst,seKernalRect);

    imshow("dilate", dst);

    waitKey(0);
}
