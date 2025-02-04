# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Maximum Ascending Subarray Sum
**Problem Statement**:  
Given an integer array `nums`, find the maximum sum of any **ascending subarray** (a subarray where each element is strictly greater than the previous one).

---

### Problem 2: Binary Tree Level Order Traversal II
**Problem Statement**:  
Given the `root` of a binary tree, return its **bottom-up level order traversal**.  
In this traversal, nodes are visited **level by level from left to right**, but the result should be **reversed**, meaning the bottom-most level appears first.

---

### Problem 3: Count Prefix and Suffix Pairs I
**Problem Statement**:  
Given a list of strings `words`, count the number of pairs `(i, j)` where `i < j` and `words[i]` is both a **prefix and suffix** of `words[j]`.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Maximum Ascending Subarray Sum
**Approach**:
- Traverse the array while maintaining a running sum.
- If `nums[i] > nums[i-1]`, add `nums[i]` to the current sum.
- Otherwise, reset the sum to `nums[i]`.
- Track the maximum sum found.

**Solution**:  
Implemented in C++ using **O(n) time complexity** with a **single pass**.

---

### Problem 2: Binary Tree Level Order Traversal II
**Approach**:
- Perform a **level order traversal** using a queue.
- Store each level’s nodes in a vector.
- Reverse the final result to achieve **bottom-up order**.

**Solution**:  
Implemented in C++ using:
- **Queue-based BFS traversal** (`O(n) time complexity`).
- **Vector reversal** for the bottom-up effect.

---

### Problem 3: Count Prefix and Suffix Pairs I
**Approach**:
- Iterate over all possible pairs `(i, j)` where `i < j`.
- Check if `words[i]` is both a **prefix** and **suffix** of `words[j]`.
- Count and return the number of valid pairs.

**Solution**:  
Implemented in C++ using:
- **Brute-force checking of all pairs** (`O(n²) time complexity`).
- **String comparison** for prefix and suffix matching.

---
