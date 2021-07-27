#include<stdio.h>
int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of the integers you want to sum: ");
    scanf(" %u", &count);
    unsigned int i;
    for ( i = 1 ; i<= count ; ++i )
        sum +=i;
    printf("\nTotal of the first %u numbers is %u\n", count, sum);

    return 0;
}