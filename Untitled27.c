#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char ch;

    // Input a character
    scanf("%c", &ch);

    // Convert to lowercase to handle both upper and lower case inputs
    ch = tolower(ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("VOWEL
");
    else if ((ch >= 'a' && ch <= 'z'))
        printf("CONSONANT
");
    else
        printf("Invalid input
");

    return 0;
}

