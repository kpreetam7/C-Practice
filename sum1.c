
#include <stdio.h>
#include <conio.h>
int main()

{
    int num,a,b,c,d,d1,d2,d3,d4,sum;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    a=num/10;
    d1=num%10;
    b=a/10;
    d2=a%10;
    c=b/10;
    d3=b%10;
    d=c/10;
    d4=c%10;
    sum=d1+d4;
    printf("the sum of 1st and 4th digits is %d",sum);
    getch ();
}