#include<stdio.h>

int main() {
    int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,answer;
    scanf("%d %d %d %d %d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);
    printf("Student 1 Height :%d\n",s1);
    printf("Student 2 Height :%d\n",s2);
    printf("Student 3 Height :%d\n",s3);
    printf("Student 4 Height :%d\n",s4);
    printf("Student 5 Height :%d\n",s5);
    printf("Student 6 Height :%d\n",s6);
    printf("Student 7 Height :%d\n",s7);
    printf("Student 8 Height :%d\n",s8);
    printf("Student 9 Height :%d\n",s9);
    printf("Student 10 Height :%d\n",s10);
    answer = (s1+s2+s3+s4+s5+s6+s7+s8+s9+s10)/10;
    printf("Mean : %d",answer);
}