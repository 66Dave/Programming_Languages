#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// ==========================
// YOU WRITE THESE FUNCTIONS
// ==========================
int isFull();
int isEmpty();
void push(int value)
{
    // YOUR CODE HERE
    //add last
    if( (isFull()) == 1 ){//means 1st cond stack isfull 
        //go back to main cause nothing we can do
    }else{
        ++top ;
        stack[top] = value;


    }
    
}

int pop()
{
    // YOUR CODE HERE
    if(isEmpty() == 1){
        //nothing to do since its empty
        return 0;
    }else{
        int temp =  stack[top] ;
        stack[top] = 0;
        top--;
        return temp;

    }
}

int peek()
{
    // YOUR CODE HERE
    return stack[top];
}

int isEmpty()
{
    // YOUR CODE HERE
    if (top == -1){//- 1 is default
        return 1; //return 1 cause true
    }else{
        return 0;
    }
    

}

int isFull()
{
    // YOUR CODE HERE
    if(top == SIZE -1){
        return 1;//return 1 cause full
    }else{
        return 0;
    }
}


// ==========================
// DON'T CHANGE MAIN
// ==========================

int main()
{
    push(10);
    push(20);
    push(30);

    printf("Top: %d\n", peek());

    printf("Removed: %d\n", pop());
    printf("Removed: %d\n", pop());

    printf("Top: %d\n", peek());

    printf("Empty? %d\n", isEmpty());
    printf("Full? %d\n", isFull());

    return 0;
}