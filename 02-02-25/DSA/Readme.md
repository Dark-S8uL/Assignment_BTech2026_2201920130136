# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Check if Array Is Sorted and Rotated
**Problem Statement**:  
Given an integer array `nums`, determine if it is **sorted** in **non-decreasing order** after a **single circular rotation**.

---

### Problem 2: Interleaving String
**Problem Statement**:  
Given three strings `s1`, `s2`, and `s3`, determine if `s3` is formed by **interleaving** `s1` and `s2`.  
Interleaving means that the characters of `s1` and `s2` appear in `s3` while maintaining their respective order.

---

### Problem 3: Counting Words With a Given Prefix
**Problem Statement**:  
Given a list of words `words` and a string `prefix`, count how many words in `words` start with `prefix`.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Check if Array Is Sorted and Rotated
**Approach**:
- Count the number of **descending order violations** in the array.
- If there is at most **one violation**, the array can be rotated to form a sorted sequence.
- Check the **last element and first element** to account for the circular rotation.

**Solution**:  
Implemented in C++ using **O(n) time complexity** and a **single pass** check.

---

### Problem 2: Interleaving String
**Approach**:
- Use **recursive dynamic programming** with **memoization**.
- Check if the first character of `s3` matches the next available character in either `s1` or `s2`, and recursively proceed.
- If either path successfully interleaves the strings, return `true`.

**Solution**:  
Implemented in C++ using:
- **Top-down recursion** with **memoization** (`O(n1 * n2)` time complexity).
- **2D DP table** to store results and avoid redundant calculations.

---

### Problem 3: Counting Words With a Given Prefix
**Approach**:
- Iterate through the list of words.
- Check if each word starts with the given prefix using **character-by-character comparison**.
- Count the valid words.

**Solution**:  
Implemented in C++ using a **linear scan** (`O(n * m)` time complexity, where `n` is the number of words and `m` is the prefix length).

---

