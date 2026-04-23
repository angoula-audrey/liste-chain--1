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
