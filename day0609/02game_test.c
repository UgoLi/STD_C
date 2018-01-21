//地鼠游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int mouse_row/*老鼠行*/,mouse_col/*老鼠列*/;
    int ham_row/*锤子行*/,ham_col/*锤子列*/;
    int hits=0/*打中次数*/,missed=0/*错过次数*/;
    int times=0/*游戏总次数*/,num=0/*游戏循环变量*/;
    printf("请输入游戏次数:");
    scanf("%d",&times);
    srand(time(0));
    int row=0,col=0;
    for(num=1;num<=times;num++){
        //获取锤子位置
        printf("请选择一个位置:");
        scanf("%d%d",&ham_row,&ham_col);
        mouse_row=rand()%3+1;
        mouse_col=rand()%3+1;
        //显示地图
        for(row=1;row<=3;row++){
            for(col=1;col<=3;col++){
                if(row==ham_row&&col==ham_col){
                    printf("O ");
                }
                else if(row==mouse_row&&col==mouse_col){
                    printf("X ");
                }
                else {
                    printf("* ");
                }
            }
            printf("\n");
        }
        //显示当次结果
        if(ham_row==mouse_row&&ham_col==mouse_col){
            printf("打中了！\n");
            hits++;
        }
        else{
            printf("没打中！\n");
            missed++;
        }
        printf("打中了%d次，错过了%d次\n",hits,missed);
    }
    printf("游戏结束！！\n");
    return 0;
}
