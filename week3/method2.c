#include<stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i =0;i<=num;i++){
        printf("*");
    }
    for(int i =0;i<=num-2;i++){
        printf("\n*");
        for(int i =0;i<=num-2;i++){
            printf(" ");
        }
        printf("*");
    }
    printf("\n*");
    for(int i=0;i<=num-1;i++){
        printf("*");
    }
}