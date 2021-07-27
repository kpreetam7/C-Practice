#include<stdio.h>
#include<conio.h>
int main()
{
    int n; 
    printf("enter a number:");
    scanf("%d", &n);
    if (n<0)
    printf("invalid number");
    else 
    printf("%d!= %d", n, fact(n));
    return 0;
}
int fact(int x)
{
    if(x==0)
    return 1;
    else 
    return(x*fact(x-1));
}