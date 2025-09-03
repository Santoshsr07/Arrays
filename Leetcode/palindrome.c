#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
bool isPalindrome(int x) {
    long long int reverse = 0, degit = 0,temp = x;

    if(x<0){
        return false;
    }

    while (temp != 0) {
        degit = temp % 10;
        reverse = reverse * 10 + degit;
        temp = temp / 10;
    }

    if (reverse == x) {
        return true;
    } else {
        return false;
    }
}

int solution() {
    long long int num;

    printf("Enter a number to Palindrome : ");
    scanf("%lld", &num);

    bool result = isPalindrome(num);

    if (result) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}