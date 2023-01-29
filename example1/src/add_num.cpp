#include "add_num.h"

OP::OP(int x,int y)
{
  gx = x;
  gy = y;
}

int OP::getSum()
{
  return gx + gy;
}

int OP::getSubtract()
{
  return gx - gy;
}

int OP::getProduct()
{
  return gx * gy;
}

int OP::getQuotient()
{
  return gx / gy;
}

int OP::getPower()
{
  int a = gx;
  for (int i = 0; i < gy - 1; ++i) {
    a = a * gx;
  }
  return a;
}
