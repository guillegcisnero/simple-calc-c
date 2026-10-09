#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// Main function
int main (void)
{   // Variable declarations
    int option = 0;
    int x = 0;
    int y = 0;
    float result = 0;

    printf("         ------------Welcome to Guicalc-----------------        \n");
    printf("         ------------The Main menu----------------------        \n");
    // Loop to display the menu and perform calculations
    do
    {
        // Display the menu options
        printf("1. Sum.\n2. Subtract.\n3. Multiply.\n4. Division.\n5. Exit\n");
        printf("Choose your option: ");
        scanf("%i", &option);
        // Check if the option is valid and prompt for numbers if it is
        if (option >=1 && option <=4)
        {
            printf("The first number: ");
            scanf("%i", &x);
            printf("The second number: ");
            scanf("%i", &y);
        }
        // Perform the selected operation based on the user's choice
        switch (option)
        {
        case 1:
            printf("The result is %i\n", add (x,y));
            break;
        case 2:
            printf("The result is %i\n", subtract (x,y));
            break;
        case 3:
            printf("The result is %i\n", multiply (x,y) );
            break;
        case 4:
            printf("The result is %.2f\n", divide (x,y));
            break;
        case 5:
            // Exit the program
            printf("\n");
            printf("Thanks for using Guicalc\n");
            printf("\n");
            break;
        default:
            // Handle invalid option
            printf("\n");
            printf("Invalid option, please try again.\n");
            printf("\n");
            break;                            
        }    
    }
    while (option != 5); // Continue until the user chooses to exit
    
    return 0;           
}

// Function addition
int add(int a, int b) 
{      
    return a + b;
}

// Function subtraction
int subtract (int a, int b)
{
    return a - b;
}

// Function multiplication
int multiply(int a, int b)  
{
    return a * b;
}

// Function division
float  divide(int a, int b)
{   // Check for division by zero
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle the error as needed
    }
    return (float)a / b;
}