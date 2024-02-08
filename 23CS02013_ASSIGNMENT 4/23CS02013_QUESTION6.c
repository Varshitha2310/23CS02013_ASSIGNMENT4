#include <stdio.h>

int main() {
    char operation;
    int num1, num2, result;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result:%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n",result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d", result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operation. Please enter +, -, *, or /.\n");
    }

    return 0;
}
