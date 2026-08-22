
typedef struct{
    int *elem;
    int count;
    int max;

}List;

void insertFirst(List *L, int num){
    (*L).elem = malloc(sizeof(List)* (*L).max);
    (*L).elem[(*L).count] = num;
    (*L).count++;

}   


void print(List L){
    printf("\nArray: ");
    for(int i =0; L.count;i++){
        printf(" %d", L->elem[i]);
    }
}