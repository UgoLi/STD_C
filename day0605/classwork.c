/*
 *先显示左边的数位，后显示右边的数位
 *二进制转换
 **/
#include<stdio.h>
int main ()
{
    //移位实现二进制转换
  unsigned char num1;
    printf("please input a number btween 0~127:\n");
    scanf("%u",&num1);
    int i=7;
    printf("移位实现二进制转换结果：\n");
    printf("************************\n");
    printf("****    ");
    while (i>=0)    
    {
        printf("%d",num1>>7);          
        num1<<=1;
        i--;    
    }
    printf("    ****\n");
    printf("************************\n");
    //位操作符实现二进制转化
    int num2=0;
    printf("please input a number between 0~127，num2=\n");
    scanf("%d",&num2);
    printf("位操作实现二进制转换结果：\n");
    printf("************************\n");
    int j=7;
    unsigned char ch=0x80;
    printf("****    ");
     while (j>=0)
    {
    printf("%d",(num2&ch)!=0);
    ch/=2;
    j--;
    }
     printf("    ****\n");
     printf("************************\n");
    return 0;
}
