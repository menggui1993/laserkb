#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main()
{
    /*IplImage *pFrame;
    CvCapture* pCapture = cvCaptureFromCAM(1);
    if (!pCapture)
        return -1;
    cvNamedWindow("test", CV_WINDOW_AUTOSIZE);
    while (1){
        pFrame = cvQueryFrame(pCapture);
        if (!pFrame) break;
        cvShowImage("test", pFrame);
        char c = cvWaitKey(33);
        if (c == 27) break;
    }
    cvReleaseCapture(&pCapture);
    cvDestroyWindow("test");*/

    Mat img = cv::imread("d://1.jpg");
    namedWindow("test", CV_WINDOW_AUTOSIZE);
    imshow("test", img);
    waitKey(0);
    return 0;
}
