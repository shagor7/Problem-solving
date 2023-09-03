#include<stdio.h>

int main()
{
    int p = 0, v = 0, t = 0, c = 0, i = 0, n = 0;

    scanf("%d", &n);

    for(i = 0; i<n ; i++)
    {
        scanf("%d%d%d", &p,&v,&t );
        if(p && v || p && t || v&&t)
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}


