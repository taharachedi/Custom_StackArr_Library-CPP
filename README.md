# 📌 Stack Implementation (clsMyStackArr) ⚡

> **A C++ template-based stack implementation using a dynamic array (`clsDynamicArray`), supporting fundamental stack operations along with extended functionalities. 🚀**

---

## 🌟 Project Overview

The `clsMyStackArr` class provides a **generic stack** implementation in C++, leveraging the `clsMyQueueArr` class for efficient memory management and stack operations. It supports essential operations like **push**, **pop**, **peek top & bottom**, and additional functionalities for dynamic stack modifications.

### 🔹 Core Functionalities:
- **Push & Pop Operations** 🚀
- **Access Top & Bottom Elements** 🔍
- **Check Stack Size & Emptiness** 📏
- **Reverse Stack Elements** 🔄
- **Modify & Insert Elements Within Stack** ✏️
- **Clear the Stack in One Call** ✨

This stack implementation is **generic**, meaning it can store any data type using C++ templates.

---

## ✨ Features

### 🔹 Basic Stack Operations
- **`Push(Value)`**: Adds an element to the top of the stack.
- **`Pop()`**: Removes the top element from the stack.
- **`Top()`**: Retrieves the top element of the stack.
- **`Bottom()`**: Retrieves the last element of the stack.
- **`Size()`**: Returns the number of elements in the stack.
- **`IsEmpty()`**: Checks if the stack is empty.
- **`Print()`**: Displays the stack elements.

### 🔹 Extended Functionalities
- **`GetItem(Index)`**: Retrieves the value at a specific index.
- **`Reverse()`**: Reverses the order of stack elements.
- **`UpdateItem(Index, NewValue)`**: Updates the value at a given index.
- **`InsertAfter(Index, Value)`**: Inserts an element after a specified index.
- **`InsertAtFront(Value)`**: Inserts an element at the top of the stack.
- **`InsertAtBack(Value)`**: Inserts an element at the bottom of the stack.
- **`Clear()`**: Removes all elements from the stack.

---

## 🚀 How It Works

### 🔹 Push & Pop
- Elements are added using `Push(Value)` at the **top** of the stack.
- Elements are removed using `Pop()` from the **top**.

### 🔹 Accessing Elements
- `Top()` and `Bottom()` allow **direct access** to the first and last elements.
- `GetItem(Index)` retrieves an element at a specific position.

### 🔹 Modifications & Reversal
- `UpdateItem(Index, NewValue)` modifies an existing value.
- `Reverse()` swaps element positions to **reverse** the stack order.
- `InsertAfter(Index, Value)`, `InsertAtFront(Value)`, and `InsertAtBack(Value)` allow **custom insertions**.

### 🔹 Memory Management
- The stack dynamically allocates memory for new elements.
- `Clear()` safely removes all elements to prevent memory leaks.

---

## 📚 Potential Enhancements

- 🏗 **Iterator Support**: Implementing iterators for STL-like traversal.
- ⏳ **Time Complexity Optimization**: Enhancing performance for large datasets.
- 🗃️ **Persistent Storage**: Implementing file handling for saving stack data.
- 🚀 **Thread Safety**: Making the stack thread-safe for concurrent operations.

---

## ⚙️ Technologies Used

- **Language**: C++
- **Templates**: Enables the stack to store any data type.
- **Dynamic Array-based Stack**: Uses `clsDynamicArray` for flexible data storage.
- **Memory Management**: Utilizes dynamic memory allocation.

---

## 🎯 Learning Outcomes

This project demonstrates:
- ✅ **Stack operations (push, pop, top, bottom, size, empty check)**
- ✅ **Generic programming with C++ templates**
- ✅ **Efficient memory management with dynamic arrays**
- ✅ **Advanced stack modifications (insertion, reversal, updating)**

---

## 📜 License

This project is **open-source**. Feel free to modify and enhance it! 🚀

---

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements, submit a Pull Request.

---

## 🏁 Ready to Explore?

### 🚀 How to Run
1. **Download** the repository.
2. **Include** `clsMyStackArr.h` in your project.
3. **Compile & Run** your C++ program with a standard compiler (e.g., `g++ main.cpp -o output`).
4. **Test** different stack operations.

