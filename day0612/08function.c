/*
 * 1 1 2 3 5 8 13 21....
 * 0 1 2 3 4 5 6  7....
 * 编写函数根据编号计算出对应的数字
 * 把结果传递给调用函数
 */
#include<stdio.h>
//int arr[50];
unsigned int choose(int num,unsigned int arr[]){
    
    //方法一
    //static int arr[50]={0};
    if(num<=1){
        return 1;
    }
    /*
    if(!arr[num-3]){
        printf("%d ",num-3);
        arr[num-3]=choose(num-3,arr);
        // printf("%d ",num-3);
    }
    */
    if (!arr[num-2]){
        printf("%d ",num-2);
        arr[num-2]=choose(num-2,arr);
        //printf("%d ",num-2);
    }
    if (!arr[num-1]){
        printf("%d ",num-1);
        arr[num-1]=choose(num-1,arr);
        //printf("%d ",num-1);
    }
    return arr[num-1]+arr[num-2];
}
int main(){
    unsigned int arr[50]={0};
    int a=0;
    scanf("%d",&a);
    printf("序号%u对应数字为:%d\n",a,choose(a,arr));
    int i=0;
    for(i=0;i<=49;i++){
        printf("%u ",arr[i]);
    }
    return 0;
}
