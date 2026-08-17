#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 3


typedef struct List{
    int data;
    struct List *next;
}List, *Node;

void printList(Node x);


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
    printList(List);
}


void printList(Node x){
    printf("\n--- List ---\n{ ");
    for(;x!=NULL;x = x->next){
        printf("%d ",x->data);
    }
    printf(" }");
}

void Palindrome(Node *x){

    Node Trav = (*x),Head = NULL,Tail;


    for(;Trav->next != NULL ; Trav = Trav->next){
        //Travels to the end 
        if(Head == NULL){
            Head = Trav; //head is now pointing to the last of the List
        }else{
            //traversal again
            Node Travhead = Head;
            for(;Travhead->next != NULL;Travhead = Travhead->next){
                //insert last 
            }
            Travhead->next = Trav;
        }

    }


}
