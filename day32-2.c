// Q64: Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // to count digits 0–9
    int digit, i, maxDigit = 0, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count digits
    while (num > 0) {
        digit = num % 10;   // get last digit
        count[digit]++;     // increase its count
        num /= 10;          // remove last digit
    }

    // Find digit with maximum count
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d (appears %d times)\n", maxDigit, maxCount);

    return 0;
}