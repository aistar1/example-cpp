#include"add_num.h"
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int argc, char *argv[]){
   int x = 10;
   int y = 2;
   OP a(x, y);
   int resultSum = a.getSum();
   int resultSubtract = a.getSubtract();
   int resultProduct = a.getProduct();
   int resultQuotient = a.getQuotient();
   int resultPower = a.getPower();

   cout << x << '+' << y << '=' << resultSum << endl;
   cout << x << '-' << y << '=' << resultSubtract << endl;
   cout << x << '*' << y << '=' << resultProduct << endl;
   cout << x << '/' << y << '=' << resultQuotient << endl;
   cout << x << '^' << y << '=' << resultPower << endl;

   return 0;
}