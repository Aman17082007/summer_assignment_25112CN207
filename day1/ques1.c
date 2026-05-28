// sum of first n natural number
#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("\nEnter number upto which sum have to be find :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nsum of first %d natural number is %d ", n, sum);
    return 0;
}
