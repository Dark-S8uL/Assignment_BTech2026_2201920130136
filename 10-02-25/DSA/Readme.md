# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Clear Digits
**Problem Statement**:  
Given a string `s`, repeatedly **remove**:
- The **first occurring digit**.
- The **nearest previous letter** (if any) to that digit.

Return the modified string after applying this operation **until no digits remain**.

---

### Problem 2: Count Vowel Strings in Ranges
**Problem Statement**:  
Given a list of words and multiple range queries `[l, r]`, determine how many words in each range:
- **Start and end with a vowel** (`a, e, i, o, u`).

Return a list of results for each query.

---

### Problem 3: Maximum Score After Splitting a String
**Problem Statement**:  
Given a binary string `s`, split it into two **non-empty** substrings at some index `i` (1 ≤ i < length).  
The **score** of a split is defined as:
- **(Count of '0's in the left substring) + (Count of '1's in the right substring)**.  

Find the **maximum score** among all valid splits.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Clear Digits
**Approach**:
- Count the number of **digits** in the string.
- While there are digits:
  - Find the **first digit** in the string.
  - Find the **closest previous letter**.
  - **Erase both** from the string.
- Repeat until no digits remain.

**Solution**:  
Implemented in C++ using:
- **String traversal for digit detection** (`O(n)`)
- **Erasure operations** (`O(n^2)`, worst case)

---

### Problem 2: Count Vowel Strings in Ranges
**Approach**:
- Use a **prefix sum array** to store the number of words that:
  - **Start and end with vowels**.
- Answer each query in **O(1)** using the prefix sum.

**Solution**:  
Implemented in C++ using:
- **Set for vowel lookup** (`O(1)`)
- **Prefix sum technique** (`O(n)`)
- **Query resolution in constant time** (`O(1) per query`)

---

### Problem 3: Maximum Score After Splitting a String
**Approach**:
- Count the **total number of '1's**.
- Iterate over the string and:
  - Track **'0's in the left** and **'1's remaining in the right**.
  - Update the **maximum score** at each valid split.

**Solution**:  
Implemented in C++ using:
- **Single pass count computation** (`O(n)`)
- **Iterative score calculation** (`O(n)`)

---
