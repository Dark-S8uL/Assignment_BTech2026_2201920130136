# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Number of Segments in a String
**Problem Statement**:  
You are given a string `s` consisting of words separated by spaces. A word is defined as a contiguous sequence of non-space characters. Your task is to count the number of segments (words) in the string.



### Problem 2: Set Matrix Zeroes
**Problem Statement**:  
Given an `m x n` matrix, if an element is 0, set its entire row and column to 0. The transformation must be done in-place with minimal extra space usage.



### Problem 3: Remove Duplicates from Sorted Array II
**Problem Statement**:  
You are given a sorted array `nums`. Remove duplicates such that each element appears at most twice. Modify the array in-place and return the new length of the array.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Number of Segments in a String
**Approach**:
- Traverse through the string and count the number of contiguous sequences of non-space characters.
- Skip over consecutive spaces while maintaining the segment count.
  
**Solution**:  
Implemented in C++ by iterating through the string and identifying segments based on transitions from space to non-space characters.

---

### Problem 2: Set Matrix Zeroes
**Approach**:
- Use the first row and the first column of the matrix as markers to keep track of which rows and columns need to be set to zero.
- Iterate over the matrix twice:  
  1. Mark the rows and columns to be zeroed out.  
  2. Update the matrix based on the markers.
- Ensure minimal use of extra space.

**Solution**:  
Implemented in C++ using nested loops to mark and update the matrix in-place.

---

### Problem 3: Remove Duplicates from Sorted Array II
**Approach**:
- Use two pointers:  
  1. One pointer (`write`) to track the position where the next unique or allowed duplicate element should be written.  
  2. Another pointer (`read`) to iterate through the array.  
- Ensure that no element appears more than twice by comparing the current element with the element two indices before it.

**Solution**:  
Implemented in C++ using a two-pointer approach for efficient in-place modification.

---

### Stay Updated
Make sure to check back for additional problem solutions and improvements!
