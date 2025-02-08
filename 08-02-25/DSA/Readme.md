# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Design a Number Container System
**Problem Statement**:  
You need to design a **number container system** that supports two operations:
1. **`change(index, number)`** - Store the `number` at `index`, replacing any existing value.
2. **`find(number)`** - Return the **smallest index** at which `number` is stored, or `-1` if not found.

---

### Problem 2: Substring Matching Pattern
**Problem Statement**:  
Given a string `s` and a pattern `p`, where `p` contains **one wildcard `'*'`**, determine if `s` contains a **substring** that matches `p` by:
- Matching the prefix before `'*'` exactly.
- Matching the suffix after `'*'` exactly.
- The `'*'` in `p` represents any sequence (including an empty sequence).

---

### Problem 3: Shifting Letters II
**Problem Statement**:  
Given a string `s` and an array of shift operations `shifts`, apply the following shifts:
- `shifts[i] = [start, end, direction]`
  - `direction = 1` shifts **right** (increase character).
  - `direction = 0` shifts **left** (decrease character).
- Apply all shifts and return the final string.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Design a Number Container System
**Approach**:
- Maintain two **hash maps**:
  - `mp[idx] = num` stores the number assigned to each index.
  - `pq[num]` stores a **min-heap** (priority queue) of indices where `num` is present.
- **Change Operation**:
  - If `idx` already has `num`, do nothing.
  - Otherwise, update `mp[idx]` and push `idx` to `pq[num]`.
- **Find Operation**:
  - Retrieve the **smallest index** of `num` from the priority queue.
  - Remove outdated indices where `mp[idx] != num`.

**Solution**:  
Implemented in C++ using:
- **Unordered map for fast lookups** (`O(1)`)
- **Priority queue for efficiently getting the smallest index** (`O(log n)`)

---

### Problem 2: Substring Matching Pattern
**Approach**:
- Find the position of `'*'` in `p`.
- Split `p` into **prefix** (`pre`) and **suffix** (`suf`).
- Iterate through `s`:
  - If `s[i..i+n-1] == pre`, check for `suf` in remaining string.
  - If found, return `true`.

**Solution**:  
Implemented in C++ using:
- **Two substring searches** (`O(n²) worst case`)
- **Optimized for fast prefix and suffix matching**

---

### Problem 3: Shifting Letters II
**Approach**:
- Use **difference array technique** to efficiently apply shifts:
  - `v[start] += shift_value`
  - `v[end+1] -= shift_value` (to neutralize after `end`)
- Compute cumulative shifts in `O(n)`.
- Modify characters accordingly using modular arithmetic.

**Solution**:  
Implemented in C++ using:
- **Difference array for range updates** (`O(n)`)
- **Modulo operations to keep within character limits (`a-z`)**.

---

### Stay Updated
Make sure to check back for additional problem solutions and improvements!
