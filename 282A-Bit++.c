#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, i;
    scanf("%d", &n);

    int x = 0;
    char operation[4];  // To store the operation, including null terminator '\0'

    for ( i = 0; i < n; i++) {
        scanf("%s", operation);

        if (strcmp(operation, "++x") == 0 || strcmp(operation, "x++") == 0) {
            x++;
        } else if (strcmp(operation, "--x") == 0 || strcmp(operation, "x--") == 0) {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}
