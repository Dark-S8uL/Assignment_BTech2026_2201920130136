# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Find the Number of Distinct Colors Among the Balls
**Problem Statement**:  
You have `l` balls, each identified by an index. Initially, all are uncolored. You receive a series of queries where:
- `q[i] = [b, c]` means painting ball `b` with color `c`.
- After each query, return the number of distinct colors among all the balls.

---

### Problem 2: Longest Consecutive Sequence
**Problem Statement**:  
Given an unsorted array `nums`, return the **length of the longest consecutive elements sequence**.  
The sequence must be **consecutive** (not necessarily contiguous in the array).

---

### Problem 3: Minimum Number of Operations to Move All Balls to Each Box
**Problem Statement**:  
Given a binary string `boxes`, where `boxes[i] = '1'` means a ball is present in the `i-th` box, return an array where `ans[i]` is the **minimum number of operations** to move all balls to the `i-th` box.  
Operations involve moving a ball from position `j` to `i`, costing `|j - i|` moves.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Find the Number of Distinct Colors Among the Balls
**Approach**:
- Use two **hashmaps**:
  - `colors[b]` stores the color of ball `b`.
  - `count[c]` stores how many balls are painted with color `c`.
- If a ball was previously colored, decrease its old color count.
- Update the ball with the new color and increase its count.
- The answer for each query is the **number of distinct colors**.

**Solution**:  
Implemented in C++ using:
- **Hashmaps for quick lookup and updates** (`O(n)`)
- **Efficient insertion and deletion** (`O(1) average case`)

---

### Problem 2: Longest Consecutive Sequence
**Approach**:
- Sort the array to bring consecutive numbers together.
- Traverse the sorted array:
  - If `nums[i] == nums[i-1] + 1`, extend the sequence.
  - If `nums[i]` is equal to `nums[i-1]`, continue (skip duplicate).
  - Otherwise, update the maximum length and reset.
- Return the longest found sequence length.

**Solution**:  
Implemented in C++ using:
- **Sorting (`O(n log n)`)**
- **Single pass through array (`O(n)`)**  

Optimized approach (not used here) could be achieved via **hash sets** in `O(n)` time.

---

### Problem 3: Minimum Number of Operations to Move All Balls to Each Box
**Approach**:
- Brute-force approach:
  - For each index `i`, iterate through the string.
  - Compute the sum of absolute differences where `boxes[j] == '1'`.
- This results in `O(n²)` time complexity.

**Solution**:  
Implemented in C++ using:
- **Nested loops** (`O(n²) brute force`).
- **Computing absolute differences for each `1` in the string**.

Optimized approach (not implemented here) could use **prefix sums** for `O(n)` efficiency.

---