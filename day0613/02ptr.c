/*
 *指针演示
 */
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *p_arr=&arr[0];
    int num=0;
    for(num=0;num<=4;num++){
        printf("%d %p\n",p_arr[num],&p_arr[num]);
    }
    printf("\n");
    return 0;
}
