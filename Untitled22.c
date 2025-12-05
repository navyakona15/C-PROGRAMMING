#include <stdio.h>

int main() {
    int X, Y;
    
    // Read incomes of Pavan and Ganapathi
    scanf("%d %d", &X, &Y);
    
    // Calculate the donation amount (difference between incomes)
    int donation = Y - X;
    
    // Print the result
    printf("%d
", donation);
    
    return 0;
}

