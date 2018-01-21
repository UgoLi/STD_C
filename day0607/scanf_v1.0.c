//scanf("%[^\n]");
#include<stdio.h>
int main()
{
    int num=0,num1=0;
    printf("请输入一个数字:");
    scanf("%d",&num);
    scanf("%*[^\n]");
    scanf("%*c");
    printf("num 是%d\n",num);
    printf("请输入一个数字：");
    scanf("%d",&num1);
    scanf("%*[^\n]");
    scanf("%*c");
    printf("num 是%d\n",num1);
    return 0;

}
