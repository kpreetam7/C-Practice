#include<stdio.h>

int main()
{
    int num, remainder;
    printf("Enter your number to be tested:");
    scanf("%i",&num);

    remainder=num%2;

    if(remainder==0)
        printf("The number is EVEN.\n");
    else
        printf("The number is ODD\n");
    
    return 0;
    }