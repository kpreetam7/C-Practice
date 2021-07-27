#include<stdio.h>
void main()
{
    void swap(int, int);
    int a, b, r;
    printf("enter the value for a and b:\n");
    scanf("%d%d", &a, &b);
    swap(a,b);
    
    getch();
}
void swap(int a, int b)
{
    int temp;
    temp=a; 
    a=b;
    b=temp;
     printf("after swapping a and b are%d and \n%d", a, b);

}