# STL
Standard Template Library
## Core ideas
Separate data structures(containers) from algorithms.And connect the two through iterators as an abstract bridge.
## Containers, algorithms and iterators
every container has its own iterators, and every algorithm is implemented in terms of iterators. So we can use the same algorithm on different containers.

- Generic programming: algorithms are written in terms of types to-be-specified-later 

## Problem solving strategy
Problem -> Data characteristics -> Container -> Algorithm