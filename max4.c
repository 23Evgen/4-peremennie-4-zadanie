#include <stdio.h>

int max(int , int);

int max4(int a, int b, int c, int d){

  int res = max (a, b);
  int res1 = max (res, c);
  res = max (res1,d) ;
  return res;
   
    
}