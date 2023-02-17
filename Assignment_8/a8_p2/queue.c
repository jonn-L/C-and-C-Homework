/*
CH-230-A
a8 p2.c
Jon Lumi
jlumi@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    //Check if queue is full
    if (queue_is_full(pq)){
        return -1;
    }
    //Ceate new_node and allocate memory
    Node *new_node;
    new_node = (Node*) malloc(sizeof(Node));
    if (new_node == NULL){
        return -1;
    }
    //Set new_node's item value to value and it's next to NULL
    new_node -> item = item;
    new_node -> next = NULL;
    //Check if queue is empty
	if (queue_is_empty(pq)){
        //If so, set pq's front to new_node
        pq -> front = new_node;
    }
    //Check if pq's rear is NULL
    if (pq -> rear != NULL){
        //If not, set pq's rear's next to new_node
        pq -> rear -> next = new_node;
    }
    //Set pq's rear to new_node and add one to pq's item
    pq -> rear = new_node;
    pq -> items = pq -> items + 1;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //Check whether queue is empty 
	if (queue_is_empty(pq)){
        return -1;
    }
    //Create node that is equal to front and allocate memory for it
    Node *waiting_var = pq -> front;
    waiting_var = (Node*) malloc(sizeof(Node));
    if (waiting_var == NULL){
        return -1;
    }
    //Give pitem the value of the first element in queue
    *pitem = pq -> front -> item;
    //Set pq's front to next element in queue
    pq -> front = pq -> front -> next;
    //Check whether the last item was removed
    if (waiting_var -> item == *pitem){
        pq -> front = NULL;
        pq -> rear = NULL;
    }
    //Free the memory for the dequeued element
    free(waiting_var);
    //Decrement the number of items 
    pq -> items = pq -> items - 1;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}