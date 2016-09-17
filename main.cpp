#include <core/core.hpp>
#include <highgui/highgui.hpp>
#include "highgui.h"
#include "cv.h"
#include "cxcore.h"
#include <iostream>
#include <Windows.h>
#include <Math.h>
#include "constdf.h"
#include <vector>

using namespace std;

int getKey(CvPoint point)
{
    int x = point.x;
    int y = point.y;
    int keyCode = 0;

    if (abs(x - ONE_X) < SMALL_GAP && abs(y - ONE_Y) < SMALL_GAP)
        keyCode = ONE_CODE;
    else if (abs(x - TWO_X) < SMALL_GAP && abs(y - TWO_Y) < SMALL_GAP)
        keyCode = TWO_CODE;
    else if (abs(x - THREE_X) < SMALL_GAP && abs(y - THREE_Y) < SMALL_GAP)
        keyCode = THREE_CODE;
    else if (abs(x - FOUR_X) < SMALL_GAP && abs(y - FOUR_Y) < SMALL_GAP)
        keyCode = FOUR_CODE;
    else if (abs(x - FIVE_X) < SMALL_GAP && abs(y - FIVE_Y) < SMALL_GAP)
        keyCode = FIVE_CODE;
    else if (abs(x - SIX_X) < SMALL_GAP && abs(y - SIX_Y) < SMALL_GAP)
        keyCode = SIX_CODE;
    else if (abs(x - SEVEN_X) < SMALL_GAP && abs(y - SEVEN_Y) < SMALL_GAP)
        keyCode = SEVEN_CODE;
    else if (abs(x - EIGHT_X) < SMALL_GAP && abs(y - EIGHT_Y) < SMALL_GAP)
        keyCode = EIGHT_CODE;
    else if (abs(x - NINE_X) < SMALL_GAP && abs(y - NINE_Y) < SMALL_GAP)
        keyCode = NINE_CODE;
    else if (abs(x - ZERO_X) < SMALL_GAP && abs(y - ZERO_Y) < SMALL_GAP)
        keyCode = ZERO_CODE;
    else if (abs(x - MINUS_X) < SMALL_GAP && abs(y - MINUS_Y) < SMALL_GAP)
        keyCode = MINUS_CODE;
    else if (abs(x - PLUS_X) < SMALL_GAP && abs(y - PLUS_Y) < SMALL_GAP)
        keyCode = PLUS_CODE;
    else if (abs(x - ESC_X) < SMALL_GAP && abs(y - ESC_Y) < SMALL_GAP)
        keyCode = ESC_CODE;
    else if (abs(x - Q_X) < SMALL_GAP && abs(y - Q_Y) < SMALL_GAP)
        keyCode = Q_CODE;
    else if (abs(x - W_X) < SMALL_GAP && abs(y - W_Y) < SMALL_GAP)
        keyCode = W_CODE;
    else if (abs(x - E_X) < SMALL_GAP && abs(y - E_Y) < SMALL_GAP)
        keyCode = E_CODE;
    else if (abs(x - R_X) < SMALL_GAP && abs(y - R_Y) < SMALL_GAP)
        keyCode = R_CODE;
    else if (abs(x - T_X) < SMALL_GAP && abs(y - T_Y) < SMALL_GAP)
        keyCode = T_CODE;
    else if (abs(x - Y_X) < SMALL_GAP && abs(y - Y_Y) < SMALL_GAP)
        keyCode = Y_CODE;
    else if (abs(x - U_X) < SMALL_GAP && abs(y - U_Y) < SMALL_GAP)
        keyCode = U_CODE;
    else if (abs(x - I_X) < SMALL_GAP && abs(y - I_Y) < SMALL_GAP)
        keyCode = I_CODE;
    else if (abs(x - O_X) < SMALL_GAP && abs(y - O_Y) < SMALL_GAP)
        keyCode = O_CODE;
    else if (abs(x - P_X) < SMALL_GAP && abs(y - P_Y) < SMALL_GAP)
        keyCode = P_CODE;
    else if (abs(x - BACK_X) < SMALL_GAP && abs(y - BACK_Y) < SMALL_GAP)
        keyCode = BACK_CODE;
    else if (abs(x - CAP_X) < SMALL_GAP && abs(y - CAP_Y) < SMALL_GAP)
        keyCode = CAP_CODE;
    else if (abs(x - TAB_X) < SMALL_GAP && abs(y - TAB_Y) < SMALL_GAP)
        keyCode = TAB_CODE;
    else if (abs(x - A_X) < SMALL_GAP && abs(y - A_Y) < SMALL_GAP)
        keyCode = A_CODE;
    else if (abs(x - S_X) < SMALL_GAP && abs(y - S_Y) < SMALL_GAP)
        keyCode = S_CODE;
    else if (abs(x - D_X) < SMALL_GAP && abs(y - D_Y) < SMALL_GAP)
        keyCode = D_CODE;
    else if (abs(x - F_X) < SMALL_GAP && abs(y - F_Y) < SMALL_GAP)
        keyCode = F_CODE;
    else if (abs(x - G_X) < SMALL_GAP && abs(y - G_Y) < SMALL_GAP)
        keyCode = G_CODE;
    else if (abs(x - H_X) < SMALL_GAP && abs(y - H_Y) < SMALL_GAP)
        keyCode = H_CODE;
    else if (abs(x - J_X) < SMALL_GAP && abs(y - J_Y) < SMALL_GAP)
        keyCode = J_CODE;
    else if (abs(x - K_X) < SMALL_GAP && abs(y - K_Y) < SMALL_GAP)
        keyCode = K_CODE;
    else if (abs(x - L_X) < SMALL_GAP && abs(y - L_Y) < SMALL_GAP)
        keyCode = L_CODE;
    else if (abs(x - COLON_X) < SMALL_GAP && abs(y - COLON_Y) < SMALL_GAP)
        keyCode = COLON_CODE;
    else if (abs(x - ENTER_X) < SMALL_GAP && abs(y - ENTER_Y) < SMALL_GAP)
        keyCode = ENTER_CODE;
    else if (abs(x - LSHIFT_X) < SMALL_GAP && abs(y - LSHIFT_Y) < SMALL_GAP)
        keyCode = LSHIFT_CODE;
    else if (abs(x - WAVE_X) < SMALL_GAP && abs(y - WAVE_Y) < SMALL_GAP)
        keyCode = WAVE_CODE;
    else if (abs(x - SLASH_X) < SMALL_GAP && abs(y - SLASH_Y) < SMALL_GAP)
        keyCode = SLASH_CODE;
    else if (abs(x - Z_X) < SMALL_GAP && abs(y - Z_Y) < SMALL_GAP)
        keyCode = Z_CODE;
    else if (abs(x - X_X) < SMALL_GAP && abs(y - X_Y) < SMALL_GAP)
        keyCode = X_CODE;
    else if (abs(x - C_X) < SMALL_GAP && abs(y - C_Y) < SMALL_GAP)
        keyCode = C_CODE;
    else if (abs(x - V_X) < SMALL_GAP && abs(y - V_Y) < SMALL_GAP)
        keyCode = V_CODE;
    else if (abs(x - B_X) < SMALL_GAP && abs(y - B_Y) < SMALL_GAP)
        keyCode = B_CODE;
    else if (abs(x - N_X) < SMALL_GAP && abs(y - N_Y) < SMALL_GAP)
        keyCode = N_CODE;
    else if (abs(x - M_X) < SMALL_GAP && abs(y - M_Y) < SMALL_GAP)
        keyCode = M_CODE;
    else if (abs(x - COMMA_X) < SMALL_GAP && abs(y - COMMA_Y) < SMALL_GAP)
        keyCode = COMMA_CODE;
    else if (abs(x - PERIOD_X) < SMALL_GAP && abs(y - PERIOD_Y) < SMALL_GAP)
        keyCode = PERIOD_CODE;
    else if (abs(x - QUESTION_X) < SMALL_GAP && abs(y - QUESTION_Y) < SMALL_GAP)
        keyCode = QUESTION_CODE;
    else if (abs(x - UP_X) < SMALL_GAP && abs(y - UP_Y) < SMALL_GAP)
        keyCode = UP_CODE;
    else if (abs(x - RSHIFT_X) < SMALL_GAP && abs(y - RSHIFT_Y) < SMALL_GAP)
        keyCode = RSHIFT_CODE;
    else if (abs(x - CTRL_X) < SMALL_GAP && abs(y - CTRL_Y) < SMALL_GAP)
        keyCode = CTRL_CODE;
    else if (abs(x - FN_X) < SMALL_GAP && abs(y - FN_Y) < SMALL_GAP)
        keyCode = FN_CODE;
    else if (abs(x - ALT_X) < SMALL_GAP && abs(y - ALT_Y) < SMALL_GAP)
        keyCode = ALT_CODE;
    else if (abs(x - LBRAK_X) < SMALL_GAP && abs(y - LBRAK_Y) < SMALL_GAP)
        keyCode = LBRAK_CODE;
    else if (abs(x - RBRAK_X) < SMALL_GAP && abs(y - RBRAK_Y) < SMALL_GAP)
        keyCode = RBRAK_CODE;
    else if (abs(x - SPACE_X) < BIG_GAP && abs(y - SPACE_Y) < BIG_GAP)
        keyCode = SPACE_CODE;
    else if (abs(x - QUOT_X) < SMALL_GAP && abs(y - QUOT_Y) < SMALL_GAP)
        keyCode = QUOT_CODE;
    else if (abs(x - DEL_X) < SMALL_GAP && abs(y - DEL_Y) < SMALL_GAP)
        keyCode = DEL_CODE;
    else if (abs(x - LEFT_X) < SMALL_GAP && abs(y - LEFT_Y) < SMALL_GAP)
        keyCode = LEFT_CODE;
    else if (abs(x - DOWN_X) < SMALL_GAP && abs(y - DOWN_Y) < SMALL_GAP)
        keyCode = DOWN_CODE;
    else if (abs(x - RIGHT_X) < SMALL_GAP && abs(y - RIGHT_Y) < SMALL_GAP)
        keyCode = RIGHT_CODE;

    return keyCode;
}

