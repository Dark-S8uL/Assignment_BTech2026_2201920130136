# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Subsets II
**Problem Statement**:  
Given an integer array `nums` that may contain duplicates, return all possible subsets (the power set). The solution set must not contain duplicate subsets.

---

### Problem 2: Check if a Parentheses String Can Be Valid
**Problem Statement**:  
You are given a parentheses string `s` and a locked string `locked`, where:
- `locked[i]` is '1' if `s[i]` cannot be changed.
- `locked[i]` is '0' if `s[i]` can be changed.
Determine if `s` can be transformed into a valid parentheses string.

---

### Problem 3: Construct K Palindrome Strings
**Problem Statement**:  
Given a string `s` and an integer `k`, return `true` if you can construct exactly `k` non-empty palindrome strings using all the characters of `s`, or `false` otherwise.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Subsets II
**Approach**:
- Sort the input array `nums` to handle duplicates.
- Use backtracking to generate all possible subsets.
- Skip duplicate elements during recursion to avoid duplicate subsets.
- Store the valid subsets in a global result vector.

**Solution**:  
Implemented in C++ using a recursive backtracking approach with sorting and duplicate handling.

---

### Problem 2: Check if a Parentheses String Can Be Valid
**Approach**:
- The string length must be even; otherwise, it cannot be a valid parentheses sequence.
- Traverse the string twice:
  1. **Left to right:** Ensure there are enough opening brackets or flexible (`'0'`) characters to balance closing brackets.
  2. **Right to left:** Ensure there are enough closing brackets or flexible (`'0'`) characters to balance opening brackets.
- If both passes succeed, return `true`; otherwise, return `false`.

**Solution**:  
Implemented in C++ using a two-pass greedy approach.

---

### Problem 3: Construct K Palindrome Strings
**Approach**:
- If `k` is greater than the string length, it's impossible to form `k` palindromes.
- Count the frequency of each character in `s`.
- A valid palindrome requires at most one odd-count character.
- If the number of odd-count characters is less than or equal to `k`, return `true`; otherwise, return `false`.

**Solution**:  
Implemented in C++ using a hash map for character frequency tracking.

---

