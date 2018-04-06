#include <iostream>
#include "linked_list.hpp"

int main(int argc, char const *argv[]) {
  LinkedList<int> list;

  for (int i = 0; i < 10; i++) {
    list.add(i);
  }

  for (int x : list) {
    std::cout << x << " ";
  }
  std::cout << std::endl;

  return 0;
}
