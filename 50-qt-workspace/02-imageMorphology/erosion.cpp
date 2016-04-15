#include <iomanip>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

//demo Dilation
static void demoErosion(){
    Mat image = imread("e:/p002.jpg");
    imshow("Dachshund",image);

    //get SE 6*6
    Mat seKernalRect = getStructuringElement(MORPH_RECT, Size(6, 6));
    Mat dst;
    erode(image,dst,seKernalRect);
    //show dst
    imshow("erosion 6*6",dst);

    //get SE 12*12
    seKernalRect = getStructuringElement(MORPH_RECT, Size(12, 12));
    erode(image,dst,seKernalRect);
    //show dst
    imshow("erosion 12*12",dst);

    //get SE 24*24
    seKernalRect = getStructuringElement(MORPH_RECT, Size(24, 24));
    erode(image,dst,seKernalRect);
    //show dst
    imshow("erosion 24*24",dst);

    waitKey(0);
}
