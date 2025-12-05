#include <stdio.h>

int main() {
    int X, Y;
    
    // Read the input: fuel (X) and distance (Y)
    scanf("%d %d", &X, &Y);
    
    // Each litre allows 5 km of travel
    int maxDistance = X * 5;
    
    // Check if he can reach home
    if (maxDistance >= Y)
        printf("YES
");
    else
        printf("NO
");
    
    return 0;
}

