/*
CH-230-A
a8 p1.c
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
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}