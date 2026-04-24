#include <stdio.h>
#include <stdlib.h>

// Declaration of the cell.
struct cell {
    int value;
    struct cell*next;
};

// Prevent us from writing stuct cell each time we want to call the cell rather enables us to write cell.
typedef struct cell cell;

// Defining od the list.
typedef struct cell *list;

//creation of the list.
list created_list(){
    return NULL;
}

int main (){
    // Calling my created list.
    created_list();
}

// insert element at the begining of the list.
list insert_top(list l,int val){
    // Creation of the cell to insert.
    list new;
    new = malloc(sizeof(cell)); // Memory allocation of the cell.
    new->value = val;
    new->next = l;
    l = new;
    return l;
}

// Insert element at the bottom.
list insert_bottom(list l, int val){

    // Creation of the cell to insert.
    list new;
    new = malloc(sizeof(cell));  // Memory allocation of the cell.
    new->value = val;

    if(l == NULL)
        return insert_top(l, val);
        list tmp = l;  // creation of the temporal list in other not to destroy the original one.

        // tranversion of the list still the last element.
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = new;
    tmp = l;
    return l;
}

// Insertion at a particular position.
list insert_pos(list l,int val,int pos){
    list new;
    new = mallloc(sizeof(cell));
    new->value = val;

    //test.
    if(pos == 1 || l == NULL)
        return insert_top(l,val);

    list before;
    list tmp;
    int counter = 1;
    while(counter != 3){
        before->next == tmp;
        tmp = tmp->next;
        counter++;
    }
    before->next = new;
    new->next = tmp;
}

// Display function.
void display(list l){
    if (l == NULL){
        printf("The list is empty");
        return;
    }
    while (l != NULL){
        printf("%d, ",l->value);
        l = l->next;
    }
    
}
