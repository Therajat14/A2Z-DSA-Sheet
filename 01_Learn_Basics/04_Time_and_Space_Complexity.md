
# 🧠 Time and Space Complexity – Simplified Notes

## 📌 What is Time and Space Complexity?

These are ways to **measure the efficiency of algorithms**. Even if the term sounds complicated, the idea is simple.

---

## ⏱️ Time Complexity

**Time Complexity** tells us **how much time an algorithm takes** to complete, based on the input size.

### 🔍 Real-life Analogy:
If you bake a cake, it might take 1 hour. If you bake 100 cakes, it’ll take more time. The time depends on the amount of work (input).

### 🖥️ In Programming:
Similarly, when a computer runs a program, we want to know how the execution time grows with the input.

### ✅ Common Time Complexities:
| Notation | Name             | Example Scenario                            |
|----------|------------------|---------------------------------------------|
| O(1)     | Constant Time     | Accessing an element in an array by index  |
| O(log n) | Logarithmic Time  | Binary Search                               |
| O(n)     | Linear Time       | Looping through an array                    |
| O(n²)    | Quadratic Time    | Nested loops                                |

### 🧪 Example:

```js
// O(n): Time increases linearly with input size
function printItems(arr) {
  for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
  }
}
```

---

## 📦 Space Complexity

**Space Complexity** measures **how much memory an algorithm uses** as the input grows.

### 🧠 Why it matters:
Even if your code is fast, if it uses a lot of memory, it might crash or slow down other programs.

### 🔍 Real-life Analogy:
Writing a to-do list on a sticky note (less space) vs. writing a report in a notebook (more space).

### ✅ Common Space Complexities:
| Notation | Meaning                     | Example Scenario                      |
|----------|-----------------------------|---------------------------------------|
| O(1)     | Constant Space               | Using a few variables                 |
| O(n)     | Linear Space                 | Creating a new array for processing   |

### 🧪 Example:

```js
// O(1) Space: Just using counters, no new data structures
function sumArray(arr) {
  let total = 0;
  for (let i = 0; i < arr.length; i++) {
    total += arr[i];
  }
  return total;
}
```

---

## 🤖 From Code to Complexity

Let’s learn how to *analyze the code* and figure out its time and space complexity.

### Example 1:

```js
function printPairs(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      console.log(arr[i], arr[j]);
    }
  }
}
```

- Time Complexity: **O(n²)** → Nested loop = Quadratic time
- Space Complexity: **O(1)** → Only using loop variables

### Example 2:

```js
function doubleArray(arr) {
  let result = [];
  for (let i = 0; i < arr.length; i++) {
    result.push(arr[i] * 2);
  }
  return result;
}
```

- Time Complexity: **O(n)**
- Space Complexity: **O(n)** → New array created

---

## 💡 Key Takeaways

- **Big O Notation** tells how fast or space-hungry your algorithm is.
- **Think of input size** (n) and how your code behaves as `n` grows.
- **Nested loops = danger zone** for time complexity.
- **New data structures = more space used**.

---

## 🧩 Bonus Tips

- Optimize loops and avoid unnecessary data copying.
- Practice by guessing complexity from real code.
- Remember: Simple, readable code > overly optimized code (unless needed).
