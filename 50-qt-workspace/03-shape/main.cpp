#include <iomanip>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
using namespace std;


//主函数
int main() {

    int delay = 500; //1s

    //读取原图
    Mat image = imread("e:/p005.jpg");
    imshow("fruit", image);
    waitKey(delay);

    //转为灰度图像
    Mat grayImg;
    cvtColor(image, grayImg, COLOR_BGR2GRAY);
    imshow("gray", grayImg);
    waitKey(delay);

    //降噪
    Mat blurImg;
    int size = 6;
    blur(grayImg, blurImg, Size(size, size));
    imshow("blur", blurImg);
    waitKey(delay);

    //Canny运算
    Mat edgeImg;
    Canny(blurImg, edgeImg, 3, 9, 3);
    imshow("edge", edgeImg);

    waitKey();
    return 0;
}
