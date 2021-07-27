#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1, b=1, c=0, i;
    printf("%d\t%d\t", a, b);
    for ( i= 0; i<=20; i++)
    {
        c= a+b;
        if(c<200)
        {
            printf("%d\t",c);
        }
        a=b;
        b=c;
    }
    getch ();
}