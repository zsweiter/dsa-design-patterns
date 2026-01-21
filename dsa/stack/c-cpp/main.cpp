#include <iostream>

#define STACK_SIZE 100

class Stack {
  public:
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
    int size();
    
    void lookup() {
      for (int i = 0; i < this->_size; i++) {
        std::cout << "The value is " << this->_items[i] << "\n"; 
      }
    };

    Stack() {
      this->_size = 0;
      this->_items[STACK_SIZE] = {};
    };

  private:
    int _size;
    int _items[STACK_SIZE];
};


void Stack::push(int data) {
  if (this->_size >= STACK_SIZE) {
    return;
  }

  this->_items[this->_size++] = data;
}

int Stack::pop() {
  if (this->isEmpty()) return 0;

  --this->_size;

  return this->_items[this->_size];
}

int Stack::peek() {
  if (this->isEmpty()) return 0;

  return this->_items[this->_size - 1];
}

bool Stack::isEmpty() {
  return this->_size == 0;
}

int Stack::size() {
  return this->_size;
}

int main() {
  Stack *stack = new Stack();

  std::cout << "The lenght of stack is " << stack->size() << "\n";

  stack->push(1);
  stack->push(2);
  stack->push(3);
  stack->push(4);

  std::cout << "The new length of stack is " << stack->size() << "\n";

  stack->lookup();;

  delete stack;
  return 0;
}
