# CIS-7 Course Project

## Project Submission Information
Author - Ryan Mendez

Date submitted - 12/8/2024

## Project Description
I chose Case 1 for this project. This program calculates the shortest and most cost-effective travel path for a marketing specialist visiting multiple cities (see image below). The cities are represented as nodes in a graph, and the distances between them are represented as edges in an adjacency matrix. The goal is to identify the shortest path that starts and ends at the same city (Riverside) while visiting all other cities exactly once. The program uses C++ for its efficient computation and clear representation of graph traversal and pathfinding algorithms.

![Project image](cis%207%20project.png)

## Programming Approaches
1.  **Graph Representation**:
    
    -   The cities are represented as nodes in a graph, and distances between cities are stored in an adjacency matrix. The adjacency matrix provides an intuitive way to represent and access the distances between any two cities.
        
2.  **Brute-Force Pathfinding**:
    
    -   The program generates all possible permutations of the cities to visit and calculates the total travel distance for each path.
        
    -   The shortest path is identified by comparing the total distances of all permutations.
        
3.  **Permutations with** `next_permutation`:
    
    -   The `std::next_permutation` function from the C++ Standard Library is used to efficiently generate all possible orders of visiting the cities.
        
4.  **Loopback Handling**:
    
    -   Each calculated path starts and ends at the starting city (Riverside). This ensures a round-trip calculation that is practical for real-world applications like marketing trips.
        
5.  **User-Friendly Output**:
    
    -   The program outputs the adjacency matrix, the shortest path, and the total distance in a clear and concise format for easy interpretation.

## Basic Instructions
The easiest way to run the code is to go to a C++ compiler online, [like this free one from Programiz](https://www.programiz.com/cpp-programming/online-compiler/). Simply copy the code from the `main.cpp` file, paste it in the online C++ compiler, and run the code.
