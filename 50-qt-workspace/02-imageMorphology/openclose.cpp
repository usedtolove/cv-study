#include <iomanip>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;


static void demoOpenClose(){

    Mat src1 = imread("e:/p004.jpg");
    imshow("pic03", src1);

//    以下代码有问题，无法编译成功
//    int filterSize = 2;
//    IplConvKernel *convKernel = cvCreateStructuringElementEx(filterSize, filterSize, (filterSize - 1) / 2, (filterSize - 1) / 2, CV_SHAPE_RECT, NULL);
//    cvMorphologyEx(src1, dest1, NULL, convKernel, CV_MOP_OPEN);

//    由于 opening = dilate(erode(src,dst))
//    使用 erode ==> dilate 进行替代
    int size = 3;

    //step 1:
    Mat seKernalRect = getStructuringElement(MORPH_RECT, Size(size, size));
    Mat dest1;
    erode(src1,dest1,seKernalRect);
    imshow("step1", dest1);

    //step 2:
    seKernalRect = getStructuringElement(MORPH_RECT, Size(size, size));
    Mat dest2;
    dilate(dest1,dest2,seKernalRect);
    imshow("step2", dest2);

    seKernalRect = getStructuringElement(MORPH_RECT, Size(size, size));
    Mat dest3;
    dilate(dest2,dest3,seKernalRect);
    imshow("step3", dest3);

    seKernalRect = getStructuringElement(MORPH_RECT, Size(size, size));
    Mat dest4;
    erode(dest3,dest4,seKernalRect);
    imshow("step4", dest4);

    waitKey(0);
}
