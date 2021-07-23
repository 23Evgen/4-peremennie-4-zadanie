#include <stdio.h>

int max4 (int , int,int , int);


int maxmin(int a, int b, int c, int d){

  int res = max4 (a, b,c,d);

  if (res == a ) return max4(b,b,c,d);
  if (res == b ) return max4(a,a,c,d);
  if (res == c ) return max4(a,b,d,d);
  if (res == d ) return max4(a,b,c,c);
  
    
}