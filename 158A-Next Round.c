#include<stdio.h>

int main()
{
    int n = 0, k = 0, i ;

    scanf("%d%d", &n, &k);

    int scores[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    int count = 0;
    for(i = 0 ; i < n; i++)
    {
        if(scores[i] > 0 && scores[i] >= scores[k-1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
