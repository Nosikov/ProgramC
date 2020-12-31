#include <stdio.h>
#include <stdlib.h>
void proc1()
{
printf("www\n");
printf("123\n");
}

int ret7(int x, int y)
{

    return x*y;
}

int main()
{
    int t;
    printf("Hello world!\n");
    t=ret7(22,10);
    t=ret7(t,10);
    printf("t=%d",t);
    return 0;
}
