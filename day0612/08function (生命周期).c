/*
 * 1 1 2 3 5 8 13 21....
 * 0 1 2 3 4 5 6  7....
 * 编写函数根据编号计算出对应的数字
 * 把结果传递给调用函数
 */
#include<stdio.h>
//int arr[50];
int choose(int num,int arr[]){
    
    //方法一
    //static int arr[50]={0};
    if(num<=1){
        return 1;
    }
    if (!arr[num-2]){
        arr[num-2]=choose(num-2,arr);
    }
    if (!arr[num-1]){
        arr[num-1]=choose(num-1,arr);
    }
    return arr[num-1]+choose(num-2,arr);
}
int main(){
    int arr[50]={0};
    int a=0;
    scanf("%d",&a);
    printf("序号%d对应数字为:%d\n",a,choose(a,arr));
    return 0;
}
