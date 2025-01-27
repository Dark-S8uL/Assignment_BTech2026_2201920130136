# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Search in Rotated Sorted Array II
**Problem Statement**:  
You are given an array `nums` that may contain duplicates and has been rotated at an unknown pivot. You need to determine if a given `target` is present in the array. The solution should account for duplicates and efficiently search for the target.

---

### Problem 2: Rotate List
**Problem Statement**:  
You are given the head of a linked list, and you need to rotate the list to the right by `k` places, where `k` is a non-negative integer. The rotation wraps around, so the last node connects to the head, and the new head becomes the (n-k)th node in the list.

---

### Problem 3: Edit Distance
**Problem Statement**:  
Given two strings `word1` and `word2`, your task is to find the minimum number of operations required to convert `word1` into `word2`. The allowed operations are:
- Insert a character
- Delete a character
- Replace a character

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Search in Rotated Sorted Array II
**Approach**:
- Use a modified binary search to account for the rotation and duplicates in the array.
- Check if the target lies in the sorted portion of the array (either left or right half).
- Handle cases where duplicates create ambiguity by skipping duplicate elements at both ends of the search range.

**Solution**:  
Implemented in C++ using a binary search algorithm with additional checks to handle duplicates and rotations.

---

### Problem 2: Rotate List
**Approach**:
- Calculate the length of the linked list to determine the effective number of rotations (`k % n`).
- Connect the last node to the head to create a circular linked list.
- Traverse the list to break the cycle at the new tail (n-k)th node, setting its next pointer to NULL.
- Return the new head of the rotated list.

**Solution**:  
Implemented in C++ using pointer manipulation and modular arithmetic to handle rotations efficiently.

---

### Problem 3: Edit Distance
**Approach**:
- Use a dynamic programming approach to calculate the minimum number of operations required to convert `word1` into `word2`.
- Define a recursive helper function `solve` that computes the minimum edit distance for substrings of `word1` and `word2`.
- Utilize memoization to store results of subproblems and avoid redundant calculations.
- For each position in the strings, consider the cost of insertion, deletion, and replacement, and take the minimum.

**Solution**:  
Implemented in C++ using recursion with memoization for efficient computation of edit distance.

---

### Stay Updated
Make sure to check back for additional problem solutions and improvements!
