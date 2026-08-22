#include <stdio.h>
#include <stdlib.h>

#define size 10

typedef struct {
    char fname[size];
    char lname[size];
} Name;

typedef struct node {
    Name name;
    struct node *next;
} node, *List;


// ==================== FUNCTION PROTOTYPES ====================

void addFirst(List *L, Name x);
void addLast(List *L, Name x);
void printList(List L);
void freeList(List *L);
void addLast(List *L, Name x);
List createNode(Name x);

// ==================== MAIN ====================

int main() {

    List a = NULL;

    Name arr[3] = {
        {"Bab", "Moday"},
        {"Dave", "Lagunda"},
        {"John", "Doe"}
    };

    // Add all names to the linked list
    for (int i = 0; i < 3; i++) {
        addLast(&a, arr[i]);
    }

    // Test your list

    printList(a);

    // Free allocated memory
    freeList(&a);

    return 0;
}


// ==================== FUNCTIONS ====================

void addFirst(List *HEAD, Name x) {
 

}

List createNode(Name x){
    List newNode = malloc(sizeof(node));
    newNode->next = NULL;
    newNode->name = x;

    return newNode;

}

void addLast(List *head, Name x) {
    // TODO:
    List trav = (*head);
    List newNode = createNode(x);
   //check if empty
   if((*head) == NULL){
        (*head) = newNode;
        
   }else {
        
        for(; trav->next != NULL; trav = trav->next){}//traverse to last node
        trav->next = newNode;
        
   }
   
}


void printList(List L) {
    // TODO:
    List trav;
    for( trav = L;trav != NULL; trav = trav->next){
        printf("\n %s, %s", trav->name.fname , trav->name.lname);
    }
}


void freeList(List *L) {
    // TODO:
    // Traverse the list
    // Free every node
    // Set *L to NULL
}