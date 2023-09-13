#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char operation[4];
    int x = 0;


    scanf("%d", &n);


    for ( i = 0; i < n; i++)
    {
        scanf("%s", operation);


        if (operation[1]== '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}

