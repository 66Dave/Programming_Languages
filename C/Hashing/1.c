#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int table[SIZE];

int hash(int key){

   
    key = key%SIZE;
     int i = key;
    //prevent collision
    if(table[key] != -1){
        for(; i < SIZE  ;i++ ){
            if(table[i] == -1){
                return i;
            }  
        }
        
    }

    if ( i == SIZE ){
        
        for(i = 0; i < key ;i++ ){
            if(table[i] == -1){
                return i;
            }
        }
        if( i == key){
            printf(" \n\n data is full...unable to add data \n\n");
            return -1;
            }
    }
    if(table[key] == -1){
        return key; 
    }
}
void init(){
    int i;
    for(i = 0; i < SIZE; i++){
        table[i] = -1;
    }

}
void main(){
    //call init to initialize everything to -1
    init();


    table[hash(12)] = 12;
    table[hash(11)] = 11;
    table[hash(119)] = 119;
    table[hash(229)] = 229;
    table[hash(39)] = 39;
    table[hash(191)] = 191;
    table[hash(219)] = 219;
    table[hash(10)] = 10;
    table[hash(9)] = 9;
    
    int num;
    printf("Enter a number to insert: ");
    scanf("%d", &num);
    table[hash(num)] = num;
    
   
    
    
    
    for(int i = 0; i < SIZE; i++){
        printf("table[%d] = %d \n",i, table[i]);
    }


}