#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5]={5,3,2,14,888};
   arr[0]=667;

    printf("%d\n",arr[0]);

    char word[]={'s','o','m','e'}; //стандартный метод
    char words[] = "Hello World!"; // другой способ
    words[1]='#';
    printf("%s\n", words);
    char mas[] ="####################";
    printf("%s\n", mas);
    char mas1[] ="#                  #";
    printf("%s\n", mas1);
    printf("%c\n", words[6]);
    printf("********************************\n");
int array[3][4]= {{4,5,6,8},{7,8,9,45},{10,23.63,86}};
    array[1][3]=666;
    printf("%d\n",array[0][0]);
    printf("==================================\n");



    return 0;
}
