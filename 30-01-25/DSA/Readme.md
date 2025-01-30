# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Remove Duplicates from Sorted List II
**Problem Statement**:  
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers. Return the linked list sorted as well.

---

### Problem 2: Find the Prefix Common Array of Two Arrays
**Problem Statement**:  
Given two integer arrays `A` and `B` of the same length, the prefix common array `C` is defined such that `C[i]` is the number of elements that appear in both the prefix `A[0...i]` and `B[0...i]`. Your task is to compute `C`.

---

### Problem 3: Minimum Length of String After Operations
**Problem Statement**:  
Given a string `s`, repeatedly remove the longest prefix and suffix that consist of the same character. The process stops when there is no such prefix-suffix pair left. Return the minimum length of the string after performing these operations.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Remove Duplicates from Sorted List II
**Approach**:
- Use a dummy node to handle edge cases easily.
- Maintain two pointers:  
  1. `prev` (points to the last non-duplicate node).
  2. `curr` (iterates through the list to detect duplicates).
- If `curr` encounters a sequence of duplicate values, skip them by linking `prev->next` to the next non-duplicate node.
- Continue the process until reaching the end of the list.

**Solution**:  
Implemented in C++ using two-pointer traversal for an efficient O(n) solution.

---

### Problem 2: Find the Prefix Common Array of Two Arrays
**Approach**:
- Maintain a frequency array `v` to track occurrences of numbers from `A` and `B`.
- Iterate through both arrays simultaneously.
- When a number appears in both `A` and `B` up to index `i`, increase the common count.
- Store the count in `C[i]` to form the prefix common array.

**Solution**:  
Implemented in C++ using a hash table for O(n) time complexity.

---

### Problem 3: Minimum Length of String After Operations
**Approach**:
- Count the occurrences of each character in the string.
- If a character appears fewer than 3 times, include all its occurrences in the final length.
- If a character appears 3 or more times:
  - If its count is even, only 2 occurrences contribute to the final length.
  - If its count is odd, 1 occurrence contributes to the final length.
- Sum up all the remaining counts to get the minimum possible length.

**Solution**:  
Implemented in C++ using a hash map for character frequency tracking.

---

