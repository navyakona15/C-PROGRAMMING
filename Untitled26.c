#include <stdio.h>

int main() {
    int X, Y, total_needed;

    // Input: total money and daily expenditure
    scanf("%d", &X);
    scanf("%d", &Y);

    // Calculate total expenditure for 30 days
    total_needed = Y * 30;

    // Check if Akshat has enough money
    if (X >= total_needed)
        printf("YES
");
    else
        printf("NO
");

    return 0;
}

