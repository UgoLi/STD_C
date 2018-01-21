/*
 *三目操作符
 * */
#include<stdio.h>
int main()
{
    int num=0;
    printf("please input num!\n");
    scanf ("%d",&num);
    num>=0?(num=num):(num=0-num);
    printf("num 的绝对值为：%d\n",num);
    //bool result;
    //int gender,height,weight;
    //gender==1?(result=(height-weight<110)):(result=(height-weight<105));
    //printf ("is fat?\n%d\n",result);
    return 0;
}

