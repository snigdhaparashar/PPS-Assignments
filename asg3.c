#include <stdio.h>

int main() {
    int num1, num2, choice;

    // Display Menu
    printf("===== BASIC ARITHMETIC CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    // Take user inputs
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition is = %d\n", num1 + num2);
            break;

        case 2:
            printf("Subtraction is = %d\n", num1 - num2);
            break;

        case 3:
            printf("Multiplication is = %d\n", num1 * num2);
            break;

        case 4:
            if (num2 != 0) {
                printf("Division is = %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            if (num2 != 0) {
                printf("Modulus is = %d\n", num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select between 1 and 5.\n");
    }

    return 0;
}
