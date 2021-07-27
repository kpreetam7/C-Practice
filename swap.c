#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    
    printf("Enter value for a & b:");
    scanf("%d%d", &a, &b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("after swapping the value of a & b: %d and %d", a,b);
    getch ();
}