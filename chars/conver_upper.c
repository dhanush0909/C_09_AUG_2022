// Take 10 charecters by converting them to upper charecters 
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
 int i;
 char ch;

        printf("Enter chars :");
        for(i = 1; i <= 10; i ++)
        {
            ch = getch();
            if(islower(ch))
                ch = toupper(ch);
            putch(ch);
        }
 }

