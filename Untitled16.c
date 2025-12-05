#include <stdio.h>

int main() {
    int x;
    
    // Read the rainfall rate in mm/hr
    scanf("%d", &x);
    
    // Categorize the rainfall
    if (x < 3)
        printf("LIGHT
");
    else if (x >= 3 && x < 7)
        printf("MODERATE
");
    else if (x >= 7)
        printf("HEAVY
");
    
    return 0;
}

