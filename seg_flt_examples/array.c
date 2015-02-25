#include <stdio.h>

int main()
{
     
/* "Array out of bounds" error valid indices for array foo are 0, 1, ... 999 */

    int foo[1000];
     int k;
    for (k = 0; k < 10000 ; k++)
{
     foo[k] = k;
}
/* Illegal memory access if value of n is not in the range 0, 1, ... 999 */

    int n;
    n=1002;
    int i;
    int foo3[10000];

    for ( i= 0; i < n ; i++)

     {foo3[i] = i;}

/* Illegal memory access because no memory is allocated for foo2 */

    float *foo1, *foo2;

    foo1 = (float*)malloc(32);

    foo2[0] = 1.0;
}
