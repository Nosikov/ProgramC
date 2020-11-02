#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    t=35;
    if (t>10)
    {
        printf("MMMM\n");
        if (t>20) printf("bolsh123\n");
        if (t>30) { printf("300\n"); printf("%d",t);}
    }
    else
    {printf("gggg\n"); return 7;}

    return 2;
}
