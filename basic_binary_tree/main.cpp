#include <string>
#include <iostream>
#include "basic_binary_tree.hpp"

int main(int argc, char const *argv[]) {
  BinaryTree<int, std::string> bt;

  bt.insert(10, "A");
  bt.insert(5,  "B");
  bt.insert(3,  "C");
  bt.insert(7,  "D");
  bt.insert(15, "E");
  bt.insert(12, "F");
  bt.insert(17, "G");

  bt.debug_print();

  std::cout << "Recursive DFS: "; bt.print_dfs_recursive();
  std::cout << "Stack DFS: "; bt.print_dfs_stack();
  std::cout << "BFS: "; bt.print_bfs();

  return 0;
}
