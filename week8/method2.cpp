#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int num1;
   FILE *fptr;

   if ((fptr = fopen("a.txt","r")) == NULL){
       printf("Error! opening file");

       exit(1);
   }

   fscanf(fptr,"%d %d", &num,&num1);

   fclose(fptr); 
  	//WRITE
  	int answer = num1 + num;
  	FILE *ptr;
    ptr = fopen("b.txt","w");
    fprintf(ptr,"%d",answer);
   	fclose(ptr);
    
   return 0;
}
