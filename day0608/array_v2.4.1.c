#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int map[10][10]={0}; //初始化地图
    int row=0,col=0,cnt=0;
    srand(time(0));
    //安插随机地雷10个
    do{
        row=rand()%10;
        col=rand()%10;
        if(!map[row][col]){
            map[row][col]=-1;
            cnt++;       //安插地雷计数
        }
    }while(cnt<10);
    //打印地图并转换成字符
    printf("地雷图：\n");
    for(row=0;row<=9;row++){
        for(col=0;col<=9;col++){
            if(!map[row][col]){
                printf("O ");
            }
            else if(map[row][col]){
                printf("X ");
            }
        }
    printf("\n");
    }
    return 0;
}
