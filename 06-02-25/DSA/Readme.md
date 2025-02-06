# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Tuple with Same Product
**Problem Statement**:  
Given an array of integers `nums`, return the number of tuples `(a, b, c, d)` such that:
- `a * b = c * d`
- `(a, b, c, d)` are distinct elements in the array.
- Each tuple is counted **8 times** because there are different orderings.

---

### Problem 2: Construct Binary Tree from Inorder and Postorder Traversal
**Problem Statement**:  
Given two integer arrays `inorder` and `postorder`, representing the **inorder** and **postorder** traversal of a binary tree, construct and return the **binary tree**.

---

### Problem 3: Construct Binary Tree from Preorder and Inorder Traversal
**Problem Statement**:  
Given two integer arrays `preorder` and `inorder`, representing the **preorder** and **inorder** traversal of a binary tree, construct and return the **binary tree**.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Tuple with Same Product
**Approach**:
- Use a **hashmap** to store product counts of all pairs `(nums[i] * nums[j])`.
- If a product has appeared before, it can form tuples, so add `8 * count(product)` to the answer.
- Update the hashmap after counting.

**Solution**:  
Implemented in C++ using:
- **Nested loop to check all pairs** (`O(n²)`)
- **Hashmap to count occurrences** (`O(n²) space`)

---

### Problem 2: Construct Binary Tree from Inorder and Postorder Traversal
**Approach**:
- The **last element** in `postorder` is always the **root**.
- Locate this root in `inorder`, which splits the tree into **left** and **right subtrees**.
- Recursively **build the right subtree first**, then the left.
- Use a **hashmap for fast index lookup**.

**Solution**:  
Implemented in C++ using:
- **Recursive tree construction** (`O(n)`)
- **Hashmap for quick index lookup** (`O(n) space`)

---

### Problem 3: Construct Binary Tree from Preorder and Inorder Traversal
**Approach**:
- The **first element** in `preorder` is always the **root**.
- Locate this root in `inorder`, which splits the tree into **left** and **right subtrees**.
- Recursively **build the left subtree first**, then the right.
- Use a **hashmap for fast index lookup**.

**Solution**:  
Implemented in C++ using:
- **Recursive tree construction** (`O(n)`)
- **Hashmap for quick index lookup** (`O(n) space`)

---