#include <stdio.h>

int main() {
    float a;
    printf("Enter a number: ",a);
    scanf("%f", &a);  // Corrected format specifier
    printf("You entered: %f\n", a); // Print the entered value
    return 0;
}
