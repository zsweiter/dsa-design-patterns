# Data Structures & Design Patterns Repository

This repository contains **implementations of fundamental Data Structures and Design Patterns** in multiple programming languages.  
The goal is to provide **hands-on examples** to understand how these concepts work at a low level and how they are used in real-world applications.

---

## Supported Languages

All implementations are written at a low level first, then use language abstractions for convenience (e.g., `push` in JS/TS).  

Languages included:

- Python  
- C  
- C++  
- Rust  
- Go  
- PHP  
- TypeScript  
- JavaScript  
- Java  
- C#  
- Kotlin  
- Swift  
- Ruby  

Each implementation is in its **own file**, named after the structure or pattern (e.g., `stack.c`, `singleton.ts`).

---

## Table of Contents

### 1. Data Structures

| Structure | Description | Time Complexity | Example Use Cases |
|-----------|------------|----------------|-----------------|
| Stack | LIFO (Last In First Out) collection of elements | Push: O(1), Pop: O(1), Peek: O(1) | Undo history, function call stack |
| Queue | FIFO (First In First Out) collection of elements | Enqueue: O(1), Dequeue: O(1) | Task scheduling, printer queue |
| Linked List | Sequence of nodes with pointers | Insert/Delete: O(1) at head, O(n) at middle | Dynamic memory management, adjacency lists |
| Doubly Linked List | Nodes with next and previous pointers | Insert/Delete: O(1) at head/tail | Browser history, deque |
| Hash Table | Key-value store with hashing | Average: O(1), Worst: O(n) | Caching, fast lookup |
| Binary Tree | Tree with max two children per node | Search: O(log n) average, O(n) worst | Hierarchical data, search trees |
| Binary Search Tree | Sorted binary tree | Insert/Search/Delete: O(log n) avg, O(n) worst | Sorted collections, databases |
| Heap | Complete binary tree (min/max) | Insert: O(log n), Extract: O(log n) | Priority queues |
| Graph | Nodes with edges | Depends on representation | Networking, pathfinding |
| ... | Other structures | ... | ... |

> Each structure has **low-level implementation** and **high-level API** for demonstration.

---

### 2. Design Patterns

| Pattern | Description | Type | Example Use Cases |
|---------|------------|------|-----------------|
| Singleton | Ensures a class has only one instance | Creational | Configuration, logging |
| Factory | Creates objects without specifying exact class | Creational | Object creation with varying types |
| Observer | Notify dependent objects when state changes | Behavioral | Event handling, GUI updates |
| Strategy | Encapsulate algorithms interchangeably | Behavioral | Sorting, payment methods |
| Decorator | Dynamically add behavior to objects | Structural | Enhancing objects, UI components |
| Adapter | Convert interface to match another | Structural | API integration, legacy code |
| Command | Encapsulate requests as objects | Behavioral | Undo/redo, task queues |
| Builder | Construct complex objects step by step | Creational | Configurable objects, document creation |
| Proxy | Control access to another object | Structural | Caching, access control |
| ... | Other patterns | ... | ... |

---

## Examples

### Stack (TypeScript)
```ts
const stack = new Stack<number>();
stack.push(1);
stack.push(2);
stack.push(3);

console.log(stack.peek()); // 3
stack.pop();
console.log(stack.size); // 2
````

### Singleton (Java)

```java
public class Logger {
    private static Logger instance;
    private Logger() {}
    public static Logger getInstance() {
        if (instance == null) instance = new Logger();
        return instance;
    }
}
```

---

## Notes

* Each data structure and pattern is implemented **from scratch**, then optionally uses the language's built-in abstractions.
* Complexity analysis is included where relevant.
* Use cases provide insight into **real-world applications**.
* The repository is ideal for learning, practicing, and comparing **different programming languages**.

---

## Contributing

1. Pick a structure or pattern not yet implemented in a language.
2. Implement it following **low-level principles** first.
3. Add **documentation**, complexity, and examples.
4. Submit a PR.

---

## License

This project is open-source. Use freely for **educational purposes.

