//progrm to count the length of numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // using long long int to take long inputs
    long long int num;
    printf("Enter a number to Count its length : ");
    scanf("%lld", &num);
    long long int temp = num;
    int count = 0;

    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
    }

    printf("Length of %lld is %d", num, count);

    return 0;
}
