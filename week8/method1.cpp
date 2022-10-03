// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char *ptr2;
    char ch;
    int cnt = 0;
    int value;
    char str;
    int x;
    int answer = 0;
    ptr = fopen("a.txt", "r");
    do {
        ch = fgetc(ptr);
        if(cnt == 0 || cnt ==2){
        	str = ch;
        	x = str -'0';
        	printf("\n%d\n", x);
        	answer+=x;
		}
        cnt+=1;
    } while (ch != EOF);
    fclose(ptr);
    printf("\n%d",answer);
    //WRITE b.txt
    FILE *fptr;
    fptr = fopen("b.txt","w");
    fprintf(fptr,"%d",answer);
   	fclose(fptr);
    
    
    return 0;
}