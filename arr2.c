#include<stdio.h>
int main()
{
    int num[10];
    int i;

    for(i=0; i<10; ++i)
    num[i]= i*i;

    for(i=0; i<10; ++i)
    printf(" num[%i]=%i\n", i, num[i]);

    return 0;
}