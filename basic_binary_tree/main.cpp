#include <string>
#include <iostream>
#include "basic_binary_tree.hpp"

int main(int argc, char const *argv[]) {
  BinaryTree<int, std::string> map;

  map.insert(10, "A");
  map.insert(5,  "B");
  map.insert(3,  "C");
  map.insert(7,  "D");
  map.insert(15, "E");
  map.insert(12, "F");
  map.insert(17, "G");

  std::cout << "map.find(3) = " << map.find(3) << std::endl;

  return 0;
}
