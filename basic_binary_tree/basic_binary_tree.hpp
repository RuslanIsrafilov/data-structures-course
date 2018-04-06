#include <stack>
#include <stdexcept>
#include <iostream>

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
    std::stack<Node<Key, Value> *> stack;
    stack.push(_root);

    while (!stack.empty()) {
      Node<Key, Value> *n = stack.top();
      stack.pop();

      if (n->right()) {
        stack.push(n->right());
      }

      if (n->left()) {
        stack.push(n->left());
      }

      delete n;
    }
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
    auto current = _root;
    while (current) {
        if (key < current->key()) {
          current = current->left();
        }
        else if (key > current->key()) {
          current = current->right();
        }
        else {
          break;
        }
    }

    if (!current) {
      throw std::runtime_error("Key is not found");
    }

    return current->value();
  }

  bool empty() const {
    return _root == nullptr;
  }

private:
  Node<Key, Value> *_root;
};
