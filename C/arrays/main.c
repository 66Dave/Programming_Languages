#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

// ============================================================
// STRUCTURES
// ============================================================

typedef struct {
    int id;
    char name[NAME_LEN];
    float grade;
} Student;


// ======================= LINKED LIST ========================

typedef struct Node {
    Student data;
    struct Node *next;
} Node;

<<<<<<< HEAD
    int arr[Max] = { 10 , 20 ,30 ,40 , 50 , 60};
    int size = 6;
    int num = 25;
    print(arr, size);
    findPos(arr, 2, &size);
=======
typedef Node *List;


// ========================== STACK ============================

typedef struct StackNode {
    Student data;
    struct StackNode *next;
} StackNode;

typedef StackNode *Stack;


// ========================== QUEUE ============================

typedef struct QueueNode {
    Student data;
    struct QueueNode *next;
} QueueNode;

typedef struct {
    QueueNode *front;
    QueueNode *rear;
} Queue;


// ============================ BST ============================

typedef struct TreeNode {
    Student data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef TreeNode *BST;


// ============================================================
// LINKED LIST
// ============================================================

List createNode(Student data);

void addFirst(List *L, Student data);
void addLast(List *L, Student data);
void insertSorted(List *L, Student data);

int deleteStudent(List *L, int id);
Node *searchStudent(List L, int id);

void displayList(List L);
int listSize(List L);
void reverseList(List *L);


// ============================================================
// STACK
// ============================================================

void initStack(Stack *S);

int isStackEmpty(Stack S);

void push(Stack *S, Student data);
int pop(Stack *S, Student *data);
int peek(Stack S, Student *data);

void displayStack(Stack S);


// ============================================================
// QUEUE
// ============================================================

void initQueue(Queue *Q);

int isQueueEmpty(Queue Q);

void enqueue(Queue *Q, Student data);
int dequeue(Queue *Q, Student *data);

void displayQueue(Queue Q);


// ============================================================
// BST
// ============================================================

BST createTreeNode(Student data);

void insertBST(BST *T, Student data);

Node *searchBST(BST T, int id);

void inorder(BST T);
void preorder(BST T);
void postorder(BST T);

int treeHeight(BST T);
int countNodes(BST T);

BST findMin(BST T);
BST findMax(BST T);

int deleteBST(BST *T, int id);


// ============================================================
// SORTING
// ============================================================

void bubbleSort(Student arr[], int size);
void selectionSort(Student arr[], int size);
void insertionSort(Student arr[], int size);

void mergeSort(Student arr[], int left, int right);
void quickSort(Student arr[], int low, int high);


// ============================================================
// SEARCHING
// ============================================================

int linearSearch(Student arr[], int size, int id);
int binarySearch(Student arr[], int size, int id);


// ============================================================
// UTILITIES
// ============================================================

void swap(Student *a, Student *b);

void printStudent(Student s);

void freeList(List *L);
void freeStack(Stack *S);
void freeQueue(Queue *Q);
void freeTree(BST *T);


// ============================================================
// MAIN
// ============================================================

int main() {

    List students = NULL;

    Stack history;
    Queue waitingQueue;

    BST rankingTree = NULL;

    initStack(&history);
    initQueue(&waitingQueue);


    Student s1 = {1001, "Alice", 92.5};
    Student s2 = {1002, "Bob", 85.0};
    Student s3 = {1003, "Charlie", 96.0};
    Student s4 = {1004, "David", 78.5};
    Student s5 = {1005, "Eve", 89.5};


    // Linked List

    addFirst(&students, s1);
    addFirst(&students, s2);
    addLast(&students, s3);
    addLast(&students, s4);
    addLast(&students, s5);

    printf("\n===== LINKED LIST =====\n");
    displayList(students);


    // Stack

    push(&history, s1);
    push(&history, s2);
    push(&history, s3);

    printf("\n===== STACK =====\n");
    displayStack(history);


    // Queue

    enqueue(&waitingQueue, s1);
    enqueue(&waitingQueue, s2);
    enqueue(&waitingQueue, s3);

    printf("\n===== QUEUE =====\n");
    displayQueue(waitingQueue);


    // BST

    insertBST(&rankingTree, s1);
    insertBST(&rankingTree, s2);
    insertBST(&rankingTree, s3);
    insertBST(&rankingTree, s4);
    insertBST(&rankingTree, s5);

    printf("\n===== BST =====\n");
    inorder(rankingTree);


    // Array

    Student arr[] = {
        s1,
        s2,
        s3,
        s4,
        s5
    };

    int size = sizeof(arr) / sizeof(arr[0]);


    printf("\n===== ARRAY =====\n");

    for(int i = 0; i < size; i++) {
        printStudent(arr[i]);
    }


    // Cleanup

    freeList(&students);
    freeStack(&history);
    freeQueue(&waitingQueue);
    freeTree(&rankingTree);

    return 0;
}


// ============================================================
// IMPLEMENTATION
// ============================================================


// LINKED LIST

List createNode(Student data) {
    //create node functions 
    // to be called from main
    List newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;

    return newNode;
>>>>>>> bfc76269436eac219c92585f5291fe933e480fc9

}


void addFirst(List *L, Student data) {


    //call createnode to populate styd
    //check if List is  empty
    List newNode = createNode(data);
    if((*L) != NULL){
    //List is not empty
    (*L)->next = newNode;

    }else{
        (*L) = newNode;
    }
    
    

}


void addLast(List *L, Student data) {

}


void insertSorted(List *L, Student data) {

}


int deleteStudent(List *L, int id) {

}


Node *searchStudent(List L, int id) {

}


void displayList(List L) {

}


int listSize(List L) {
    
}


void reverseList(List *L) {

}


// ============================================================
// STACK
// ============================================================

void initStack(Stack *S) {

}


int isStackEmpty(Stack S) {

}


void push(Stack *S, Student data) {

}


int pop(Stack *S, Student *data) {

}


int peek(Stack S, Student *data) {

}


void displayStack(Stack S) {

}


// ============================================================
// QUEUE
// ============================================================

void initQueue(Queue *Q) {

}


int isQueueEmpty(Queue Q) {

}


void enqueue(Queue *Q, Student data) {

}


int dequeue(Queue *Q, Student *data) {

}


void displayQueue(Queue Q) {

}


// ============================================================
// BST
// ============================================================

BST createTreeNode(Student data) {

}


void insertBST(BST *T, Student data) {

}


Node *searchBST(BST T, int id) {

}


void inorder(BST T) {

}


void preorder(BST T) {

}


void postorder(BST T) {

}


int treeHeight(BST T) {

}


int countNodes(BST T) {

}


BST findMin(BST T) {

}


BST findMax(BST T) {

}


int deleteBST(BST *T, int id) {

}


// ============================================================
// SORTING
// ============================================================

void bubbleSort(Student arr[], int size) {

}


void selectionSort(Student arr[], int size) {

}


void insertionSort(Student arr[], int size) {

}


void mergeSort(Student arr[], int left, int right) {

}


void quickSort(Student arr[], int low, int high) {

}


// ============================================================
// SEARCHING
// ============================================================

int linearSearch(Student arr[], int size, int id) {

}


int binarySearch(Student arr[], int size, int id) {

}


// ============================================================
// UTILITIES
// ============================================================

void swap(Student *a, Student *b) {

}


void printStudent(Student s) {

}


void freeList(List *L) {

}


void freeStack(Stack *S) {

}


void freeQueue(Queue *Q) {

}


void freeTree(BST *T) {

}