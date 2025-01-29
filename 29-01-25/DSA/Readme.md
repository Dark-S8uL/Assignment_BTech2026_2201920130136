# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Combinations
**Problem Statement**:  
Given two integers `n` and `k`, return all possible combinations of `k` numbers chosen from the range `[1, n]`.

---

### Problem 2: Bitwise XOR of All Pairings
**Problem Statement**:  
Given two integer arrays `nums1` and `nums2`, return the bitwise XOR of all pairings between elements of `nums1` and `nums2`, where a pairing is defined as `nums1[i] XOR nums2[j]`.

---

### Problem 3: Minimize XOR
**Problem Statement**:  
Given two integers `num1` and `num2`, construct an integer `x` such that:
1. `x` has the same number of `1` bits in its binary representation as `num2`.
2. The value of `x XOR num1` is minimized.  
Return the integer `x`.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Combinations
**Approach**:
- Use backtracking to generate all possible subsets of size `k` from the range `[1, n]`.
- Start from `1` and recursively build subsets by including the current number and moving to the next.
- Once a subset of size `k` is formed, add it to the result.
- Backtrack by removing the last added number and continuing the process.

**Solution**:  
Implemented in C++ using recursion with backtracking to explore all valid combinations efficiently.

---

### Problem 2: Bitwise XOR of All Pairings
**Approach**:
- Compute the XOR of all elements in `nums1` (`xor1`) and all elements in `nums2` (`xor2`).
- The final result depends on the parity of the lengths of both arrays:
  1. If `nums2` has an odd length, the result includes `xor1`.
  2. If `nums1` has an odd length, the result includes `xor2`.
  3. If both lengths are even, the result is `0`.
- This works because every element in `nums1` gets XORed with every element in `nums2`.

**Solution**:  
Implemented in C++ using bitwise XOR properties for an optimized O(n) solution.

---

### Problem 3: Minimize XOR
**Approach**:
- Count the number of `1`s in `num2` (`cnt`).
- Construct `x` by:
  1. Setting the leftmost `cnt` `1`s from `num1` to `x`.
  2. If there are still bits left to be set, fill them from the right until `cnt` is satisfied.
- This ensures `x` has the same number of `1`s as `num2` while minimizing `x XOR num1`.

**Solution**:  
Implemented in C++ using bitwise operations to efficiently construct `x` while maintaining constraints.

---
