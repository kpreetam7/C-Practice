#include<stdio.h>
#include<conio.h>
int main()
{
float r,l,b,s,area, per;
printf("enter the radius of circle\n");
scanf("%f",&r);
area= (3.14*r*r);
printf ("the area of the circle is %f\n",area);
per=2*3.14*r;
printf ("The Perimeter of circle is %f\n",per);

printf("Enter the side of the square\n");
scanf("%f",&s);
area= (s*s);
printf("The area of square is %f\n",area);
per=(4*s);
printf("The perimeter of square is %f\n",per);


}