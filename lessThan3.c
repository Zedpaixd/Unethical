#include <stdio.h>
_Pragma("GCC diagnostic ignored \"-Wint-conversion\"")
void main()
{
    int a = 6, b = &(*a*&(2)/&(*a));
    typedef struct _
    { char whatever[b]; } bb;
    b = (bb*)a - (bb*)0;
    char *x = ~b, *y = a;
    printf("<%d",&x[(int) &1[y]]);
}