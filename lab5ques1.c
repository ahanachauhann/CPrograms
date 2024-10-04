#include <stdio.h>


void armstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}


void coprime(int num) {
    int originalNum = num;
    int reverseNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    int gcdResult = gcd(originalNum, reverseNum);

    if (gcdResult == 1)
        printf("%d and its reverse %d are coprime.\n", originalNum, reverseNum);
    else
        printf("%d and its reverse %d are not coprime. GCD is %d\n", originalNum, reverseNum, gcdResult);
}

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong(num);
    coprime(num);

    int fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}
