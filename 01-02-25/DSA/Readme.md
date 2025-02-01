# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Reverse Linked List II
**Problem Statement**:  
Given the head of a singly linked list and two integers `left` and `right`, reverse the nodes of the list from position `left` to `right`, and return the modified list.

---

### Problem 2: Special Array I
**Problem Statement**:  
An array is called **special** if no two adjacent elements have the same parity (i.e., even and odd numbers alternate). Given an integer array `nums`, determine if it is special.

---

### Problem 3: Word Subsets
**Problem Statement**:  
You are given two string arrays, `words1` and `words2`. A string `word1` from `words1` is **universal** if for every string `word2` in `words2`, all characters of `word2` (including their frequencies) are also in `word1`. Return a list of all universal strings from `words1`.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Reverse Linked List II
**Approach**:
- Use a **dummy node** to handle cases where `left = 1` (i.e., the head itself is reversed).
- Traverse to the `left` position while keeping track of the previous node.
- Reverse the sublist between `left` and `right` using **pointer manipulation**.
- Reconnect the reversed part with the remaining list.

**Solution**:  
Implemented in C++ using **iterative pointer manipulation**.

---

### Problem 2: Special Array I
**Approach**:
- Iterate through the array and check adjacent elements.
- If two adjacent numbers have the same parity (both even or both odd), return `false`.
- If no such pair is found, return `true`.

**Solution**:  
Implemented in C++ using a **single-pass iteration** with an **O(n) time complexity**.

---

### Problem 3: Word Subsets
**Approach**:
- Compute the **maximum frequency** of each character across all words in `words2`.
- For each word in `words1`, check if it contains at least the required frequency of each character.
- If a word in `words1` satisfies all constraints, include it in the result.

**Solution**:  
Implemented in C++ using:
- **Frequency counting** with **hash maps (arrays of size 26)**.
- **Two-pass traversal**: one for `words2` to find the maximum frequency, and another for `words1` to check constraints.

---

