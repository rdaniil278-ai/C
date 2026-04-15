#include <stdio.h>
int main(){
    int arr[5][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            arr[i][j] = i + 1;
        }
    }

     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
     }

    for(int i = 2; i < 5; i++){
        for(int j = 0; j < 2; j++){
            arr[i][j] = i + j;
        }
    }

     for(int i = 2; i < 5; i++){
        for(int j = 0; j < 2; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
     }

}
