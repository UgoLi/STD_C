#include <stdio.h>
int main()
{
    char a;int b;
    scanf("%c",&a);
    switch(a)
    {
        case '+':{
                     b=1+1;    
                     printf("%c\n",'+');
                     printf("b=%d\n",b);
                     break;
                 }
        case '-':{
                     b=1-1;
                     printf("%c\n",'-');
                     printf("b=%d\n",b);
                     break;
                 }
        default:printf("Input err\n");
    }
}

