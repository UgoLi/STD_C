/*
 *字符串演示
 */
#include<stdio.h>
int main(){
    char str[]="xyz";
    printf("sizeof(str)是%d\n",sizeof(str));
    printf("%p \n","abc");
    printf("%p \n","abc");
    printf("%p\n","ab""c");
    printf("%c \n",*("abc"+1));
    printf("%d \n",*("abc"+3));
    // *"abc"='x';   字面内容不能改变
    printf("%s\n","abcdef");
}
