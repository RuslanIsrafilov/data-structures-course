#include <stack>
#include <queue>
#include <tuple>
#include <stdexcept>
#include <iostream>
#include <iomanip>

template<typename Key, typename Value>
class Node {
public:
  explicit Node(const Key &key,
                const Value &value,
                Node *left = nullptr,
                Node *right = nullptr) :
    _key(key),
    _value(value),
    _left(left),
    _right(right) { }

  Node *left() const {
    return _left;
  }

  Node *right() const {
    return _right;
  }

  const Key &key() const {
    return _key;
  }

  const Value &value() const {
    return _value;
  }

  void set_left(Node *left) {
    _left = left;
  }

  void set_right(Node *right) {
    _right = right;
  }

private:
  Node *_left;
  Node *_right;
  Key _key;
  Value _value;
};

template<typename Key, typename Value>
class BinaryTree {
public:
  BinaryTree() :
    _root(nullptr) { }

  ~BinaryTree() {
    // delete_recursive(_root);
  }

  void insert(const Key &key,
              const Value &value) {
    if (!_root) {
      _root = new Node<Key, Value>(key, value);
      return;
    }

    Node<Key, Value> *prev = nullptr;
    Node<Key, Value> *current = _root;
    while (current) {
        prev = current;
        if (key < current->key()) {
          current = current->left();
        }
        else if (key > current->key()) {
          current = current->right();
        }
        else {
          throw std::runtime_error("Key already exists");
        }
    }
    assert(prev->key() != key);
    assert(prev != nullptr);

    auto node = new Node<Key, Value>(key, value);
    if (key > prev->key()) {
      prev->set_right(node);
    }
    else {
      prev->set_left(node);
    }
  }

  const Value &find(const Key &key) {
    Node<Key, Value> *current = _root;
    while (current != nullptr) {
      if (key > current->key()) {
        current = current->right();
      }
      else if (key < current->key()) {
        current = current->left();
      }
      else {
        return current->value();
      }
    }

    throw std::runtime_error("Key is not found");
  }

  bool empty() const {
    return _root == nullptr;
  }

  void debug_print() const {
    if (_root) {
      debug_print_inorder(_root, 0);
    }
  }

  void debug_print_inorder(Node<Key, Value> *n, int level) const {
    if (n->right()) {
      debug_print_inorder(n->right(), level + 1);
    }

    std::cout << std::setw(level * 5) << ' '
              << n->key() << std::endl;

    if (n->left()) {
      debug_print_inorder(n->left(), level + 1);
    }
  }

  void print_dfs_recursive() {
    print_dfs_recursive(_root);
    std::cout << std::endl;
  }

  // Depth First Search (DFS)
  void print_dfs_recursive(Node<Key, Value> *node) {
    if (!node) {
      return;
    }

    std::cout << node->key() << " ";

    if (node->left()) {
      print_dfs_recursive(node->left());
    }

    if (node->right()) {
      print_dfs_recursive(node->right());
    }
  }

  // Depth First Search (DFS)
  void print_dfs_stack() {
    std::stack< Node<Key, Value> *> stack;
    stack.push(_root);

    while (!stack.empty()) {
      auto n = stack.top();
      stack.pop();

      if (n->right()) {
        stack.push(n->right());
      }

      if (n->left()) {
        stack.push(n->left());
      }

      std::cout << n->key() << " ";
    }
    std::cout << std::endl;
  }

  // Breadth First Search (BFS)
  void print_bfs() {
    std::queue< Node<Key, Value> *> queue;
    queue.push(_root);

    while (!queue.empty()) {
      auto n = queue.front();
      queue.pop();

      if (n->right()) {
        queue.push(n->right());
      }

      if (n->left()) {
        queue.push(n->left());
      }

      std::cout << n->key() << " ";
    }
    std::cout << std::endl;
  }

private:
  Node<Key, Value> *_root;
};
