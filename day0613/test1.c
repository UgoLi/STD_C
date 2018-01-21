/*
 *下例，tell表示&tell[0],捆绑数据区大小为4字节
 *      &tell表示(*pas)[2]，指向包含两个元素的int型数组，其困绑数据区大小为8字节
 */
#include<stdio.h>
int main(){
    int tell[2];     //tell 等价 &tell[0]  
    int (*pas)[2];   //(*pas)[2] 等价 &tell
    printf("tell的地址是%p\n",tell);
    printf("tell+2的地址是%p\n",tell+2);
    printf("&tell的地址是%p\n",&tell);
    printf("&tell+2的地址是%p\n",&tell+2);
    return 0;
}
