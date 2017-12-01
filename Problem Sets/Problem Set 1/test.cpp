#include <iostream>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/imgproc/imgproc.hpp>


using namespace cv; 

int main(int argc, char** argv){
    Mat image;
    Mat grayImage; 

    if(!argv[1]){
        std::cerr << "No image data!" << std::endl;
        return -1; 
    }

    image = imread(argv[1], 1);
    cvtColor(image, grayImage, CV_BGR2GRAY);
    imwrite("Gray_Image.jpg", grayImage);

    namedWindow(argv[1], CV_WINDOW_AUTOSIZE);
    namedWindow("Gray Image", CV_WINDOW_AUTOSIZE);

    imshow(argv[1], image);
    imshow("Gray Image", grayImage);

    waitKey(0);
    return 0;
}
