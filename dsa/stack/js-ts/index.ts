// First implementaion using built in languages abstrations
//

// 1 - Create stack array
const stack = [];

// 2 - Check stack size, isEmpty 
console.log(stack.length == 0)
console.log(stack.length)

// 3 - Push data using abstration provided for language
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)

// 4 - Get last item with pop method using built-in abstration
const lastItem = stack.pop()
console.log({ lastItem })

// 4 - Get first item (peak) with shoft method using built-in abstration
const peakItem = stack.shift();
console.log({ peakItem })

/**
 * Real world implementations
*/

// Low level implementaion, no thread safe, because js or ts runtime is event loop
class Stack {
  private _items: number[] = []

  private _size: number = 0;

  public push(data: number) {
    this._items[this._size++] = data;
  }

  public pop() {
    if (this.isEmpty()) {
      return undefined;
    }

    const item = this._items[--this._size]
    return item;
  }

  public peek() {
    if (this.isEmpty()) {
      return undefined;
    }

    const item = this._items[this._size -1];
    return item;
  }

  public isEmpty() {
    return this._size == 0;
  }

  // for prevent mutate size
  public get size() {
    return this._size;
  }

  // for testing
  public lookup() {
    for (let i = 0; i < this.size; i++) {
      console.log(this._items[i])
    }
  }
}

const lowStack = new Stack();

lowStack.push(1)
lowStack.push(2)
lowStack.push(3)

console.log({ size: lowStack.size })

lowStack.lookup();


