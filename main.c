#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node *llist;

llist createList() {
return NULL;
}
void printList(llist l){

    while(l->next != NULL){
        printf("%d ", l->data);
        l = l->next;
    } 
    printf("%d ", l->data);
    return;
    
}
llist addAtEnd(const llist l,int n){
    llist t = malloc(sizeof(struct node));
    t->data = n;
    t->next = NULL;

    if(l == NULL) {
        return t;
    } 
    
    llist temp = l;
    
     
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = t;

    return l;
}
llist removeAtFront(llist l){
    if(l != NULL){
        llist t = l;
        l = l->next;
        free(t);
    }
    return l;
}

int main() {

    llist l = createList();

    printList(l); printf("\n");

    l = addAtEnd(l,2);
    l = addAtEnd(l,4);
    l = addAtEnd(l,6);



    printList(l); printf("\n");


    
    llist t = createList();

    printList(t); printf("\n");

    t = addAtEnd(t,2);
    t = addAtEnd(t,4);
    t = addAtEnd(t,6);

    t = removeAtFront(t);


    printList(t); printf("\n");

    return 0;
}