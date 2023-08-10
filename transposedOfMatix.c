#include <stdio.h>

void func(int n ,int p ,int m[n][p]){

    int matrix[p][n];

    for (int i = 0 ; i < n; i++){
        for (int j = 0; j < p; j++ ){
            matrix[j][i] = m[i][j];
        }
    }

    for(int i = 0 ; i < n; i++ ){
        printf("[");
        for(int j = 0 ; j < p; j++){
            printf(" %2d ",m[i][j]);
        }
        printf("]\n");
    }

    printf("\n");

    for(int i = 0 ; i < p; i++ ){
        printf("[");
        for(int j = 0 ; j < n; j++){
            printf(" %2d ",matrix[i][j]);
        }
        printf("]\n");
    }

}


int main(int argc, char *argv[]){

    int m1[4][5]={{1,2,3,6,4},
                  {1,2,3,6,4},
                  {1,33,3,6,4},
                  {1,2,3,6,4}};

    int m2[5][4]={{1,2,7,5},
                  {1,2,7,6},
                  {1,4,7,88},
                  {1,2,7,68},
                  {1,2,7,18}};


    func(4 , 5, m1);
    printf("\n");
    func(5 , 4, m2);

    
    
    return 0;
}
