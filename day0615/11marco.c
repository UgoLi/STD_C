/*
 *编写宏实现字母大小写转换
 */
#include<stdio.h>
#define SWAG(n) n>96&n<122?n-32:(n>64&&n<=90?n+32:'?')
int main(){
    char ch;
    printf("请输入一个英文字母：");
    scanf("%c",&ch);
    if(SWAG(ch)!='?'){
    printf("大小写转换后为：%c\n",SWAG(ch));
    }
    else
        printf("输入错误\n");
    return 0;
}
