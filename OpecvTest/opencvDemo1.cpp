#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\imgproc\types_c.h>

using namespace std;
using namespace cv;

int main()
{
    /*
    Mat img = imread("Lena.jpg");
    imshow("test", img);
    cvtColor(img, img, CV_RGB2GRAY);
    imshow("test", img);
    waitKey(0);
    return 0;
    */

    VideoCapture cap(0);
    if(!cap.isOpened())
    {
        return -1;
    }
    Mat frame;
    Mat edges;

    bool stop = false;
    while(!stop)
    {
        cap>>frame;
        cvtColor(frame, edges, CV_BGR2GRAY);
        GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        Canny(edges, edges, 0, 30, 3);
        imshow("µ±Ç°ÊÓÆµ",edges);
        if(waitKey(30) >=0)
            stop = true;
    }
    return 0;
}

