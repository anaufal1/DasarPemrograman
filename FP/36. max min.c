#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array

/* Function declarations */
int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
    int array[MAX_SIZE], N, max, min;
    int i;

    /* Input size and elements of array */
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    max = maximum(array, 0, N);
    min = minimum(array, 0, N);

    printf("%d %d\n", max, min);

    return 0;
}


/**
 * Recursive function to find maximum element in the given array.
 */
int maximum(int array[], int index, int len)
{
    int max;

    if(index >= len-2)
        return (array[index] > array[index + 1])
                    ? array[index]
                    : array[index + 1];

    max = maximum(array, index + 1, len);

    return (array[index] > max)
                ? array[index]
                : max;
}


/**
 * Recursive function to find minimum element in the array.
 */
int minimum(int array[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        return (array[index] < array[index + 1])
                    ? array[index]
                    : array[index + 1];
    }

    min = minimum(array, index + 1, len);

    return (array[index] < min)
                ? array[index]
                : min;
}
