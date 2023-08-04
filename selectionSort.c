#include <stdio.h>
#include <stdlib.h>

void swap(int* k, int* n){
    int temp;
    temp = *k;
    *k = *n;
    *n = temp;

}

int main(int argc, char *argv[]){


    int n;
    printf("enter the number of elements you want to sort : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("%d", n * sizeof(int));

    for (int i = 0; i < n ; i++){
        printf("\nenter the element number %d : ",i);
        scanf(" %d", &arr[i]);
    }

    printf("[");
    for (int i = 0; i < n; i++ ){
        printf("%3d", arr[i]);
    }
    printf("]");

    for (int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++ ){
            if (arr[j] > arr[i]){
                swap(&arr[j],&arr[i]);
            }
        }
    }
    printf("\n[");
    for (int i = 0; i < n; i++ ){
        printf("%5d  ", arr[i]);
    }
    printf("]");

    
    return 0;
}
