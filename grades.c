#include <stdio.h>

int main() {
    float phy, chem, bio, math, comp, total, percentage;

    // Input 5 subject marks
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);

    // Calculate total and percentage
    total = phy + chem + bio + math + comp;
    percentage = (total / 500) * 100;

    // Determine grade
    if (percentage >= 90)
        printf("Grade A
");
    else if (percentage >= 80)
        printf("Grade B
");
    else if (percentage >= 70)
        printf("Grade C
");
    else if (percentage >= 60)
        printf("Grade D
");
    else if (percentage >= 40)
        printf("Grade E
");
    else
        printf("Grade F
");

    return 0;
}

