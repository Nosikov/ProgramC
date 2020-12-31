#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct sPoint {
    int x,y;
} p;
typedef int celoe;
typedef struct sPoint TPoint;
int main()
{
    struct sPoint a;
    a.y=9;
    p.x=7;
    celoe i=5;

    TPoint b;
    b.x=55;
    b.y=77;

    TPoint c[10];
    c[0].x=666;
    printf("x= %d\n c[0].x=%d\n", b.x, c[0].x);

    srand(5);
    int j;
    j=rand();
    printf("sl=%d\n",j);

    srand(time(NULL));

    j=rand();
    printf("s2=%d\n",j);

    j=rand();
    printf("s3=%d\n",j%18);

    return 0;
}
