#include <stdio.h>
#include <math.h>
 int main()
  {
      float a,b,c,s,m,area;
      printf("enter the sides of the triangle:");
      scanf("%f%f%f", &a,&b,&c);
      s=(a+b+c)/2;
      m=s*(s-a)*(s-b)*(s-c);
      area=sqrt(m);
      printf("the area of the triangle is %f",area);
    return 0;
}