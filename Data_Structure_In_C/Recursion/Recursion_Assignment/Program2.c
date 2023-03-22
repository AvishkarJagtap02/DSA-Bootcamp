//ArmStrong Number

#include <stdio.h>
#include <math.h>

int countDigits(int num);
int isArmstrong(int num, int n);

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num, countDigits(num)) == num) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }
}

int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    else {
        return 1 + countDigits(num / 10);
    }
}

int isArmstrong(int num, int n) {
    if (num == 0) {
        return 0;
    }
    else {
        int digit = num % 10;
        return pow(digit, n) + isArmstrong(num / 10, n);
    }
}

