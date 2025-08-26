// Program to create arraay using user input
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tottal number in array
    int num;
    printf("Total numbers in Array : ");
    scanf("%d", &num);
    if (num < 100)
    {
        int Array[num], i;
        // Creating Array with users input
        printf("\nEnter Elements in array : \n");
        for (i = 0; i < num; i++)
        {
            printf("Array[%d] : ", i);
            scanf("%d", &Array[i]);
        }

        // retriving Arrays
        printf("\nElement of Array : \n");
        for (i = 0; i < num; i++)
        {
            printf("Array[%d] : %d\n", i, Array[i]);
        }
    }
    else
    {
        printf("Number should be less then 100");
    }
    return 0;
}
