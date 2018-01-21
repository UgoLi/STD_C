/*
 * 编写函数从调用函数得到三个整数，找到他们中最小的并传回调用函数
 */
#include<stdio.h>
int min(int a,int b,int c){
    //方法1
    /*
    if(a<b&&a<c)
        return a;
    if(b<a&&b<c)
        return b;
    if(c<a&&c<b)
        return c;
    */
    //方法2
    int min=a<=b?a:b;
    return min<=c?min:c;
    //方法3
    /*
    int min=0;
    a<b?(a<c?(min=a):(min=c)):(b<c?(min=b):(min=c));
    return min;
    */
}
int main(){
    printf("输入三个整数:");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("最小为：%d\n",min(a,b,c));
    return 0;
}

