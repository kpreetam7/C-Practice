#include<stdio.h>
#include<conio.h>
int main()
{
    int *p1, *p2, sum;
    printf("Enter two no's: ");
    scanf("%d %d", &*p1, &*p2);
    sum= *p1 + *p2;
    printf("sum=%d",sum);
    return 0;

}