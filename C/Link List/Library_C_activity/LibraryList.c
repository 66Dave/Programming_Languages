#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "populated.h"

#define MAX 100

typedef struct Name{
    char Fname[MAX];
    char Mname;
    char Lname[MAX];

}Name;

typedef struct Book{
    Name Author;
    char bookName[MAX];
    float Rating;
}Book;

typedef struct List{
    Book bk;
    int bookId;
    struct List *next;
}List, *Listptr;


//add first
//add last
//remove first
//remove last
//reverse list

//hash function for bookid
int hashId(Listptr Library, Listptr Temp){
    //hash for id
    //circular hash  watch for collision and stuff
}

void PrintList(Listptr Library){

    if (Library == NULL){
        printf("\nLibrary is empty.\n");
        return;
    }

    Listptr Trav;

    for (Trav = Library; Trav != NULL; Trav = Trav->next){

        printf("\n==============================");
        printf("\nBook ID: %d", Trav->bookId);
        printf("\nBook Name: %s\n", Trav->bk.bookName);
        printf("Author: %s %c. %s\n",
               Trav->bk.Author.Fname,
               Trav->bk.Author.Mname,
               Trav->bk.Author.Lname);
        printf("Rating: %.2f\n", Trav->bk.Rating);

    }

    printf("==============================\n");
}

void populate(Listptr *Temp, Listptr Source){

   
    printf("Enter Author First Name: ");
    scanf(" %[^\n]", (*Temp)->bk.Author.Fname);
    printf("Enter Author Middle Name: ");
    scanf(" %c", &(*Temp)->bk.Author.Mname);
    printf("Enter Author Last Name: ");
    scanf("%s",(*Temp)->bk.Author.Lname);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", (*Temp)->bk.bookName);
    printf("Enter book rating: ");
    scanf("%f",&(*Temp)->bk.Rating);
    (*Temp)->bookId = hashId(Source, (*Temp));   
}


void JustAddList(Listptr *Library){
    //List empty so add in first
    Listptr Temp = NULL;
    Temp = malloc(sizeof(List));
    if(Temp == NULL){
        printf("Malloc Failed");
    }else{
        populate(&Temp, (*Library));
        Temp->next =NULL;
        (*Library) = Temp;
    } 
}
void initialize(Listptr *Library){
    (*Library) = NULL;
}


void AddFirst(Listptr *Library){
    









}


void AddLast(Listptr *Library){
    








}

void DeleteFirst(Listptr *Library){









}


void DeleteLast (Listptr *Library){
    



















}

void main(){
    int i,j ,choice = 0;
    Listptr Library;
    initialize(&Library);
    while (choice != -1){
        printf("--- Welcome to the Linked List Library ---\n[0]Print BookList\n[1]add first\n[2]delete first\n[3]add last\n[4]delete last\n[5]access List\n[6]reverse list\n[7]Arrange List\n[8]Close System\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 0: 
                PrintList(Library);
                break;
            case 1:
                if(Library == NULL){// List empty
                    JustAddList(&Library);
                }else  {
                    AddFirst(&Library);
                }

                break;
            case 2:
                if(Library == NULL){
                    printf("List is already empty");
                }else{
                    DeleteFirst(&Library);
                }
                break;
            case 3:
                if(Library == NULL){// List empty
                    JustAddList(&Library);
                }else  {
                AddLast(&Library);
                }
                break;
            case 4:
                if(Library == NULL){
                    printf("List is already empty");
                }else{
                    DeleteLast(&Library);
                }
                break;
            case 5:
                //add another switch here to get user access
                printf("\nAccessing...\nSelect what do you want to do\n[1]Add in a specific position\n[2]remove a specific id \n[3]back\n");
                break;
            case 6:
                AddFirst(&Library);
                break;
            case 7:
                AddFirst(&Library);
                break;
            case 8:
                printf("\nShutting down nigga!! ");
                
                    for(i = 1;i<4;i++){
                    printf("%d ", i);
                        for(j = 0;j < i;j++){
                            printf(". ");
                        
                    }

                }    
                 printf("System Shut down");
                choice = -1;
                break;
            default:
                printf("\nEnter a Valid Number");
                break;
            
            
        }
    }
}