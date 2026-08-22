#include <stdio.h>


typedef struct {
    char name[10];

}Name;


void main(){
    Name a = {"dave"};

    Name b;
    b = a;

    printf("%s", b.name);
}