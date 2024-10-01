#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
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
    virtual void print_info() {
      cout << "I am " << name << " and I am " << age << " years old." << endl;
    }

  public:
    string name;
    int age;
};

class Student:public Person{
  public:
    Student(string name,int age,string department ):Person(name,age){
      this->department=department;
    }

    void print_info() override{
      cout << "I am" <<getName() <<",I am" <<getAge() <<"years old and I study in the " <<department << "department." <<endl;
    }
  private:
    string department;
};


int main() {
  // Create a person object with name and age
  Person person1("Shyam", 25);
  Student student1("niri",21,"CsE");
  person1.print_info();
  student1.print_info();

  return 0;
}

