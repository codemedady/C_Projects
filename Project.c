// Simple Calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int choice;
    double a, b, result;

    while (1)
    {
        printf("Enter the given operation\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Sqaure-Root\n");
        printf("7. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the 1st operand : ");
            scanf("%lf", &a);

            printf("Enter the 2nd operand : ");
            scanf("%lf", &b);

            result = a + b;

            printf("Result : %.2lf\n", result);
            break;
        case 2:
            printf("Enter the 1st operand : ");
            scanf("%lf", &a);

            printf("Enter the 2nd operand : ");
            scanf("%lf", &b);

            result = a - b;

            printf("Result : %.2lf\n", result);
            break;
        case 3:
            printf("Enter the 1st operand : ");
            scanf("%lf", &a);

            printf("Enter the 2nd operand : ");
            scanf("%lf", &b);

            result = a * b;
            printf("Result : %.2lf\n", result);
            break;
        case 4:
            printf("Enter the 1st operand : ");
            scanf("%lf", &a);

            printf("Enter the 2nd operand : ");
            scanf("%lf", &b);

            result = a / b;
            printf("Result : %.2lf\n", result);
        case 5:
            printf("Enter the base : ");
            scanf("%lf", &a);

            printf("Enter the exponent : ");
            scanf("%lf", &b);

            result = pow(a, b);

            printf("Result : %.2lf\n", result);
            break;
        case 6:
            printf("Enter the number : ");
            scanf("%lf", &a);

            result = sqrt(a);

            printf("Result : %.2lf\n", result);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Enter proper choice !");
            break;
        }
    }

    return 0;
}