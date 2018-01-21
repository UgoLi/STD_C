//打地鼠游戏
//输入游戏次数：
//***
//***
//***
//选择一个位置：1，3
//**0
//***
//*X*
//没打中
//打中次数为0，错过次数1
//***
//o**
//***
//打中
//打中1次，错过次数1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    // int map[3][3]={0};
    int row=0/*老鼠位置行*/,col=0/*老鼠位置列*/,play_tm=0/*游戏总次数*/;
    int row1=0/*锤子位置行*/,col1=0/*锤子位置列*/,times=0/*游戏循环次数*/;
    printf("请输入游戏次数:");
    scanf("%d",&play_tm);
    int cnt=0/*打中次数统计*/;
    do{
    int map[3][3]={0};
    scanf("%*[^\n]");
    scanf("%*c");
    //输入锤子位置
    printf("请输入锤子位置:");
    scanf("%d %d",&row1,&col1);
    srand(time(0));
    //随机生成老鼠位置
    row=rand()%3;col=rand()%3;
    //判断是老鼠还是锤子
    if(row==row1-1&col==col1-1){
    map[row][col]=1;
    cnt++;
    }
    else{
        map[row1-1][col1-1]=2;
        map[row][col]=1;
    }
    //显示地图
    for(row=0;row<=2;row++){
        for(col=0;col<=2;col++){
            if(map[row][col]==0)
                printf("* ");
            if(map[row][col]==1)
                printf("X ");
            if(map[row][col]==2)
                printf("O ");
        }
        printf("\n");
    }
    //当次游戏结果显示
    times++;
    if(row==row1-1&&col==col-1)
        printf("打中了！\n");
    else
        printf("没打中！\n");
    printf("打中了%d次，错过%d次！\n",cnt,times-cnt);
    }while(times<play_tm);
    return 0;
}

