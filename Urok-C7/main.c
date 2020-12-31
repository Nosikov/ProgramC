#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    mas[0]=555;
    mas[1]=111111111;
    mas[2]=777777;
/*
printf ("%d - eto element massiva\n", mas[0]);
printf ("%d - eto element massiva\n", mas[1]);
printf ("%d - eto element massiva\n", mas[2]);
*/
    i=0;
    while (i<10)
    {
        printf("%d %d Hello world!\n",i, mas[i]);
        i=i+1;
    }

    printf("-----------Domashka1-----------\n");
i=0;
    while (i<10)
    {
        mas[i]=7;
        printf("%d %d Hello world!\n",i, mas[i]);
        i=i+1;
    }

    printf("-----------Domashka2-----------\n");

    i=0;
    while (i<10)
    {
        if (i<5)
        mas[i]=7;
        else
            mas[i]=i*i;

        printf("%d %d Hello world!\n",i, mas[i]);
        i=i+1;
    }


    return 0;


}
