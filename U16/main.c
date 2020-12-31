#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c2=104;
    printf("%c\n",c2);

    char c1='$';
    printf("%i\n",c1);

    int n1=126;
    char c3[50];
    itoa(n1,c3,10);
    printf("%s\n",c3);
    printf("********************\n");

    int i;
    char c4[50]="5481";
    i=atoi(c4);
    printf("%d",i);

    return 0;
}
