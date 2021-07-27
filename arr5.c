#include<stdio.h>
#SUB 5;
int main()
{
    int i, a[i], sum=0;
    float avg;
    printf("enter marks of 5 subjects: ");
    for(i=0; i<5; i++)
    scanf("%d", &a[i]);
    for(i=0; i<5; i++)
    sum = sum+a[i];
    printf("total marks= %d\n",sum);
    avg= sum/5.0;
    printf("average=%f", avg);
    return 0;
}