#include <tuple>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

template<typename Value>
class BinaryHeap {
public:
  explicit BinaryHeap(size_t capacity = 16) {
    _tree.reserve(capacity);
  }

  explicit BinaryHeap(const std::vector<Value> &values,
                      const std::vector<int> &priorities) {
    assert( values.size() == priorities.size() );

    for (size_t i = 0; i < values.size(); i++) {
      _tree.emplace_back(values[i], priorities[i]);
    }

    for (int64_t i = parent(size() - 1); i >= 0; i--) {
      percolate_down(i);
    }
  }

  Value pop() {
    swap(0, size() - 1);
    const Value last = value(size() - 1);
    _tree.resize(size() - 1);

    percolate_down(0);

    return last;
  }

  void push(const Value &value, int priorityValue) {
    _tree.emplace_back(value, priorityValue);

    size_t c = _tree.size() - 1;
    size_t p = parent(c);

    while (c > 0 && priority(c) > priority(p)) {
      swap(c, p);
      c = p;
      p = parent(c);
    }
  }

  size_t size() const {
    return _tree.size();
  }

  void debug_print() const {
    for (auto&& pair : _tree) {
      std::cout << std::get<1>(pair) << " ";
    }
    std::cout << std::endl;
  }

private:
  void percolate_down(size_t p) {
    size_t c = max_child(p);

    while (c > 0 && priority(c) > priority(p)) {
      swap(c, p);
      p = c;
      c = max_child(p);
    }
  }

  size_t max_child(size_t p) const {
    const size_t left = left_child(p);
    const size_t right = right_child(p);

    if (left >= size()) {
      return 0;
    }

    if (right >= size()) {
      return left;
    }

    if (priority(left) > priority(right)) {
      return left;
    }

    return right;
  }

  static size_t parent(size_t index) {
    return (index + 1) / 2 - 1;
  }

  static size_t left_child(size_t index) {
    return (index + 1) * 2 - 1;
  }

  static size_t right_child(size_t index) {
    return (index + 1) * 2;
  }

  void swap(size_t i, size_t j) {
    std::swap( _tree[i], _tree[j] );
  }

  int priority(size_t index) const {
    return std::get<1>(_tree[index]);
  }

  const Value &value(size_t index) const {
    return std::get<0>(_tree[index]);
  }

private:
  std::vector<std::tuple<Value, int>> _tree;
};
