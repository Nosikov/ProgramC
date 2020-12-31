#include <stdio.h>
#include <stdlib.h>

int f1(int a, int b)
{
int c;
if (a>b) c=1;
else c=0;
return c;
}

int proc1(int x)
{
if (x<10) printf ("x=%d",x);
else printf ("error");

}

int main()
{
    int z;
    z= f1(10,16);
    proc1(z);
    return 0;
}
