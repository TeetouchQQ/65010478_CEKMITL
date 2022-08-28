#include<stdio.h>

int main() {
    int size,y,c;
    scanf("%d",&size);
    int sizes = (size*2)-1;
    int field[sizes][sizes];
    
    for(int x=0;x<sizes;x++){
        for(int y=0;y<sizes;y++){
            field[x][y] = 0;
        }
    }
    for(int x=0;x<sizes;x++){
        field[x][x] = 1;
        field[(sizes-1)-x][x] = 1;
    }
    
    for(int x=0;x<sizes;x++){
        for(int y=0;y<sizes;y++){
            if(field[x][y] != 1){
                if( x < y){
                    field[x][y] = 0;
                }
                if(y < (sizes-1)-x){
                    field[x][y] = 0;
                }
                if( y < x){
                    field[x][y] = 1;
                }
                if((sizes-1)-x < y){
                    field[x][y] = 1;
                }
            }
        }
    }
    for(int x=0;x<sizes/2;x++){
        for(int y=0;y<sizes;y++){
            if(field[x][y] == 1){
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(int x=sizes/2;x>=0;x--){
        for(int y=0;y<sizes;y++){
            if(field[x][y] == 1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}