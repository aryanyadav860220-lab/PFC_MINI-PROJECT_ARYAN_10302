// ARYAN YADAV
// ERP - 10302

// PROJECT TITLE - Menu-Driven Scientific Calculator
// TOPIC NAME - Arithmetic & scientific operations 

// DETAILED WALKTHROUGH ( HOW TO APPROACH THE PROBLEM ) - Start by printing a clear menu with numbered options.
// Take user choice using scanf. Ask for required numbers. Use switch-case to match the choice. For square/cube use multiplication, for power use a loop that multiplies repeatedly.
// Print the result and optionally allow repeat using a loop.

#include <stdio.h>
int main() {
    int choice;
    double num1, num2, result;
    int base, exp;
    do {
        printf("\n Scientific Calculator \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Cube\n");
        printf("7. Power\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;
                
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Square = %.2lf\n", num1 * num1);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Cube = %.2lf\n", num1 * num1 * num1);
                break;

            case 7:
                printf("Enter base and exponent: ");
                scanf("%d %d", &base, &exp);
                result = 1;
                for(int i = 0; i < exp; i++) {
                    result *= base;
                }
                printf("Power = %.2lf\n", result);
                break;

            case 8:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 8);

    return 0;
}


// OUTPUT - If Addition is selected and the numbers are 4 and 5 .

/*
Scientific Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Square
6. Cube
7. Power
8. Exit
Enter your choice: 1
Enter two numbers: 4 5
Result = 9.00
*/