// program to reverse a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // using long long int to take long inputs
    long long int num, reverse = 0, degit = 0;

    printf("Enter a number to make it reverse : ");
    scanf("%lld", &num);

    long long int temp = num;

    while (temp != 0)
    {
        degit = temp % 10; //Extract last digit from number EX: 785 % 10 = 5
        reverse = reverse * 10 + degit; //appent last digit EX: 78 *10 = 780 + 5 = 785
        temp = temp / 10; //this will remove last digit from number
    }

    printf("Reverse of %lld is %lld", num, reverse);

    return 0;
}
