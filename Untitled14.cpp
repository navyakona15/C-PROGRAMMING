#include <stdio.h>

int main() {
    int X;
    
    // Read the age of the candidate
    scanf("%d", &X);
    
    // Check eligibility (must be 18 or older)
    if (X >= 18)
        printf("YES
");
    else
        printf("NO
");
    
    return 0;
}

