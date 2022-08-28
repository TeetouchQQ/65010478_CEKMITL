#include<stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int row = x;
    int column = (x*2)-1;
    int field[row][column];
    
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            field[i][j] = 0;
        }
    }
    int star = row;
    int pad = 0;
    while(star != 0){
        for(int i=0;i<star;i++){
            field[i+pad][i] =1;
        }
        star -=1;
        pad +=1;
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i<=x && j>= x){
                field[i][j] = field[i][column - j - 1];
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(field[i][j] ==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(int i =x-1;i>0;i--){
        for(int j=0;j<column;j++){
            if(field[i-1][j] ==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}