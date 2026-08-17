#include <stdio.h>

#define Size 10
//checking what happen if u put traversal pointer as NULL

struct List{
    int val;
    struct List * next;
};


struct List populate(struct List * arr);


void main(){
    struct List Arr = NULL;


}

struct List populate(struct List * arr){
    int i;
    struct List trav = (*arr);
    for(i = 0; i < Size ; i++){
        if((*arr) == NULL){
            (*arr)->var = i;
        }
    }
}