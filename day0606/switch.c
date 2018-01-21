/*
 *switch……case 演示
 * */
#include<stdio.h>
//#include<windows.h>
int main()
{
    int season=0;
    printf("请输入季节（1、2、3、4）：");
    scanf("%d",&season);
    switch(season){
        case 1:
            printf("春\n");
            break;
        case 2:
            printf("夏\n");
            break;
        case 3:
            printf("秋\n");
            break;
        case 4:
            printf("冬\n");
            break;
        default:
            printf("输入错误！\n");
            break;
    }
    return 0;
}

