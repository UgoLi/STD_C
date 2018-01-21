/*
 * 函数解决鸡兔同笼问题
 * 从调用函数得到头和脚的数量然后把兔子的数字传递给调用函数
 */
#include<stdio.h>
int cal(int head,int foot){
    int num;
    for(num=0;num<=head;num++)
        if(foot==num*4+(head-num)*2)
            break;
    if(num>head)
        return -1;
    else
        return num;
}
int main(){
    printf("请输入头和脚的数量:");
    int head,foot;
    scanf("%d%d",&head,&foot);
    printf("兔子的数量为：%d\n",cal(head,foot));
    return 0;
}
