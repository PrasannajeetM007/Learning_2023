#include <stdio.h>

void printExponent(double x) {
    // Obtain the exponent part as an unsigned long long
    unsigned long long *exponentPtr = (unsigned long long*)&x;
    unsigned long long exponent = (*exponentPtr >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);

    // Print the exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
