#include "functions.h"


int sumOfSquares(int n) 
{
    if (n == 0)
    return 0;
  else
  return n*n+sumOfSquares(n-1);
}

int findFactorial(int n)
{
    if(n == 0 || n == 1)
    return 1;
    return n * findFactorial(n - 1);
}




