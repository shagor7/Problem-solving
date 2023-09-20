#include<stdio.h>

int main ()
{
    char a[], b[];

    scanf("%c%c", a,b);

    for(i = 0; a == '\0' && b == '\0'; i++)
    {
        if(a[i]==b[i] || a[i] + '65' == b[i] || a[i] == b[i] + '65' && a[i] == '\0' && b[i] == '\0')
        {
            printf("%d", 0);
            break;
        }
        if(a[i] > b[i] || )
    }
}
