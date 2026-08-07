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
    //convert author fname to asci and book name to asci and multiply add 1 if already occupied
    //get author fname to be asci
    int total, i, totalfname =0, totalbookname = 0;
    
    for (i =0; i < strlen(Temp->bk.Author.Fname);i++){
        totalfname = totalfname + Temp->bk.Author.Fname[i];
    }

    for (i =0; i < strlen(Temp->bk.bookName);i++){
        totalbookname = totalbookname + Temp->bk.bookName[i];
    }
    total = (totalfname*totalbookname);

    //check if bookid already existed
    Listptr Trav;
    int collision = 1;

    while(collision == 1){

        collision = 0;

        for(Trav = Library;Trav != NULL ; Trav = Trav->next){
            //check statement
           
            if(Trav->bookId == total){
                total ++;
                collision =1;
                break;
            }
        }
    }
   
    return total;
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
    //already populated
    //insert first
    Listptr Temp = malloc(sizeof(List));
    if(Temp == NULL){
        printf("Malloc Failed");
        return;
    }else{
        populate(&Temp, (*Library));
    }
    
        Temp->next = (*Library);
        (*Library) = Temp; 
}


void AddLast(Listptr *Library){
    //List already checked in main that its not == NULL
    Listptr Temp = malloc(sizeof(List));
    populate(&Temp, (*Library));
    Temp->next = NULL;
    Listptr Trav = (*Library);
    for(;Trav->next != NULL;Trav = Trav->next){
        //traverse till end or till Trav->next == NULL
    }
    Trav->next = Temp;
    

}

void DeleteFirst(Listptr *Library){

    //List already has at least one variable
    if((*Library)->next == NULL){//only has one variable
        free(*Library);
        (*Library) = NULL;//DELETES EVERYTHING

    }else{//Library has multiple nodes
        Listptr Temp = ((*Library)->next);
        free(*Library);
        (*Library) = Temp;

    }

}


void DeleteLast (Listptr *Library){
    //main already checked that List is not empty
    Listptr Trav = (*Library) ;
    if((*Library)->next == NULL){//only one variable
        free(*Library);
        (*Library) = NULL;

    }else{//multiple var
        for(;Trav->next->next != NULL;Trav = Trav->next){
        //traverse till end or till Trav->next == NULL
        }
        free(Trav->next);
        Trav ->next = NULL;

    }
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