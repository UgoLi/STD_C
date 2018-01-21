/*
 *宏演示
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int arr[SIZE]={0};
    srand(time(0));
    int num=0;
    for(num=0;num<=SIZE-1;num++)
    {
        arr[num]=rand()%MX+1;
    }
    for(num=0;num<=SIZE-1;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
