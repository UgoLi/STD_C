//数组与函数
//当数组作为函数的形参时，函数实参为数组形参的地址
#include<stdio.h>
int sun_arr(int arr[],int n);
int main ()
{
    int cookies[8]={1,2,4,8,16,32,64,128};
    printf("%p=array address,",cookies);
    printf("%d=sizeof cookies,%d=sizeof &cookies\n",sizeof(cookies),sizeof(&cookies));
    int sum=0;
    sum = sum_arr(cookies,8);   //cookies 为第一个元素地址
    printf("总共吃了:%d\n",sum);
    sum = sum_arr(cookies,3);   //欺骗sum_arr(),数组只有3个元素
    printf("前三个人吃了：%d\n",sum);
    sum = sum_arr(cookies+4,4); //欺骗sum_arr(),数组从第五个元素开始往后只有四个元素
    printf("后四个人吃了：%d\n",sum);
    return 0;
}
int sum_arr(int arr[],int n)    //arr 指向cookies[]的地址
{
    int total=0;
    printf("%p=arr address,",arr);   //arr为cookies的地址
    printf("%d=sizeof arr\n",sizeof(arr)); 
    for (int i=0;i<n;i++)
        total=total+arr[i];
    return total;
}
