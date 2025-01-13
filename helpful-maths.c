#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int numbers[100], numCount = 0;

    // Extract numbers from the input string (ignoring '+')
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != '+') {
            numbers[numCount++] = s[i] - '0'; // Convert char to int and store
        }
    }

    // Bubble sort the numbers array in ascending order
    for (int i = 0; i < numCount - 1; i++) {
        for (int j = 0; j < numCount - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Construct the output string with '+' between numbers
    for (int i = 0; i < numCount; i++) {
        printf("%d", numbers[i]);
        if (i != numCount - 1) {
            printf("+"); // Add '+' between numbers, but not after the last one
        }
    }

    printf("\n");

    return 0;
}
