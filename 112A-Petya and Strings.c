#include<stdio.h>

int main ()
{
    char a[101], b[101];
    int i, result = 0;
    scanf("%s %s", a,b);



    for(i = 0; a[i]  && b[i] ; i++)
    {

        if(a[i]  >= 'A' && a[i]  <= 'Z' )
        {
            a[i] = a[i] + 32;
        }
        if(b[i]  >= 'A' && b[i]  <= 'Z' )
        {
            b[i] = b[i] + 32;
        }
        if(a[i]< b[i])
        {
            result = -1 ;
            break;
        }
        else if(a[i]> b[i])
        {
            result = 1;
            break;
        }
    }
    printf("%d", result);
    return 0;
}
