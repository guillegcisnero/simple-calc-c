#include <stdio.h>

// Prototipos
int add(int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main (void)
{
int option = 0;
int x = 0;
int y = 0;
int result = 0;

printf("         ------------The Main menu-----------------        \n");

    do
    {
        printf("1. Sum.\n2. Subtract.\n3. Multiply.\n4. Division.\n5. Exit\n");
        printf("Choose your option: ");
        scanf("%i", &option);
        switch (option)
        {
        case 1:
            printf("The first number: ");
            scanf("%i", &x);
            printf("The second number: ");
            scanf("%i", &y);
            result = add (x,y);
            printf("The result is %i\n", result);
            break;
        case 2:
            printf("The first number: ");
            scanf("%i", &x);
            printf("The second number: ");
            scanf("%i", &y);
            result = subtract (x,y);
            printf("The result is %i\n", result);
            break;
        case 3:
            printf("The first number: ");
            scanf("%i", &x);
            printf("The second number: ");
            scanf("%i", &y);
            result = multiply (x,y);
            printf("The result is %i\n", result);
            break;
        case 4:
            printf("The first number: ");
            scanf("%i", &x);
            printf("The second number: ");
            scanf("%i", &y);
            result = divide (x,y);
            printf("The result is %i\n", result);
            break;
        case 5:
            printf("Thanks for using Guicalc\n");
            break;
        default:
            printf("Invalid option, please try again.\n");
            break;                            
        }    
    }
    while (option != 5);
    
    return 0;           
}

// Función suma
int add(int a, int b) 
{      
    return a + b;
}

// Función resta
int subtract (int a, int b)
{
    return a - b;
}

// Función multiplicación
int multiply(int a, int b)  
{
    return a * b;
}

// Función división
int divide(int a, int b)
{
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}