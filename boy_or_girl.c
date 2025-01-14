#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, count = 0;
    int is_unique;

    scanf("%s", s); // Input the username string

    // Count the number of distinct characters in the string
    for (i = 0; i < strlen(s); i++)
    {
        is_unique = 1; // Assume the character is unique

        // Check if the current character has appeared earlier
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                is_unique = 0; // The character is not unique
                break;
            }
        }

        if (is_unique)
        {
            count++; // Increment count for unique characters
        }
    }

    // Check if the number of distinct characters is odd or even
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n"); // Female
    }
    else
    {
        printf("IGNORE HIM!\n"); // Male
    }

    return 0;
}
