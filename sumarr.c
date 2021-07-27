#include<stdio.h>
int main() {
int a[3][2], b[3][2], c[3][2], d[3][2], i, j;
printf("enter the value of matrix a:\n");
for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    scanf("%d", &a[i][j]);
}  
printf("enter the value of matrix b:\n");
for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    scanf("%d", &b[i][j]);
}  
for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    c[i][j]=a[i][j]+b[i][j];
}  
printf ("sum of matrix a and b:\n");
for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
   { printf("%d\t", c[i][j]);
   }
    printf("\n");
}  

for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    d[i][j]=a[i][j]-b[i][j];
}  
printf ("sub of matrix a and b:\n");
for( i=0; i<3; i++)
{
    for (j=0; j<2; j++)
   { printf("%d\t", d[i][j]);
   }
    printf("\n");
}  

  return 0;
}