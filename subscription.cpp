#include <stdio.h>

int main() {
    int X;
    
    // Read the meeting duration in minutes
    scanf("%d", &X);
    
    // Check if a subscription is needed
    if (X > 40)
        printf("YES
");
    else
        printf("NO
");
    
    return 0;
}

