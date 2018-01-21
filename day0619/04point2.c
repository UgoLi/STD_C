/*************************************************************************
	> File Name: 04point2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年06月19日 星期一 10时23分11秒
 ************************************************************************/
//二级指针演示
#include<stdio.h>
int main(int argc,char *argv[])  
    /*char *argv[]==**char *argv */
{   
    int num=0;
    for(num=0;num<=argc ;num++)
    {
        printf ("%s\n",*(argv + num ));
    }
    return 0;
}
