//this program in c convert a value of a given number in decimal to binary

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num;

    printf("entre the number : ");
    scanf("%d",&num);

    int n = num;
    int i = 0;

    while( n > 1 ){
        n /= 2;
        i++;
    }

    char* t = (char *)calloc(i , sizeof(char)) ;  

    int l = 0 ;
    while (num >= 1){
    
        if(num % 2 ==0){
            strcat(t, "0");
        }else {
            strcat(t, "1");
        }
        num /=2;
        l++;
    }

    strrev(t);
    printf("%s\n", t);
    free(t);
    return 0;

}
