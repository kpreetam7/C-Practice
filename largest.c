#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, a[i];
    printf("how many no  u want to enter:");
     scanf("%d", &n);
    printf("enter the elements of the array:");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
     printf("maximum no= %d", max(a[i]));
return 0;
}
int max(int x)
{
    int a[5], max, i;
    max= a[0];
    for (i=0; i<5; i++)
    {
        if (max<a[x])
        max= a[x];
    }
   return (max);

}