#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];

    // Copy the contents of 'a' to 'temp'
    for (size_t i = 0; i < size; i++) {
        temp[i] = *((char*)a + i);
    }

    // Copy the contents of 'b' to 'a'
    for (size_t i = 0; i < size; i++) {
        *((char*)a + i) = *((char*)b + i);
    }

    // Copy the contents of 'temp' to 'b'
    for (size_t i = 0; i < size; i++) {
        *((char*)b + i) = temp[i];
    }
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 2.5, b = 4.8;
    printf("Before swap: a = %.2f, b = %.2f\n", a, b);

    swap(&a, &b, sizeof(double));

    printf("After swap: a = %.2f, b = %.2f\n", a, b);

    return 0;
}
