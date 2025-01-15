#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[101], t[201]; // t is larger to accommodate '.' and consonants
    int i, k = 0;

    // Read input string
    scanf("%s", s);

    // Process each character
    for (i = 0; i < strlen(s); i++)
    {
        char ch = tolower(s[i]); // Convert to lowercase
        // Check if it's not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
        {
            t[k++] = '.'; // Add dot
            t[k++] = ch;  // Add consonant
        }
    }

    // Null-terminate the result string
    t[k] = '\0';

    // Print the result
    printf("%s\n", t);

    return 0;
}
