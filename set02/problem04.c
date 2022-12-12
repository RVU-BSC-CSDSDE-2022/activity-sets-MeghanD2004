#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the array length: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d Numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0 && array[i] % 3 != 0)
        {
            sum += array[i];
        }
    }

    printf("Sum of Composite Numbers in Array = %d", sum);
    return 0;
}