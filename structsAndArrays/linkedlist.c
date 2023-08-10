#include <stdlib.h>
#include <stdio.h>

struct node {
    int value; 
    //points to the next node in the list
    struct node* next;
};
//node_t = struct node  now for less typing 
typedef struct node node_t; 

void printlist(node_t *head) {
    //temporary pointer
    node_t *temporary = head; 

    //if the end isn't hit 
    while(temporary != NULL){
        //print node that the temp value is hitting
        printf("%d - ", temporary->value);
        //point to the next thing in the list
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value; 
    result->next = NULL; 
    return result; 
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
    node_to_insert->next = *head;
    *head = node_to_insert; 
    return node_to_insert; 
}

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while (tmp != NULL){
        if (tmp->value == value) return tmp;
        tmp = tmp->next;
    }
    return NULL; 
}

void insert_after_node(node_t *node_to_insert_after, node_t* newnode){
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode; 

}

int main(){
    node_t *head = NULL;
    node_t *tmp;

    for(int i =0; i < 25; i++){
        tmp = create_new_node(i);
         insert_at_head(&head, tmp); 
    }

    tmp = find_node(head, 13);
    printf("found node with value %d\n", tmp->value);

    insert_after_node(tmp, create_new_node(399));

    printlist(head); 

    return 0;
    
}