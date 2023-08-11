// this program test if a string is a palindrome or not with out using the sting.h library

#include <stdio.h>
#include <stdlib.h>


void ispalindrome(int n, char string[n]){

    char *rstring = (char *)calloc(n , sizeof(char));

    for (int i = 1 ; i <= n ; i++){
        rstring[i-1] = string[n-i];
    }

    int t = 0;

    for ( int i = 0; i < n ; i++){
        if(rstring[i] == string[i]){
            t = 0;
        }else {
            t = 1;
        }
    }


    if (t == 1){
        printf("your string is not a palindrome");
    }else if (t == 0){
        printf("your string is a palindrome");
    }

}

int main(int argc, char *argv[]){


    int n;
    

    printf("enter the number of characters in your string : ");
    scanf("%d", &n);

    char *string = (char *)malloc(n * sizeof(char));

    printf("enter your string : ");
    scanf("%s", string);
        
    ispalindrome(n, string);
    
    free(string);
    return 0;
}
