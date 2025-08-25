#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{

    int array[MAX];
    int i;

    // Getting input from users

    printf("Enter Array Element :\n");

    for (i = 0; i < MAX; i++)
    {
        printf("[%d] : ", i);
        scanf("%d", &array[i]);
    }

    // Returning array values

    printf("\nElements in Array :\n");

    for (i = 0; i < MAX; i++)
    {
        printf("[%d] = %d\n", i, array[i]);
    }

    // finding maximum from array

    int maximum = array[0], j = 0;

    for (i = 0; i < MAX; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
            j = i;
        }
    }

    printf("\nMaximum value in array :\n");
    printf("Array[%d]= %d", j, maximum);

    return 0;
}
