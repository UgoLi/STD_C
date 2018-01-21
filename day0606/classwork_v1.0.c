#include<stdio.h>
int main()
{
    int min=0,num=0;
    printf("请输入1-100间的数值：") ;
    scanf("%d",&min);
    for (num=min;num<=100;num++)
    {
        if(num%10==7)
            continue;
        if(num/10==7)
            continue;
        if(num%7==0)
            continue;
        printf("%d ",num);  
    }
    printf("\n");
    return 0;

}
