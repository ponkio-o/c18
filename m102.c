#include<stdio.h>
#include<stdlib.h>
#define XLEN 13
#define YLEN 13
int main(){
    int i,j;
    int a[XLEN][YLEN];
    int yokomax[XLEN];
    int tatemax[YLEN];

    //初期値のセット
    for(j=0;j<YLEN;j++){
        for(i=0;i<XLEN;i++){
            a[j][i]=rand()%100;
        }
    }

    //横の最大値計算
    for(j=0;j<YLEN;j++){
        yokomax[j]=a[j][0];
        for(i=0;i<XLEN;i++){
            if(yokomax[j]<a[j][i]){
                yokomax[j]=a[j][i];
            }
        }
    }

    //縦の最大値計算
    for(j=0;j<YLEN;j++){
        tatemax[j]=a[0][j];
        for(i=0;i<XLEN;i++){
            if(tatemax[j]<a[i][j]){
                tatemax[j]=a[i][j];
            }
        }
    }

    //横軸の最大値の出力
    for(j=0;j<YLEN;j++){
        for(i=0;i<XLEN;i++){
            printf("%2d ",a[j][i]);
        }
        printf(" | %d",yokomax[j]);
        printf("\n");
    }

    //区切り線
    for(i=0;i<XLEN;i++){
        printf("---");
    }
    printf("\n");

    //縦軸の最大値の出力
    for(i=0;i<YLEN;i++){
        printf("%2d ",tatemax[i]);
    }
    printf("\n");
}
