#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SPEED_OF_LIGHT 299792458 // Speed of light in m/s

void printHeader() {
    printf("=====================================\n");
    printf("        WELCOME TO SCI-FI CALCULATOR        \n");
    printf("=====================================\n\n");
    printf("Choose your operation:\n");
    printf("1. Basic Math Operations\n");
    printf("2. Energy Calculation (E = mc^2)\n");
    printf("3. Gravitational Force Calculation\n");
    printf("4. Exit\n");
    printf("-------------------------------------\n");
}

void basicMath() {
    double num1, num2, result;
    char operator;

    printf("\nEnter operation (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
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
            if (num2 != 0)
                result = num1 / num2;
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
            return;
    }
    printf("\n");
}

void energyCalculation() {
    double mass, energy;

    printf("\nEnter mass (in kilograms): ");
    scanf("%lf", &mass);

    energy = mass * pow(SPEED_OF_LIGHT, 2);
    printf("Energy: %.2e Joules\n", energy);
    printf("\n");
}

void gravitationalForce() {
    double mass1, mass2, distance, force;
    const double G = 6.67430e-11; // Gravitational constant

    printf("\nEnter mass 1 (in kilograms): ");
    scanf("%lf", &mass1);
    printf("Enter mass 2 (in kilograms): ");
    scanf("%lf", &mass2);
    printf("Enter distance between masses (in meters): ");
    scanf("%lf", &distance);

    if (distance != 0) {
        force = G * ((mass1 * mass2) / pow(distance, 2));
        printf("Gravitational Force: %.2e Newtons\n", force);
    } else {
        printf("Error: Distance cannot be zero!\n");
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printHeader();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basicMath();
                break;
            case 2:
                energyCalculation();
                break;
            case 3:
                gravitationalForce();
                break;
            case 4:
                printf("Exiting Sci-Fi Calculator. Goodbye!\n");
                exit(0);
                break;
            default:
                printf("Error: Invalid choice!\n");
                break;
        }
    }

    return 0;
}
