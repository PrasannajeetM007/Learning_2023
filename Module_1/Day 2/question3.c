#include <stdio.h>

int findLargestNumber(int number) {
    int largest = 0;

    // Convert the number to a string
    char str[5];
    sprintf(str, "%d", number);

    // Iterate over each digit
    for (int i = 0; i < 4; i++) {
        // Remove the current digit by shifting the remaining digits
        int temp = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp = temp * 10 + (str[j] - '0');
            }
        }

        // Update the largest number found so far
        if (temp > largest) {
            largest = temp;
        }
    }

    return largest;
}

int main() {
    int number1 = 5872;
    int largestNumber1 = findLargestNumber(number1);
    printf("The largest number by deleting a single digit from %d is: %d\n", number1, largestNumber1);

    int number2 = 9856;
    int largestNumber2 = findLargestNumber(number2);
    printf("The largest number by deleting a single digit from %d is: %d\n", number2, largestNumber2);

    return 0;
}
