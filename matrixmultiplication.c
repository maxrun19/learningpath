#include <stdio.h>

int main(int argc, char *argv[]){


    
    int m1[3][2]={{1,2},
                  {7,2},
                  {1,33}};

    int m2[2][4]={{1,2,7,99},
                  {44,2,4,40}};

    int m3[sizeof(m1)/sizeof(m1[0])][sizeof(m2[0])/sizeof(m2[0][0])] = {};

    for(int i = 0 ; i < sizeof(m3)/sizeof(m3[0]); i++ ){
        for(int j = 0 ; j < sizeof(m3[0])/sizeof(m3[0][0]); j++){
            m3[i][j] = 0;
        }
    }


    for (int i = 0; i < sizeof(m1)/sizeof(m1[0]); i++){
    
        for ( int p = 0; p < sizeof(m2[0])/sizeof(m2[0][0]) ; p++ ){
            for(int k = 0; k < sizeof(m1[0])/sizeof(m1[0][0]) ;k++){
            m3[i][p] = m3[i][p] + m1[i][k] * m2[k][p] ;
            }
        }

    }

    for(int i = 0 ; i < sizeof(m3)/sizeof(m3[0]); i++ ){
        printf("[");
        for(int j = 0 ; j < sizeof(m3[0])/sizeof(m3[0][0]); j++){
            printf(" %4d ",m3[i][j]);
        }
        printf("]\n");
    }

    
    return 0;
}
