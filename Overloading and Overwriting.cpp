#include <iostream>
#include <string>

// Base class
class Base {
public:
    // Function to be overridden
    virtual void display(const std::string &message) {
        std::cout << "Base class display: " << message << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the display function
    void display(const std::string &message) override {
        std::cout << "Derived class display: " << message << std::endl;
    }

    // Overloaded display function
    void display(int number) {
        std::cout << "Derived class display (int): " << number << std::endl;
    }
};

// Function to demonstrate function overloading
void printMessage(const std::string &message) {
    std::cout << "Message: " << message << std::endl;
}

void printMessage(int number) {
    std::cout << "Number: " << number << std::endl;
}

int main() {
    // User input for the base class display
    std::string userInput;
    std::cout << "Enter a message for the base class: ";
    std::getline(std::cin, userInput);

    // Create objects of Base and Derived classes
    Base baseObj;
    Derived derivedObj;

    // Call the base class display function
    baseObj.display(userInput);

    // Call the derived class display function (overriding)
    derivedObj.display(userInput);

    // Call the overloaded display function in Derived class
    int userNumber;
    std::cout << "Enter a number for the derived class: ";
    std::cin >> userNumber;
    derivedObj.display(userNumber);

    // Demonstrate function overloading
    printMessage(userInput);
    printMessage(userNumber);

    return 0;
}