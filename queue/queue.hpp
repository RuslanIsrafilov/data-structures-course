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
class Queue {
public:
  Queue() :
    _end(nullptr),
    _begin(nullptr) { }

  Queue(const Queue &other) :
    _end(nullptr),
    _begin(nullptr)
  {
    assign(other);
  }

  ~Queue() {
    clear();
  }

  Queue &operator = (const Queue &other) {
    clear();
    return assign(other);
  }

  void push(const T &x) {
    if (empty()) {
      _begin = new Link<T>(x);
      _end = _begin;
      return;
    }

    Link<T> *tmp = new Link<T>(x);
    _end->set_next(tmp);
    _end = tmp;
  }

  T pop() {
    if (empty()) {
      throw std::runtime_error("Queue is empty");
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
  Queue &assign(const Queue &other) {
    Link<T> *link = other._begin;
    while (link) {
      push(link->value());
      link = link->next();
    }
    return *this;
  }

  Link<T> *_end;
  Link<T> *_begin;
};
