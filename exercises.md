# List of exercises

## Playground exercises
### 1. Removing the duplicates
Write code to remove duplicates from an unsorted linked list.

### 2. Circular list
Given a circular linked list, implement an algorithm which returns node at the beginning of the loop.

**DEFINITION**
Circular linked list: A linked list in which a node’s next pointer points to an earlier node, so as to make a loop in the linked list. For more information see [Wikipedia][circular_list].

**EXAMPLE**
*input:* A -> B -> C -> D -> E -> C [the same C as earlier]
*output:* C

### 3. Min-stack
Implement a stack which, in addition to `push` and `pop`, also has a function `min` which returns the minimum element. `Push`, `pop` and `min` should all operate in O(1) time.

### 4. Compute height of binary tree
Given an arbitrary binary tree, write a function, which computes height of the tree.

### 5. Building min-height binary tree
Given a sorted (increasing order) array, write an algorithm to create a binary tree with minimal height.

### 6. Check if tree is balanced
Implement a function to check if a tree is balanced. For the purposes of this question, a balanced tree is defined to be a tree such that no two leaf nodes differ in distance from the root by more than one.

### Notes
In order to complete the task 3.1 and 3.3, [tree traversal][tree_traverse] algorithms may be useful. More information about tree terminology [Wikipedia][tree_term].

## Assessment exercises
### 1. Balanced brackets
A bracket is considered to be any one of the following characters: `(`, `)`, `{`, `}`, `[`, or `]`. Two brackets are considered to be a matched pair if the an opening bracket (i.e., `(`, `[`, or `{`) occurs to the left of a closing bracket (i.e., `)`, `]`, or `}`) of the exact same type. There are three types of matched pairs of brackets: `[]`, `{}`, and `()`.

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, `{[(])}` is not balanced because the contents in between `{` and `}` are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, `(`, and the pair of parentheses encloses a single, unbalanced closing square bracket, `]`.

By this logic, we say a sequence of brackets is considered to be balanced if the following conditions are met:
* It contains no unmatched brackets.
* The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.

Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, print `YES` on a new line; otherwise, print `NO` on a new line.

### 2. Equal stacks
You have `N` stacks of integer numbers. Let us define height of a stack as sum of all numbers containing in that stack. Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more integers from the top of zero or more of the `N` stacks until they are all the same height, then print the height. The removals must be performed in such a way as to maximize the height.

**ILLUSTRATION**  
Initially, the stacks look like this:  
<p align="center">
  <img src="https://s3.amazonaws.com/hr-challenge-images/21404/1465645257-57311b88de-piles1.png" />
</p>
Observe that the three stacks are not all the same height. To make all stacks of equal height, we remove the first cylinder from stacks  and , and then remove the top two cylinders from stack  (shown below).
<p align="center">
  <img src="https://s3.amazonaws.com/hr-challenge-images/21404/1465645312-e48f85c176-piles2.png" />
</p>

### 3. Largest rectangle
Some company that is planning to demolish a number of old, unoccupied buildings and construct a shopping mall in their place. Your task is to find the largest solid area on which the mall can be constructed.

There are a number of buildings in a certain two-dimensional landscape. Each building has a height, given by `h[i]`. If you join `k` adjacent buildings, they will form a solid rectangle of area `k x min(h[i], h[i + 1], ..., h[i + k - 1])`.

**ILLUSTRATION**
<p align="center">
  <img src="https://s3.amazonaws.com/hr-challenge-images/8136/1436794554-75e178e325-drawing47.svg" />
</p>

### 4. Rock on the grid
You are given a grid with both sides equal to `n`. Rows and columns are numbered from `0` to `n - 1`, some cells on the grid are forbidden (you **can't** move through them). There is a [rock][rock_wiki] on the intersection `(i, j)`. In a single step you move from a point `(a, b)` to a point `(c, d)` if there is a straight horizontal line or a straight vertical line connecting these two and not containing any forbidden cell.

Your task is to calculate the minimum number of steps it would take to move the castle from its initial position to the goal position `(i', j')`. It is guaranteed that it is possible to reach the goal position from the initial position.

You are expected to complete implementation of the following function. Forbidden cell in the `grid` denoted with symbol `X`.
```C++
int minimumMoves(const char *grid, int n, int start_i, int start_j,
                                          int goal_i,  int goal_j);
```
### 5. Find the running median
The median of a set of integers is the midpoint value of the data set for which an equal number of integers are less than and greater than the value. To find the median, you must first sort your set of integers in non-decreasing order, then:
* If your set contains an odd number of elements, the median is the middle element of the sorted sample. In the sorted set `[1, 2, 3]`, `2` is the median.
* If your set contains an even number of elements, the median is the average of the two middle elements of the sorted sample. In the sorted set `[1, 2, 3, 4]`, `(2 + 3) / 2` is the median.

Given an input stream of  integers, you must perform the following task for each  integer:
1. Add the `i` integer to a running list of integers.
2. Find the median of the updated list.
3. Print the list updated median on a new line. The printed value must be a double-precision number.

You are expected to implement algorithm working in `O(n log(n))`.

**EXPLANATION**  
For example you are given the list `[12, 4, 5, 3, 8, 7]`, so we must print the new median on a new line as each integer in the list:
```
1. [ 12 ] -> 12
2. [ 12, 4 ] -> (12 + 4) / 2 = 8
3. [ 12, 4, 5 ] -> 5
4. [ 12, 4, 5, 3 ] -> (4 + 5) / 2 = 4.5
5. [ 12, 4, 5, 3, 8 ] -> 5
5. [ 12, 4, 5, 3, 8, 7 ] -> (5 + 7) / 2 = 6
```

<!-- LINKS -->
[circular_list]: https://en.wikipedia.org/wiki/Linked_list#Circular_linked_list
[tree_term]: https://en.wikipedia.org/wiki/Tree_(data_structure)#Terminology
[tree_traverse]: https://en.wikipedia.org/wiki/Tree_traversal
[rock_wiki]: https://en.wikipedia.org/wiki/Rook_(chess)
