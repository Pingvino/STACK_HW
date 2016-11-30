#ifndef ADT_STACK
#define ADT_STACK
#define true 1
#define false 0

#include <stdio.h>

typedef int bool;


//stack node
typedef struct node {
	void* data_ptr;
	struct node* link;
} STACK_NODE;


//stack adt
typedef struct {
	int count;
	STACK_NODE* top;
} STACK;

//interface
STACK* create_stack();
bool push(STACK* stack, void* in);
void* pop(STACK* stack);

void fill_space(int size);

#endif
