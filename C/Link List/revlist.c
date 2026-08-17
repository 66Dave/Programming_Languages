#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 3


typedef struct List{
    int data;
    struct List *next;
}List, *Node;

void printList(Node x);
void Palindrome(Node *x);

void main(){
    Node List = NULL;
    Node Temp = NULL;
    for(int i = 0; i < SIZE; i++){
        Temp = malloc(sizeof(List));
        printf("Enter [%d]: ", i+1);
        scanf("%d", &Temp->data);
        Temp->next = NULL;
        if(List == NULL){
            List = Temp;
        }else{//List is not empty and inserting Last
            Node trav = List;
            for(;trav->next != NULL; trav = trav -> next){
                //Traversal to get end
            }
            trav->next = Temp;
        }
    }
    printf("\n--- List ---\n{ ");

    printList(List);

    printf("\n---Reversing List ---\n{ ");

    Palindrome(&List);


    printList(List);

}


void printList(Node x){
    
    for(;x!=NULL;x = x->next){
        printf("%d ",x->data);
    }
    printf(" }");
}

void Palindrome(Node *x){

    Node Trav, Prev = NULL, Temp;

    for(Trav = (*x); Trav != NULL; Trav = Temp){
        Temp = Trav->next;
        Trav->next = Prev;
        Prev = Trav;
    }
    (*x) = Prev;

}
