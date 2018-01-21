/*
 *打印1到给定数之间的所有整数
 */
#include<stdio.h>
void print(int max){
    if (max<=0)
        return;
    else
    {
        print(max-1);
        printf("%d ",max);
    }
}
int main(){
    print(10);
    printf("\n");
    return 0;
}
