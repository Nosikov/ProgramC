#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <winuser.h>

int main()
{
    setlocale(LC_ALL,"Russian");

   /* char ch='W';
    printf("%c",ch);

    /* scanf("%c",&ch);
    ch = getch();
    printf("ch=%c",ch); */

    char s[10]= "��������";
    s[0]='7';
    printf("%s\n", s);

    sprintf(s, "12312");
   /* s[4]='\0'; */

    printf("%s\n",s);

    /* scanf("%s",s); */
    gets (s);
    OemToChar (s,s);
    printf("%s\n", s);


    return 0;
}
