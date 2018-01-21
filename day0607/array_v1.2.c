//字符串数组输入
#include<stdio.h>
int main()
{
    char string[17]={};
    int array_int[17];
    scanf("%c",&string);   
    int num=0;
    
    printf("%c\n",string[0]);
    for (num=0;num<=16;num++)
    {
        array_int[num]=string[num]-'0';
        printf("%d\n",array_int[num]);
    }
    return 0;
}
