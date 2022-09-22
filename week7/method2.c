#include<stdio.h>

int main() {
    int answer;
    int input[10];
    scanf("%d %d %d %d %d %d %d %d %d %d",&input[0],&input[1],&input[2],&input[3],&input[4],&input[5],&input[6],&input[7],&input[8],&input[9]);
    for(int i=0;i<10;i++){
    	printf("Student %d Height :%d\n",i,input[i]);
    	answer += input[i];
	}
    answer = answer/10;
    printf("Mean : %d",answer);
}