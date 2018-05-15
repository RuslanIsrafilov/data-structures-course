#include <string>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <functional>
#include <cassert>
#include "heap.hpp"

int main(int argc, char const *argv[]) {
  std::vector<int> sorted;

  constexpr size_t N = 1000;
  sorted.reserve(N);
  std::srand(77777);

  for (size_t i = 0; i < N; i++) {
    const int x = std::rand() % 1000;
    // heap.push(x, x);
    sorted.push_back(x);
  }

  BinaryHeap<int> heap(sorted, sorted);
  std::sort(sorted.begin(), sorted.end(), std::greater<int>());

  for (size_t i = 0; i < N; i++) {
    const int x_actual = heap.pop();
    const int x_expected = sorted[i];
    assert( x_actual == x_expected );
  }

  return 0;
}
