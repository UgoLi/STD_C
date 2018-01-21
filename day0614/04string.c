/*
 *获取字符串演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[10]={0};
    printf("输入字符串：");
    //scanf("%s",&str);
    fgets(str,10,stdin);
    if(strlen(str)==9&&str[8]!='\n'){
        scanf("%*[^\n]");
        scanf("%*c");
    }
    printf("%s\n",str);
    printf("输入字符串：");
    //scanf("%s",&str);
    fgets(str,10,stdin);
    //scanf("%*[^\n]");
    //scanf("%*c");
    printf("%s\n",str);
    return 0;
}
