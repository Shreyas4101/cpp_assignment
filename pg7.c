#include <string>
#include <iostream>

using namespace std;

// Define a Person class
class Person {
    // Create a constructor that takes a string and an int as parameters
    // and sets the name and age attributes to the values of the parameters
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }
    private:
        string name;
        int age;
};

class Student : public Person {
    public:
        // Constructor for Student that takes name, age, and department
        Student(string name, int age, string department) : Person(name, age) {
            this->department = department;
        }

        // Override the print_info method
        void print_info(){
            cout << "I am " << getName() << ", I am " << getAge() << " years old, and I am in the " << department << " department." << endl;
        }
    private:
        string department;
};

int main() {
    Person shreyas("Shreyas", 22);
    Person Alpha("charlie", 20);

    // Alternatively, print all the info using the class method
    shreyas.print_info();
    Alpha.print_info();

    // Create an instance of the Student class
    Student shreyas("Shreyas", 22, "Electronics and communication");
    // Print out the name, age, and department of the student
    shreyas.print_info();

    return 0;
}


