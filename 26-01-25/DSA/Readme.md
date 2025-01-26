# Problem Statements and Solutions

This repository contains solutions to three coding problems sourced from **LeetCode**, a popular competitive programming platform. Each solution is explained with its approach and implementation details.

---

## Problem Statements

### Problem 1: Count Servers that Communicate
**Problem Statement**:  
In a 2D grid, each cell represents either a server (1) or no server (0). Two servers communicate if they are in the same row or column. Your task is to count the total number of servers that can communicate with at least one other server.

---

### Problem 2: Grid Game
**Problem Statement**:  
You are given a 2xN grid where each cell contains a positive integer. Two players take turns picking rows and summing the values from that row, starting from the first column to the last. The goal is to maximize the score of the first player while minimizing the score of the second player. Determine the maximum score the first player can achieve.

---

### Problem 3: Map of Highest Peak
**Problem Statement**:  
You are given a 2D grid where some cells are marked as water (1) and others as land (0). Your task is to determine the height of each land cell such that the height of adjacent cells differs by at most 1, starting with water cells at height 0. Use Breadth-First Search (BFS) to compute the heights.

---

## Coding Platforms Used
All problems are sourced from **LeetCode**, a widely-used platform for practicing coding problems.

---

## Approach and Solution Explanation

### Problem 1: Count Servers that Communicate
**Approach**:
- Traverse through the grid to count the number of servers in each row and column.
- For each cell containing a server, check if it communicates with any other server in the same row or column.
- Use a visited array or boolean checks to avoid double-counting.

**Solution**:  
Implemented in C++ using nested loops to count the servers and verify communication efficiently.

---

### Problem 2: Grid Game
**Approach**:
- Calculate the prefix sum for both rows of the grid.
- Use the prefix sums to simulate the two-player game and calculate the maximum score the first player can achieve.
- Optimize the score calculation by minimizing the possible score for the second player in every scenario.

**Solution**:  
Implemented in C++ using prefix sum arrays and dynamic programming to determine the optimal strategy.

---

### Problem 3: Map of Highest Peak
**Approach**:
- Use a queue for BFS traversal starting from all water cells (height 0).
- Increment the height level for each layer of BFS, ensuring adjacent cells differ by at most 1 in height.
- Maintain a visited array or modify the grid in-place to avoid revisiting cells.

**Solution**:  
Implemented in C++ using a BFS approach with a queue to update the heights level-by-level.

---