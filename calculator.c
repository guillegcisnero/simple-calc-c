#include <stdio.h>

// Prototipos
int add(int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main (void)
{

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