#include <stdio.h>
int main(void)
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 10, k = 3, n = 5;
    int i = 0, j = 0;
    printf("The original array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf("LA[%d]=%d\n", i, LA[i]);
    }

    j = k;
    while (j < n)
    {
        LA[j] = LA[j + 1];
        j = j + 1;
    }

    n = n - 1;

    printf("The array elements after deletion : \n");
    for (i = 0; i < n; i++)
    {
        printf("LA[%d]=%d\n", i, LA[i]);
    }

    return 0;
}