#include <stdio.h>

void bitOperations(int num, int oper_type)
{
    switch (oper_type)
    {
        case 1:
            num |= 1;  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            return;
    }

    printf("Result: %d\n", num);
}

int main()
{
    int num, oper_type;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    bitOperations(num, oper_type);

    return 0;
}
