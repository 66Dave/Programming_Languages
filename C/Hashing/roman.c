#include <stdio.h>
#include <strings.h>
#include <stdbool.h>

#define Max 100
int getromTotal(char rom[]);
int findNum(char num);

bool ValidChecker(char rom[]){
    bool res = true;
    //roman numeral rules: IV = VALID IIV = INVALID unless its C  AND M can repeat 3 times
    int i,j, count;

    for (i = 0;i < strlen(rom);i++){

        //rules
        if(findNum(rom[i]) == 0){
           return false;


        }else if(rom[i] == rom[i+1] && findNum(rom[i]) < findNum(rom[i+2]) && rom[i+2] != '\0'){//rule that a lesser numner count should not be over 2
            return false;
            

        }else if(rom[i] == 'I' || rom[i] == 'X' || rom[i] == 'C'|| rom[i] == 'M' ){
            //can only repeat 3x as long at the last one is > means  
            count = 0;
            for(j = i; j < strlen (rom);j++){
                if(rom[i] == rom[j]){
                    count++;
                }else{
                    break;
                }
            }

            else if(count >3){
                return false;
            }

        

        }
    }
    
}


void main(){
char rom[Max];
int i, choice = 1;

//IVX lets do this first
    while ( choice == 1){    

            printf("Enter a roman numeral: ");
            scanf("%s", rom);


            //need to create a roman checker if the roman numeral was inputed correctly
            bool is = ValidChecker(rom);

                if(is == false){

                    printf("\nInvalid Input...");

                }else{
                    
                    
                    int total = getromTotal(rom);
                    printf("\nRoman equivalent: %d", total);
                    //printf("%d", strlen(rom)-1);

                }

        printf("\nEnter 1 to continue:\nEnter 0 to Exit: \nchoice: ");
        scanf("%d",&choice);
            
}
}


int findNum(char num){

    switch(num){

    case('I') :
        return 1;
    case ('V'):
        return 5;
    case ('X'):
        return 10;
    case ('L'):
        return 50;
    case ('C'):
        return 100;
    case ('D'):
        return 500;
    case ('M'):
        return 1000;
    default:
        return 0;
    }
    
}

int getromTotal(char rom[]){
int i = 0,value = 0,newval;

    
        for(i = 0;i < strlen(rom);i++){
            // lets just add all for now
            if(findNum(rom[i]) >= findNum(rom[i+1])){
                newval = findNum(rom[i]);
            }
            //newval = findNum(rom[i]);



        value = value + newval;
        }
    
    //printf(" Roman: %s function val: %d ",rom, value);
    return value;
}


