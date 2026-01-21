# Stack Data Structure

A **Stack** is a fundamental data structure in computer science that follows the  
**LIFO principle (Last In, First Out)**.

This means that the last element added to the stack is the first one to be removed.  
Stacks are widely used in software development to manage execution flow, memory, and user actions.

---

## Core Operations

A stack typically supports the following operations:

- **Push**: Insert an element at the top of the stack
- **Pop**: Remove the element from the top of the stack
- **Peek / Top**: Retrieve the top element without removing it
- **IsEmpty**: Check whether the stack is empty

---

## Computational Complexity

| Operation | Time Complexity |
|---------|-----------------|
| Push    | O(1)            |
| Pop     | O(1)            |
| Peek   | O(1)            |
| Search | O(n)            |

All primary stack operations run in **constant time O(1)** because they only interact with the top element.

---

## Memory Characteristics

- Can be implemented using:
  - Arrays (static or dynamic)
  - Linked lists
- Memory usage is efficient since all operations occur at one end
- Stack overflow can occur if the stack exceeds its allocated memory

---

## Implementation Approach

Each language includes **two implementations** of the stack:

### 1. Low-Level Implementation
The stack is implemented manually by managing memory and indices directly.

Examples:
- Manual array index management
- Explicit memory allocation (when applicable)
- No use of built-in stack or list abstractions

This approach helps understand:
- How stacks work internally
- Memory layout and boundaries
- Performance implications

---

### 2. Language-Abstraction Implementation
The stack is implemented using **native language abstractions**.

Examples:
- Using `push()` / `pop()` in JavaScript
- Using `List`, `ArrayList`, or equivalent collections
- Using standard library containers where available

This approach focuses on:
- Readability and maintainability
- Idiomatic language usage
- Real-world development practices

---

## Common Use Cases

Stacks are commonly used for:

- Function call management (**call stack**)
- Undo / Redo functionality
- Expression evaluation (prefix, postfix)
- Syntax parsing and validation
- Depth-First Search (DFS)
- Backtracking algorithms

---

## Real-World Analogy

A stack of plates:

- Plates are added to the top
- Only the top plate can be removed
- The last plate placed is the first to be taken

---

## Example Scenario

A stack can be used to store user actions in a text editor.  
Each action is pushed onto the stack, and pressing **Undo** pops the most recent action.

---

## Supported Languages

This project includes stack implementations in the following programming languages:

- **C**
- **C++**
- **C#**
- **Go**
- **Java**
- **JavaScript / TypeScript**
- **PHP**
- **Python**
- **Rust**
- **Kotlin**
- **Swift**
- **Ruby**

Each implementation follows the same conceptual behavior while respecting the idioms and best practices of each language.

---

## Summary

- Follows the **LIFO** principle
- Constant-time core operations
- Implemented at both **low-level** and **high-level abstraction**
- Designed for learning and comparison across languages

