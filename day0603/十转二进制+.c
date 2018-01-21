#include<stdio.h>
int binaryNum[32];  //存放转换后得到的二进制码
int count=0;   //计算十进制整数被2除的次数
int oneCount=0;//得到二进制码中1的个数
int main()
{
   // int input_a;
   unsigned int num;
    printf("请输入一个十进制的整数：");
    scanf("%u",&num);
    printf("输入的值为：%u\n",num);
    while (num!=0)    //判断条件为：除以2后的商不等于0
    {
        binaryNum[count]=num%2;
        //余数存入数组
        num/=2;  
        //进行商符值
        count++;
        //数组元素+1
    }
   // binaryNum[count]=1;
    printf("二进制的数值为：");
    int i=32;
   // int i=sizeof(binaryNum)/sizeof(int)-1;
    while(i>=1)
    {
        i--;
        if(binaryNum[i]==1)
            oneCount++;
        printf("%d",binaryNum[i]);
    }
    printf("\n共有%d个1\n",oneCount);
    return 0;
}
