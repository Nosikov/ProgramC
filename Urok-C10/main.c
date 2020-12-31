#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for (a=2; a<=18; a+=2)
    printf("%d\n",a);
    printf("**********************\n");


    char str[7];
    char ch='#';
    int i=0;
    while (i<7)
    {
        str[i]=ch;
         i++;
    }

    printf("%s",str);
    printf("\n++++++++++++++++++++++++++\n");



    return 0;
}