bool inVector(int elm, vector<int> vec)
{
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it ++)
    {
        if (elm == (*it))
            return true;
    }
    return false;
}

int main()
{
    const char* pSrcWindowName = "src";
    const char* pDstWindowName = "dst";

    CvMat* intrinsic_matrix = cvCreateMat(3, 3, CV_32FC1);
    CvMat* distortion_coef = cvCreateMat(5, 1, CV_32FC1);
    intrinsic_matrix->data.fl[0] = 359.7283;
    intrinsic_matrix->data.fl[1] = 0;
    intrinsic_matrix->data.fl[2] = 319.5000;
    intrinsic_matrix->data.fl[3] = 0;
    intrinsic_matrix->data.fl[4] = 359.7283;
    intrinsic_matrix->data.fl[5] = 239.5000;
    intrinsic_matrix->data.fl[6] = 0;
    intrinsic_matrix->data.fl[7] = 0;
    intrinsic_matrix->data.fl[8] = 1;
    distortion_coef->data.fl[0] = -0.3755;
    distortion_coef->data.fl[1] = 0.1698;
    distortion_coef->data.fl[2] = 0;
    distortion_coef->data.fl[3] = 0;
    distortion_coef->data.fl[4] = -0.0285;

    IplImage* pSrcFrame;


    CvCapture* capture = cvCreateCameraCapture(0);

    CvMemStorage* pMem = cvCreateMemStorage();
    CvSeq* pSeq = NULL;

    cvNamedWindow(pSrcWindowName, CV_WINDOW_AUTOSIZE);
    cvNamedWindow(pDstWindowName, CV_WINDOW_AUTOSIZE);

    pSrcFrame = cvQueryFrame(capture);
    IplImage* pUndistort = cvCreateImage(cvGetSize(pSrcFrame), IPL_DEPTH_8U, 3);
    IplImage* pGray = cvCreateImage(cvGetSize(pSrcFrame), IPL_DEPTH_8U, 1);
    IplImage* pBinary = cvCreateImage(cvGetSize(pGray), IPL_DEPTH_8U, 1);
    IplImage* pDst;

    vector<int> currentKey;
    vector<int> lastKey;
    while (1)
    {
        pSrcFrame = cvQueryFrame(capture);
        if (!pSrcFrame) break;

        //pDstFrame = cvCreateImage(cvGetSize(pSrcFrame), IPL_DEPTH_8U, 3);
        cvUndistort2(pSrcFrame, pUndistort, intrinsic_matrix, distortion_coef);

        //pGray = cvCreateImage(cvGetSize(pDstFrame), IPL_DEPTH_8U, 1);
        cvCvtColor(pUndistort, pGray, CV_BGR2GRAY);

        //pBinary = cvCreateImage(cvGetSize(pGray), IPL_DEPTH_8U, 1);
        cvThreshold(pGray, pBinary, 10, 255, CV_THRESH_BINARY);

        cvSmooth(pBinary, pBinary, CV_GAUSSIAN, 3);

        pDst = cvCreateImage(cvGetSize(pBinary), IPL_DEPTH_8U, 3);
        cvFindContours(pBinary, pMem, &pSeq, sizeof(CvContour), CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cvPoint(0, 0));
        //cvDrawContours(pDst, pSeq, CV_RGB(255,0,0), CV_RGB(0,255,0), 5, 2);

        while (pSeq != NULL)
        {
            CvRect rect = cvBoundingRect(pSeq, 1);
            CvPoint pt1, pt2;
            CvPoint pc;
            pt1.x = rect.x;
            pt1.y = rect.y;
            pt2.x = rect.x + rect.width;
            pt2.y = rect.y + rect.height;
            cvRectangle(pDst, pt1, pt2, CV_RGB(255, 255, 0));
            pc.x = (pt1.x + pt2.x) / 2;
            pc.y = (pt1.y + pt2.y) / 2;
            int keyCode = getKey(pc);
            if (keyCode != 0)
            {
                if (!inVector(keyCode, lastKey) && !inVector(keyCode, currentKey))
                {
                    //keybd_event(keyCode, 0, 0, 0);
                    currentKey.push_back(keyCode);
                }
            }

            pSeq = pSeq->h_next;
        }

        for (vector<int>::iterator it = lastKey.begin(); it != lastKey.end(); it ++)
        {
            if (!inVector(*it, currentKey))
            {
                //keybd_event(*it, 0, KEYEVENTF_KEYUP, 0);
            }
        }

        lastKey.clear();
        for (vector<int>::iterator it = currentKey.begin(); it != currentKey.end(); it ++)
        {
            lastKey.push_back(*it);
        }

        cvShowImage(pSrcWindowName, pUndistort);
        cvShowImage(pDstWindowName, pDst);
        char c = cvWaitKey(33);
        if (c == 27) break;

        cvReleaseImage(&pDst);
    }


    cvReleaseCapture(&capture);
    cvReleaseMemStorage(&pMem);
    cvReleaseImage(&pUndistort);
    cvReleaseImage(&pGray);
    cvReleaseImage(&pBinary);
    cvReleaseImage(&pDst);
    cvDestroyAllWindows();
}

