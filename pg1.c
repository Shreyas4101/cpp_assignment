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

int main() {
    Person shreyas("shreyas", 22);
    // Print out the name and age of the person
    cout << shreyas.getName() << " is " << shreyas.getAge() << " years old." << endl;

    // Alternatively, print all the info using the class method
    shreyas.print_info();

    return 0;
}


