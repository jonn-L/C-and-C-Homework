#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

//Declare structure
struct link_list{
    int elem;
    struct link_list *next;
};

//Function that prints list
void print_list(struct link_list *list);
//Funciton that inserts value to front
struct link_list* insert_front(struct link_list *list, int value);
//Funciton that inserts value to end
struct link_list* insert_end(struct link_list *list, int value);
//Funciton that deallocates memory
void free_list(struct link_list *list);
//Function that removes first value
struct link_list* remove_front(struct link_list *list);

#endif