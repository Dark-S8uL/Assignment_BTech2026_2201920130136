# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Longest Strictly Increasing or Strictly Decreasing Subarray
**Problem Statement**:  
Given an integer array `nums`, find the length of the **longest subarray** that is either **strictly increasing** or **strictly decreasing**.

---

### Problem 2: Binary Tree Zigzag Level Order Traversal
**Problem Statement**:  
Given the `root` of a binary tree, return its **zigzag level order traversal**.  
This means that the nodes of each level should be traversed from left to right, but the order should **alternate** at each level.

---

### Problem 3: Binary Tree Level Order Traversal
**Problem Statement**:  
Given the `root` of a binary tree, return its **level order traversal**.  
In a level order traversal, nodes are visited **level by level from left to right**.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Longest Strictly Increasing or Strictly Decreasing Subarray
**Approach**:
- Maintain two counters: `inc` for an increasing sequence and `dec` for a decreasing sequence.
- Traverse the array and update `inc` when `nums[i] > nums[i-1]` and `dec` when `nums[i] < nums[i-1]`.
- If `nums[i] == nums[i-1]`, reset both counters.
- Track the maximum length found.

**Solution**:  
Implemented in C++ using **O(n) time complexity** and a **single pass**.

---

### Problem 2: Binary Tree Zigzag Level Order Traversal
**Approach**:
- Perform a **level order traversal** using a queue.
- Store each level’s nodes in a temporary vector.
- Reverse the order of nodes **at every alternate level** to achieve the zigzag pattern.

**Solution**:  
Implemented in C++ using:
- **Queue-based BFS traversal** (`O(n) time complexity`).
- **Vector reversal** for alternating levels.

---

### Problem 3: Binary Tree Level Order Traversal
**Approach**:
- Perform a **BFS traversal** using a queue.
- Process nodes level by level and store them in a result vector.

**Solution**:  
Implemented in C++ using:
- **Queue-based BFS traversal** (`O(n) time complexity`).
- **Vector storage** for level-wise results.

---
