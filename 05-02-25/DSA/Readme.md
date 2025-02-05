# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: String Matching in an Array
**Problem Statement**:  
Given an array of strings `words`, return all strings that are **a substring of another word** in the array.  
You must return the answer in **any order**.

---

### Problem 2: Check if One String Swap Can Make Strings Equal
**Problem Statement**:  
Given two strings `s1` and `s2` of equal length, return `true` if we can make `s1` equal to `s2` by swapping **exactly one pair of characters** in `s1`.  
Otherwise, return `false`.

---

### Problem 3: Path Sum II
**Problem Statement**:  
Given the `root` of a binary tree and an integer `targetSum`, return **all root-to-leaf paths** where each path's sum equals `targetSum`.  
Each path must start at the **root** and end at a **leaf node**.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: String Matching in an Array
**Approach**:
- **Sort the array** so that smaller strings come first.
- Compare each string with every other string in the array.
- If a string `w[i]` is found inside another string `w[j]`, store it.
- **Break early** to avoid duplicates.

**Solution**:  
Implemented in C++ using:
- **Sorting** (`O(n log n)`)
- **Substring search** (`O(n²)` in worst case)

---

### Problem 2: Check if One String Swap Can Make Strings Equal
**Approach**:
- If `s1 == s2`, return `true` (already equal).
- Identify **exactly two** mismatching indices.
- Check if swapping these two indices makes `s1` equal to `s2`.

**Solution**:  
Implemented in C++ using:
- **Single pass comparison** (`O(n)`)
- **Index tracking for mismatches** (`O(1) space`)

---

### Problem 3: Path Sum II
**Approach**:
- Use **DFS (Depth-First Search)** to explore all root-to-leaf paths.
- Maintain a **running sum** and a **temporary path list**.
- If a path sum matches `targetSum`, store it.

**Solution**:  
Implemented in C++ using:
- **Recursive DFS traversal** (`O(n)`)
- **Backtracking to remove extra values**

---