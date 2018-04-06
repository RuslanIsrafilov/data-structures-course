#include <iterator>

template<class T>
class Link
{
public:
  explicit Link(const T &value,
                Link *next = nullptr) :
    _value(value),
    _next(next) { }

  const T &value() const {
    return _value;
  }

  Link *next() const {
    return _next;
  }

  void set_next(Link *next) {
    _next = next;
  }

private:
  T _value;
  Link *_next;
};

template<typename T>
class LinkedListIterator : public std::iterator<std::forward_iterator_tag, T> {
public:
  explicit LinkedListIterator(Link<T> *current) :
    _current(current) { }

  static LinkedListIterator &end() {
    static LinkedListIterator<T> last(nullptr);
    return last;
  }

  LinkedListIterator operator ++ () {
    LinkedListIterator copy = *this;
    incerement();
    return copy;
  }

  LinkedListIterator &operator ++ (int) {
    incerement();
    return *this;
  }

  bool operator == (const LinkedListIterator &other) const {
    return compare(other);
  }

  bool operator != (const LinkedListIterator &other) const {
    return !compare(other);
  }

  const T &operator * () {
    if (!_current) {
      throw std::runtime_error("List iterator has invalid state");
    }
    return _current->value();
  }

private:
  void incerement() {
    if (_current) {
      _current = _current->next();
    }
  }

  bool compare(const LinkedListIterator &other) const {
    return _current == other._current;
  }

  Link<T> *_current;
};

template<class T>
class LinkedList
{
public:
  explicit LinkedList() :
    _first(nullptr),
    _last(nullptr) { }

  LinkedList(const LinkedList &other) :
    _first(nullptr),
    _last(nullptr)
  {
    assign(other);
  }

  ~LinkedList() {
    clear();
  }

  LinkedList &operator = (const LinkedList &other) {
    if (this == &other) {
      return *this;
    }

    clear();
    return assign(other);
  }

  void add(const T &x) {
    if (!_first) {
      _first = new Link<T>(x);
      _last = _first;
      return;
    }

    Link<T> *newLink = new Link<T>(x);
    _last->set_next(newLink);
    _last = newLink;
  }

  void clear() {
    Link<T> *link = _first;

    while (link) {
      Link<T> *linkToDelete = link;
      link = link->next();
      delete linkToDelete;
    }

    _first = nullptr;
    _last = _first;
  }

  LinkedListIterator<T> begin() const {
    return LinkedListIterator<T>(_first);
  }

  LinkedListIterator<T> end() const {
    return LinkedListIterator<T>::end();
  }

private:
  LinkedList &assign(const LinkedList &other) {
    Link<T> *link = other._first;

    while (link) {
      add(link->value());
      link = link->next();
    }

    return *this;
  }

private:
  Link<T> *_first;
  Link<T> *_last;
};
