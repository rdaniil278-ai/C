#include <stdio.h>
int main(){

    int arr[3][6];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            arr[i][j] = j * 2;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            printf("%d", arr[i][j]);
        }
printf("\n");
    }
}