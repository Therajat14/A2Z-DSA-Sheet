# 02 - Understanding Memory and Static vs Dynamic Memory

## 🧠 What Is Memory in Programming?

Memory is where your program stores data temporarily while it's running. This includes variables, arrays, functions, etc.

---

## 📦 Memory Layout in a Program

### 1. Stack (🗂️ Short-term, Fast)
- Used for:
  - Local variables
  - Function call info
- Automatically managed
- Limited in size
- Very fast

```cpp
void foo() {
    int x = 10;  // Stored in Stack
}
```

---

### 2. Heap (📦 Long-term, Flexible)
- Used for:
  - Dynamically allocated memory (`new`, `malloc`)
- Manually managed (must use `delete`, `free`)
- Larger, but slower
- Memory leak risk if not freed

```cpp
int* p = new int(5);  // Stored in Heap
delete p;
```

---

### 3. Data Segment
- Stores global and static variables

```cpp
int globalVar = 5; // Data Segment
```

---

### 4. Code Segment
- Stores actual compiled instructions (read-only)

---

## 🔁 Static vs Dynamic Memory Allocation

| Feature      | Static (Stack)       | Dynamic (Heap)        |
|--------------|----------------------|------------------------|
| When         | Compile time         | Runtime                |
| Where        | Stack                | Heap                   |
| Lifetime     | Auto (short-lived)   | Manual (you control)   |
| Speed        | Fast                 | Slower                 |
| Management   | Compiler             | Programmer             |

---

## 🎯 Analogy

- **Stack** = Scratchpad for quick notes
- **Heap** = File cabinet (needs manual handling)
- **Data** = Sticky notes you keep on the wall
- **Code** = Printed instructions (read-only)

---

## ✅ Summary

- **DSA** uses Stack a lot (function calls, recursion, etc.)
- **Dynamic allocation** is used when size is unknown at compile time
- Always `delete` dynamically allocated memory to avoid leaks
