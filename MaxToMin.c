#include <stdio.h>

int main()
{
    int i, max, min, arry[4], sum;

    printf("Input 4 value for your array \n");
    for (i=0; i<4; i++)

    {

        printf("Input arry value: ");
        scanf("%d", &arry[i]);
    }

    max = arry[0];
    min = arry[0];

    // Maximum Number
    for (i=0; i<4; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }
    // Minimum Number
    for (i=0; i<4; i++)
    {
        if (arry[i] < min)
        {
            min = arry[i];
        }
    }

    // sum for the array
    sum = 0;
    for(i = min; i<=max; i++)
        {
            sum = sum + i;
        }

    printf("Maximum Number is: %d \n", max);
    printf("Minimum Number is: %d \n", min);
    printf("Sum Total: %d", sum);

    return 0;
}
