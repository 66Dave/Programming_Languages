#include <stdio.h>
#include <stdlib.h>
#include "func.h"


#define Max 10

void main(){

    int arr[Max] = { 10 , 20 ,30 ,40 , 50 , 60};
    int size = 6;
    int num = 25;
    print(arr, size);
    findPos(arr, 2, &size);

}

