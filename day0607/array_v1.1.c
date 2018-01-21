//数组练习 身份证17位和下面17个数字对应相乘
//7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2
//把所有乘积求和
//用求和结果除以11取余数
//用余数编号到下面11个字符里找到对应字符
//1，0，x，9，8，7，6，5，4，3，2
//找到的字符就是身份证最后一个数位的内容

#include<stdio.h>
int main()
{
    int array_id[18]={};
    int array_id1[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char array_id2[11]={'1','0','x','9','8','7','6','5','4','3','2'};
    printf("请输入身份证前17位数：\n");
    int num=0;
    int num1=0;
    int num2=0;
    for(num=0;num<=16;num++){
        printf("第%d位为：",num);
        scanf("%d",&array_id[num]);
       // array_id[num]=num1;
    }
    for(num=0;num<=16;num++){
      num2+=array_id[num]*array_id1[num];
    }
    int num3=num2%11;
    printf("身份证最后一位为：%c\n",array_id2[num3]);
    printf("%c\n",array_id2[2]); 
    return 0;
}
