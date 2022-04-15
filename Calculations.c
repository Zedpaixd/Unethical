#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int multiplyBad(int a, int b)
{
    char c[a][b];
    return sizeof c;
}

int multiplyGood(int m, int n){
    if (n==1){
        char a[m];
        return sizeof a;
    } else if (n == 2) {
        int16_t a[m];
        return sizeof a;
    } else if (n == 4) {
        int32_t a[m];
        return sizeof a;
    } else if (n == 8) {
        int64_t a[m];
        return sizeof a;
    } else {
        char a[m][n];
        return sizeof a;
    }

}

int multiply(int m, int n)
{
    if (m>n)
        return (multiplyGood(m,n));
    else
        return (multiplyGood(n,m));
}

int add(int a, int b){
    void *x = a;
    return &(b[x]);
}

int subtract(int a, int b){
    char *x = a, *y = ~b;
    return &x[(int) &1[y]];
}

int division(int a, int b){
    typedef struct _
    {
        char whatever[b];
    } bb;
    return (bb*)a - (bb*)0;
}

int multiplyV2(int a, int b){
    typedef struct _
    {
        char whatever[b];
    } bb;
    return &((bb*)0)[a];    
}

int main(int argc, char const *argv[])
{
    printf("%d\n",multiplyV2(3,5));
    printf("%d",division(5,2));
    return 0;
}