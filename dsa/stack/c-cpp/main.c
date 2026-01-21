#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

typedef struct stack {
  int items[STACK_SIZE];
  int size;
} Stack;

void stack_push(Stack *stack, int data);
int stack_pop(Stack *stack);
int stack_peek(Stack *stack);
int stack_size(Stack *stack);
bool stack_is_empty(Stack *stack);

int main() {
  Stack *stack = malloc(sizeof(Stack));
  stack->size = 0;

  stack_push(stack, 1);
  stack_push(stack, 2);
  stack_push(stack, 3);

  printf("length of stack %d\n", stack_size(stack));

  for (int i = 0; i < stack_size(stack); i++) {
    printf("value: %d\n", stack->items[i]);
  }
  
  int top = stack_pop(stack);
  printf("The last element is %d and last size is %d\n", top, stack_size(stack));
  
  int peek = stack_peek(stack);
  printf("The peek element is %d and last size is %d\n", peek, stack_size(stack));

  free(stack);
  return 0;
}


void stack_push(Stack *stack, int data) {
  if (stack->size >= STACK_SIZE) {
     return;    
  }
  
  stack->items[stack->size++] = data;
}

int stack_pop(Stack *stack) {
  if (stack_is_empty(stack)) {
    return 0;
  }

  --stack->size;
  return stack->items[stack->size];
}

int stack_peek(Stack *stack) {
  if (stack_is_empty(stack)) {
    return 0;
  }  

  return stack->items[stack->size];
}

int stack_size(Stack *stack) {
  return stack->size;
}

bool stack_is_empty(Stack *stack) {
  return stack->size == 0;
}

