#include <iomanip>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
    printf("Hello world!");

    Mat image = imread("e:/p001.jpg");
    imshow("Dachshund",image);
    waitKey(0);

    return 0;
}
