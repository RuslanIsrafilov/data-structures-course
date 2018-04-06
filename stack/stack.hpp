#include <stdexcept>

template<typename T>
class Link {
public:
  explicit Link(const T &value,
                Link *next = nullptr) :
    _value(value),
    _next(next) { }

  T value() const {
    return _value;
  }

  Link *next() const {
    return _next;
  }

  void set_next(Link *next) {
    _next = next;
  }

private:
  Link *_next;
  T _value;
};

template<typename T>
class Stack {
public:
  Stack() :
    _end(nullptr),
    _begin(nullptr) { }

  Stack(const Stack &other) :
    _end(nullptr),
    _begin(nullptr)
  {
    assign(other);
  }

  ~Stack() {
    clear();
  }

  Stack &operator = (const Stack &other) {
    clear();
    return assign(other);
  }

  void push(const T &x) {
    if (empty()) {
      _begin = new Link<T>(x);
      _end = _begin;
      return;
    }

    _begin = new Link<T>(x, _begin);
  }

  T pop() {
    if (empty()) {
      throw std::runtime_error("Stack is empty");
    }

    const T x = _begin->value();

    Link<T> *tmp = _begin;
    _begin = _begin->next();
    delete tmp;

    if (!_begin) {
      _end = nullptr;
    }

    return x;
  }

  bool empty() const {
    return _begin == nullptr;
  }

  void clear() {
    while (!empty()) {
      pop();
    }
  }

private:
  Stack &assign(const Stack &other) {
    Link<T> *link = other._begin;
    while (link) {
      push_back(link->value());
      link = link->next();
    }
    return *this;
  }

  void push_back(const T &x) {
    if (empty()) {
      _begin = new Link<T>(x);
      _end = _begin;
      return;
    }

    Link<T> *tmp = new Link<T>(x);
    _end->set_next(tmp);
    _end = tmp;
  }

  Link<T> *_end;
  Link<T> *_begin;
};
