#include <cstdio>
#include <iostream>
#include "stack.hpp"

class Person {
public:
  explicit Person(const std::string &name, int age) :
    _name(name),
    _age(age) { }

  const std::string &name() const {
    return _name;
  }

  int age() const {
    return _age;
  }

private:
  std::string _name;
  int _age;
};

std::ostream &operator << (std::ostream &stream,
                           const Person &person) {
  stream << "{ "
         <<   "name: '" << person.name() << "', "
         <<   "age: '" << person.age() << "' "
         << "}";
  return stream;
}

int main(int argc, char const *argv[]) {
  Stack<Person> s;

  s.push(Person("A", 32));
  s.push(Person("B", 63));
  s.push(Person("C", 22));

  while (!s.empty()) {
    std::cout << s.pop() << std::endl;
  }

  return 0;
}
