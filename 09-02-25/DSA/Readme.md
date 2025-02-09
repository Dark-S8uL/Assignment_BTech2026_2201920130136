# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Count Number of Bad Pairs
**Problem Statement**:  
Given an array `nums`, a pair `(i, j)` is considered **bad** if:
- `i < j`
- `j - i ≠ nums[j] - nums[i]`

Find the **total number of bad pairs** in `nums`.

---

### Problem 2: Unique Length-3 Palindromic Subsequences
**Problem Statement**:  
Given a string `s`, find the number of **unique** palindromic subsequences of length 3.  
A **palindromic subsequence** is a **non-contiguous** subsequence of `s` that reads the same forwards and backwards.

---

### Problem 3: Number of Ways to Split Array
**Problem Statement**:  
Given an array `nums`, find the number of **valid splits** such that:
- The sum of the left subarray is **greater than or equal to** the sum of the right subarray.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Count Number of Bad Pairs
**Approach**:
- Transform the condition `j - i ≠ nums[j] - nums[i]` into:
- nums[j] - j ≠ nums[i] - i
- Use a **hash map** to count occurrences of `nums[i] - i`.
- Count **good pairs** (`(nums[i] - i)` values that have appeared before).
- Subtract **good pairs** from **total pairs** to get **bad pairs**.

**Solution**:  
Implemented in C++ using:
- **Hash map for frequency counting** (`O(n)`)
- **Mathematical formula for total pairs** (`O(1)`)

---

### Problem 2: Unique Length-3 Palindromic Subsequences
**Approach**:
- Use a **hash map** to store the **first and last occurrence** of each character.
- For each character appearing at least **twice**, count **unique characters** in between.
- Use a **boolean array** to track distinct characters.

**Solution**:  
Implemented in C++ using:
- **Hash map for index tracking** (`O(n)`)
- **Boolean array for character uniqueness** (`O(1)` per check)

---

### Problem 3: Number of Ways to Split Array
**Approach**:
- Compute the **total sum** of the array.
- Maintain a **prefix sum** while iterating.
- Check if `prefix sum ≥ remaining sum` for each split point.

**Solution**:  
Implemented in C++ using:
- **Prefix sum computation** (`O(n)`)
- **Single pass traversal for split validation** (`O(n)`)

---
