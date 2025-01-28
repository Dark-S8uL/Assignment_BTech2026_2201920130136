# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Neighboring Bitwise XOR
**Problem Statement**:  
You are given an array `d`. Determine if there exists a valid array `a` such that the XOR of every two adjacent elements in `a` equals the corresponding element in `d`.

---

### Problem 2: 3Sum Closest
**Problem Statement**:  
Given an integer array `nums` and an integer `target`, find three integers in `nums` such that the sum is closest to `target`. Return the sum of the three integers.

---

### Problem 3: Best Time to Buy and Sell Stock III
**Problem Statement**:  
You are given an array `prices` where `prices[i]` is the price of a stock on the i-th day. Find the maximum profit you can achieve with at most two transactions. Note that you cannot engage in multiple transactions simultaneously (i.e., sell before buying again).

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Neighboring Bitwise XOR
**Approach**:
- Compute the XOR of all elements in the array `d`.
- If the XOR of the entire array is 0, then a valid array `a` exists; otherwise, it does not.
- This is because the XOR operation's properties allow us to validate the entire sequence in constant space.

**Solution**:  
Implemented in C++ using a single loop to compute the XOR of the array and a simple condition to check for validity.

---

### Problem 2: 3Sum Closest
**Approach**:
- Sort the input array `nums`.
- Use a three-pointer approach:  
  1. Fix one element (`i`) as the first element of the triplet.  
  2. Use two pointers (`l` and `r`) to find the other two elements.  
  3. Calculate the sum of the triplet and compare its difference from the target.  
- Update the closest sum if a smaller difference is found.
- Stop the iteration early if an exact match for the target is found.

**Solution**:  
Implemented in C++ using sorting and a two-pointer technique for efficient sum calculation.

---

### Problem 3: Best Time to Buy and Sell Stock III
**Approach**:
- Use dynamic programming to track the maximum profit achievable at each step.
- Define a recursive function `solve` with parameters:  
  1. Current index (`i`).  
  2. Whether you can buy or sell (`f`).  
  3. Remaining transactions (`cnt`).  
- Transition between states:  
  - If buying, subtract the current price and move to the next state.  
  - If selling, add the current price and decrement the transaction count.  
- Use memoization to store intermediate results for optimal performance.

**Solution**:  
Implemented in C++ using a recursive DP approach with a 3D memoization table to track states.

---
