#include <iomanip>
#include <iostream>
#include <erosion.cpp>
#include <dilation.cpp>
#include <openclose.cpp>
using namespace cv;
using namespace std;

//print Menu
void printMenu(){
    cout << "1.erosion" << endl;
    cout << "2.dilation" << endl;
    cout << "3.openAndClose" << endl;
    cout << "enter your choose:" << endl;
}


//主函数
int main()
{
    printMenu();

    int input;
    cin >> input;

    switch (input) {
    case 1:
        demoErosion();
        break;
    case 2:
        demoDilation();
        break;
    case 3:
        demoOpenClose();
        break;
    default:
        break;
    }

    return 0;
}
