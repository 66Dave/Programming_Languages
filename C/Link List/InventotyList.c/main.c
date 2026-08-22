#include <stdio.h>
#include <stdlib.h>

#include "function.h"
#define limit = 10



void main(){
    int size = 5;
    List *L = malloc(sizeof(List));
    (*L).count = 0;
    (*L).count = size;
-
    int arr[5] = {10,20,30,40,50};
    for(int i = 0; i < size ; i++){
        insertFirst(&L , arr[i]);
    }

    print(*L);
}

