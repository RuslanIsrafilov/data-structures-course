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

**Input format**  
The first line contains a single integer, `n`, denoting the number of strings.
Each line `i` of the `n` subsequent lines consists of a single string, `s`, denoting a sequence of brackets.

**Output format**  
For each string, print whether or not the string of brackets is balanced on a new line. If the brackets are balanced, print `YES`; otherwise, print `NO`.

**Sample input**  
```
3
{[()]}
{[(])}
{{[[(())]]}}
```

**Sample Output**
```
YES
NO
YES
```

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

**Input Format**  
The first line contains `n` space-separated integers, describing the respective number of items in stacks `1`, `2`, ... `n`. The subsequent lines describe the respective numbers in a stack from top to bottom:
* The second line contains `m_1` space-separated integers in stack `1`.
* The third line contains `m_2` space-separated integers in stack `2`.
* ...
* The last line contains `m_n` space-separated integers in stack `n`.

**Output Format**  
Print a single integer denoting the maximum height at which all stacks will be of equal height.

**Sample Input** (in case of three stacks)
```
5 3 4
3 2 1 1 1
4 3 2
1 1 4 1
```

**Sample Output**
```
5
```

### 3. Largest rectangle
Some company that is planning to demolish a number of old, unoccupied buildings and construct a shopping mall in their place. Your task is to find the largest solid area on which the mall can be constructed.

There are a number of buildings in a certain two-dimensional landscape. Each building has a height, given by `h[i]`. If you join `k` adjacent buildings, they will form a solid rectangle of area `k x min(h[i], h[i + 1], ..., h[i + k - 1])`.

**ILLUSTRATION**
<p align="center">
  <img src="https://s3.amazonaws.com/hr-challenge-images/8136/1436794554-75e178e325-drawing47.svg" />
</p>

**Input Format**  
The first line contains `n`, the number of buildings. The second line contains `n` space-separated integers, each representing the height of a building.

**Output Format**  
Print a long integer representing the maximum area of rectangle formed.

**Sample Input**
```
5
1 2 3 4 5
```

**Sample Output**
```
9
```

### 4. Rock on the grid
You are given a grid with both sides equal to `n`. Rows and columns are numbered from `0` to `n - 1`, some cells on the grid are forbidden (you **can't** move through them). There is a [rock][rock_wiki] on the intersection `(i, j)`. In a single step you move from a point `(a, b)` to a point `(c, d)` if there is a straight horizontal line or a straight vertical line connecting these two and not containing any forbidden cell.

Your task is to calculate the minimum number of steps it would take to move the castle from its initial position to the goal position `(i', j')`. It is guaranteed that it is possible to reach the goal position from the initial position.

You are expected to complete implementation of the following function. Forbidden cell in the `grid` denoted with symbol `X`.
```C++
int minimumMoves(const char *grid, int n, int start_i, int start_j,
                                          int goal_i,  int goal_j);
```

**Input Format**  
The first line contains an integer `n`, the size of the grid.
The following `N` lines contains a string of length `n` that consists of one of the following characters: `X` or `.`, where `X` denotes a forbidden cell, and `.` denotes an allowed cell.
The last line contains space separated integers `i`, `j`, denoting the initial position of the castle, and `i'`, `j'`, denoting the goal position.

**Output Format**  
Output an integer denoting the minimum number of steps required to move the castle to the goal position.

**Sample Input**
```
3
.X.
.X.
...
0 0 0 2
```

**Sample Output**
```
3
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

**Input Format**  
The first line contains a single integer, `n`, denoting the number of integers in the data stream.
Each line `i` of the `n` subsequent lines contains an integer, `a_i`, to be added to your list.

**Output Format**  
After each new integer is added to the list, print the list's updated median on a new line as a single double-precision number scaled to `1` decimal place (i.e., `12.3` format).

**Sample Input**
```
6
12
4
5
3
8
7
```

**Sample Output**
```
12.0
8.0
5.0
4.5
5.0
6.0
```

### 6. Subsequence Weighting
You are given a sequence `A` in which every element is a pair of integers i.e. `A = [ (a_1, w_1), (a_2, w_2),..., (a_N, w_N) ]`.

**Definition 1**: A subsequence `B` of a sequence `A` is a sequence which is obtained by deleting zero or more elements from the sequence.  
**Definition 2**: A subsequence `B = [(b_1, v_1), (b_2, v_2), ..., (b_M, v_M)]` of the given sequence is called *increasing* if for every `i`, `b_i < b_(i + 1)`.  
**Definition 3**: A *weight* of subsequence is defined with the sum: `Weight(B) = v_1 + v_2 + ... + v_M`.

The task is to find increasing subsequence `B` with the maximum weight in the given sequence `A`.

**Input Format:**  
The first line of input contains a single integer `T`, denoting number of test cases. The first line of each test case contains the length `N` of a sequence. The next line contains `a_1, a_2, ..., a_N` separated by a single space. The next line contains `w_1, w_2, ..., w_N` separated by a single space.

**Output Format:**  
For each test case output a single integer: the maximum weight of increasing subsequences of the given sequence.

**Sample Input:**  
```
2  
4  
1 2 3 4  
10 20 30 40  
8  
1 2 3 4 1 2 3 4  
10 20 30 40 15 15 15 50
```

**Sample Output:**  
```
100  
110
```

### 7. No Prefix Set
Given `N` strings. Each string contains only lowercase letters from `a` to `j` (both inclusive). The set of `N` strings is said to be GOOD if no string is prefix of another string else, it is BAD. If two strings are identical, they are considered prefixes of each other.

For example, `aab`, `abcde`, `aabcd` are BAD because `aab` is prefix of `aabcd`.

Print `GOOD` if it satisfies the problem requirement. Else, print `BAD` and the first string for which the condition fails.

**Input Format:**  
First line contains `N`, the number of strings in the set.
Then next `N` lines follow, where `i`-th line contains `i`-th string.

**Output Format:**   
Output `GOOD` if the set is valid. Else, output `BAD` followed by the first string for which the condition fails.

**Sample Input:**
```
7
aab
defgab
abcde
aabcde
cedaaa
bbbbbbbbbb
jabjjjad
```

**Sample Output:**
```
BAD
aabcde
```

<!-- LINKS -->
[circular_list]: https://en.wikipedia.org/wiki/Linked_list#Circular_linked_list
[tree_term]: https://en.wikipedia.org/wiki/Tree_(data_structure)#Terminology
[tree_traverse]: https://en.wikipedia.org/wiki/Tree_traversal
[rock_wiki]: https://en.wikipedia.org/wiki/Rook_(chess)
