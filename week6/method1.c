#include<stdio.h>
#include <string.h>
int main() {
    char input[999999];
    int idx;
    scanf("%s", input);
    char* main_char = "abcdefghijklmnopqrstuvwxyz1234567890";
    const char *morse[99] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-"
                ,".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
    
    for(int i = 0;i<strlen(input);i++){
    idx = 0;
    char *e = input;
    while (*e++ != input[i]){
        idx +=1;    
    } 
    //printf("%d\n",idx);
    printf("%s",morse[idx]);
            
    }
}
