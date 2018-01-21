/*
 *指针演示
 */
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("arr是%p,arr+2是%p，arr-2是%p \n",arr,arr+2,arr-2);
    printf("arr+2是%p，&arr[2]是%p\n",arr+2,&arr[2]);
    printf("&arr[3]-arr是%d\n",&arr[3]-arr);
    return 0;
}
