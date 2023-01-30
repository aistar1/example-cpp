#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char** argv )
{
    if (argc != 2)
    {
        printf("usage: ./test_opencv <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread(argv[1], 1);
    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }
    
    int w = image.cols;
    int h = image.rows;
    printf("image width: %d \n", w);
    printf("image heigh: %d \n", h);
    imwrite("original.jpg", image);

    // convert to gray
    Mat image_gray;
    cvtColor(image, image_gray, COLOR_BGR2GRAY);
    imwrite("gray.jpg", image_gray);

    // flip
    Mat image_flip;
    flip(image, image_flip, 0);
    imwrite("flip.jpg", image_flip);

    // rectangle box
    Mat image_box;
    rectangle(image, Rect(56,397,192,505), Scalar(255,0,0),10,1,0);
    rectangle(image, Rect(228,413,124,450), Scalar(255,0,0),10,1,0);
    imwrite("box.jpg", image);

    return 0;
}