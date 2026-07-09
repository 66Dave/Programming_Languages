#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
 int val;
 struct Node *next;
}List, *L;

void revList(L *list){
L temp;
L curr = (*list);
L prev = NULL;


while(curr != NULL){
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    
}

(*list) = prev;


   
}

void main(){

    L list =  malloc( sizeof(List));

    list->val = 1;
    list->next  =  malloc( sizeof(List));
    list->next->val = 2;
    list->next->next =  malloc( sizeof(List));
    list->next->next->val =3;
    

    revList( &list);
    for(; list != NULL; list = list->next){
        printf("%d ", list->val);
    }




}