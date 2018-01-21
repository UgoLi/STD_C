//二维数组螺旋遍历处理
//输入：
//abcde
//pqrsf
//oxytg
//nmvuh
//mlkji
#include<stdio.h>
#include<printf_color.h>
int main()
{   
    int size=0;
    printf("请输入数组，每组元素数个数:");
    scanf("%d",&size);
    scanf("%*[^\n]");
    scanf("%*c");
    char ch;
    int cnt=0;
    // printf("\n");
    printf("请输入需要统计的小写字母:");
    scanf("%c",&ch);
    scanf("%*[^\n]");
    scanf("%*c");
    int arr[size][size];
    int a=96;
    int x_st=0,x_end=size-1;
    int y_st=0,y_end=size-1;
    int row=0,col=0;
    //螺旋赋值
    printf("*****************************************************************分界线*********************\n");
    for(;x_st<=x_end;){                         //数组范围判断
    	for (col=y_st;col<=y_end-1;col++){      //Top遍历赋值
                if(122==a)
                    a=96;
        	a++;
            //a='~';
        	arr[x_st][col]=a;
    	}    
        //a++;
    	for (row=x_st;row<=x_end-1;row++){      //Right遍历赋值
                if(122==a)
                    a=96;
        	a++;
            //a='|';
        	arr[row][y_end]=a;
   	    }   
        //a++;
    	for (col=y_end;col>=y_st+1;col--){      //Bottom遍历赋值
                if(122==a)
                    a=96;
        	a++;
            //a='~';
        	arr[x_end][col]=a;
    	}
        //a++;
    	for(row=x_end;row>=x_st+1;row--){       //Left遍历赋值
                if(122==a)
                    a=96;
       	 	a++;
            //a='|';
        	arr[row][y_st]=a;
    	}
        //a++;
        if(x_st==x_end){                        //数组中心赋值
            if(122==a)
                a=96;
            arr[x_st][x_end]=++a;
            //arr[x_st][x_end]='a';
        }
        //数组外围角点，循环体
	x_st++;
	y_end--;
	x_end--;
    y_st++;
    }
    //输出显示
    for(row=0;row<=size-1;row++){
        for(col=0;col<=size-1;col++){
            if(ch==arr[row][col])
                cnt++;
            printf(LIGHT_RED"%c "NONE,arr[row][col]);
        }
        printf("\n");
    }
    printf(GREEN"************************************************************分界线**************************\n"NONE);
    printf("字符 %c 总共有 %d 个！\n",ch,cnt);
    return 0;
}
