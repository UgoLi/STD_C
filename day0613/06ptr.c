/*
 *无类型指针
 *无类型指针可以强制转换为任意类型变量输出
 */
#include<stdio.h>
int main(){
    char ch='r';
    int num=34;
    float fnum=4.3f;
    void *p_v=NULL;  // 无类型指针
    /*
    p_v=&ch;
    printf("%c\n",*(char*)p_v);
    */
    p_v=&num;
    printf("%d\n",*(int *)p_v);
    p_v=&fnum;
    printf("%f\n",*(float *)p_v);
    return 0;
}

