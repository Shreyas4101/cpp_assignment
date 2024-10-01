#include <iostream>
#include <string>
using namespace std;

class Person {
  private:
    // Constructor that accepts both name and age
    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }

    // Getter for the name
    string getName() {
      return name;
    }

    // Getter for the age (returns int instead of string)
    int getAge() {
      return age;
    }

    // Print information
    void print_info() {
      cout << "I am " << name << " and I am " << age << " years old." << endl;
    }

  private:
    string name;
    int age;
};

int main() {
  // Create a person object with name and age
  Person person1("charlie", 25);

  // Print info
  person1.print_info();

  return 0;
}

