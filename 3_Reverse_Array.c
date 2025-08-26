#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int Array[MAX], i;
    printf("Enter Elements in array : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("Array[%d] : ", i);
        scanf("%d", &Array[i]);
    }

    printf("\nBefore Reversing Array : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("Array[%d] : %d\n", i, Array[i]);
    }

    // logic of reverse of an arrayyy

    int temp;
    for (i = 0; i < MAX / 2; i++)
    {
        temp = Array[i];
        Array[i] = Array[MAX - 1 - i];
        Array[MAX - 1 - i] = temp;
    }

    printf("\nAfter Reversing Array : \n");
    for (i = 0; i < MAX; i++)
    {
        printf("Array[%d] : %d\n", i, Array[i]);
    }

    return 0;
}
