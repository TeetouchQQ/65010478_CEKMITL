#include<stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int field[size][size];
    for(int i= 0;i<size;i++){
        for(int j= 0;j<size;j++){
            if(i == 0 || j == size-1 || i == size-1 || j ==0){
                field[i][j] = 1;
            }else{
                field[i][j] = 0;
            }
        
        }
    }
    for(int i= 0;i<size;i++){
        for(int j= 0;j<size;j++){
            if(field[i][j] == 0){
                printf(" ");
            }else{
                printf("*");
            }
        }
         printf("\n");
    }
    
}