#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;  // Initialize with the largest possible digit
    int largestDigit = 0;   // Initialize with the smallest possible digit

    for (int i = 0; i < n; i++) {
        int temp = numbers[i];

        // Find the smallest and largest digits in the current number
        while (temp > 0) {
            int digit = temp % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            temp /= 10;
        }
    }

    // If smallestDigit and largestDigit remain unchanged, the input is not valid
    if (smallestDigit == 9 && largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
