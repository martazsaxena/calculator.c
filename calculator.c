#include <stdio.h>

int main() {
    char choice;
    double num1, num2, result;

    printf("=== Simple Calculator ===\n");

    do {
        printf("\nEnter operator (+, -, *, /, %%, ^) or 'q' to quit: ");
        scanf(" %c", &choice);

        if (choice == 'q') {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;

            case '%':
                if ((int)num2 == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("Result: %.2lf\n", result);
                }
                break;

            case '^': {
                int power = (int)num2;
                double base = num1;
                result = 1;
                for (int i = 0; i < power; i++) {
                    result *= base;
                }
                printf("Result: %.2lf\n", result);
                break;
            }

            default:
                printf("Error: Invalid operator. Please try again.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");
    return 0;
}