#include <stdio.h>
#include <stdlib.h>

struct slinklist {

    int data;
    struct slinklist* next;

};

typedef struct slinklist node;

node *start = NULL;

node *getnode() {
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\n Enter data : ");
    scanf(" %d", &newnode -> data);
    newnode -> next = NULL;
    return newnode;
}

void createlist(int n){

    int i;
    node *newnode;
    node *temp;

    for(i=0; i < n; i++){
        newnode = getnode();
        if(start == NULL){

            start = newnode;

        }else{
            temp = start;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
}

void travers_node(){
    node* temp;
    temp = start;
    printf("[");
    while(temp -> next != NULL){
        printf("%d, ", temp -> data);
        temp = temp -> next;
    }
        printf("%d", temp -> data);
        printf("]\n");
}

void insert_end(int n){
    
    for(int i = 0; i < n ; i++ ){
        printf("insert at the end");
        node *newnode;
        node *temp;
        newnode = getnode();

        if (start == NULL){
            start = newnode;
        }else{
            temp = start;

            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newnode;
        }
    }
}

//this function to insert elements to the beginning of the linkedlist
void insert_beg(int n){
    
    for(int i = 0; i < n; i++ ){
        printf("insert at the beginning");
        node *newnode;

        newnode = getnode();

        if (start == NULL){
            start = newnode;
        }else{

            newnode -> next = start;
            start = newnode;

        }
    }
}
// this function to count nodes in a linked list that start with the node st
int countnode(node* st){

    if(st ==NULL){
        return 0;
    }else{
        return (1 + countnode(st -> next));
    }
}

//function to insert an elements to middle of the linkedlist
void insert_mid(){
    printf("\n let us insert an element at the middle of you linkedlist;");

    node *newnode, *prev, *temp;
    int nodecount, pos, ctr =1;

    printf("\nenter the position you want to put the element at : ");
    scanf("%d", &pos);

    nodecount = countnode(start);

    newnode = getnode();

    if(pos > 1 && pos < nodecount){
        temp = prev = start;
        while(ctr < pos){
            prev = temp;
            temp = temp ->next;
            ctr++;
        }
        prev -> next = newnode;
        newnode -> next = temp; 
    }else{
        printf("\nthe position you enterd in is not at the middle:");
    }
}

void del_end(){

    node *temp;
    
}

int main(int argc, char *argv[]){

    int n;
    createlist(5);
    
    travers_node();

    insert_end(1);

    insert_beg(2);

    travers_node();

    insert_mid();

    travers_node();
    
    printf("the number of nodes in your list is : %d", countnode(start));

    return 0;
}
