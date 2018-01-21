// or_test.c --using the logic OR operator
#include <stdio.h>
int main()
{
    printf("This program may reformat your hard disk\n"
            "and destroy all your data.\n"
            "Do you wish to continue?<y/n>");
    char ch;
    scanf("%c",&ch);
    if ('y'==ch||'Y'==ch)
    {
        printf("you were warned!\a\a\n");
    }
    else if('n'==ch||'N'==ch)
    {
        printf("A wish choice...Bye!\n");
    }
    else 
    {
        printf("That wasn't a y or n! Apparently you "
               " can't follow instructions,so "
                "I'll trash you disk anyway.\a\a\a\n"
                );
    }
    return 0;
}

