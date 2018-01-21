/*
 *字符串相关函数演示
 */
#include<stdio.h>
#include<string.h>
int main(){
    char str[10]="abcd\0";
    printf("strlen(str)=%d\n",strlen(str));  //字符串有效字符长度
    printf("str=%s\n",str);
    printf("sizeof(str)=%d\n",sizeof(str));  //字符数组长度
    strcat(str,"xyz");  //字符串合并
    printf("strlen(str)=%d\n",strlen(str));
    printf("str=%s\n",str);
    printf("sizeof(str)=%d\n",sizeof(str));
    printf("strcmp(abd,abd)=%d\n",strcmp("adc","abd"));
    printf("%s\n",strcpy(str,"iopa"));
    printf("%s\n",str);
    printf("%s\n",strncpy(str,"abc",2));
    printf("%s\n",memset(str,'g',9));
    printf("%p\n",strstr("abcdefghijklmn","cef"));
    return 0;
}

