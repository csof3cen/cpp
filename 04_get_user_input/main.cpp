#ifndef IOSTREAM
#define IOSTREAM
    #include <iostream>
#endif

int main() {
    /*int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "You're " << age << " years old." << endl;*/

    /*string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Hello " << name << " !" << endl;*/

    int firstNumber;
    int secondNumber;

    std::cout << "Enter first number : ";
    std::cin >> firstNumber;

    std::cout << "Enter second number : ";
    std::cin >> secondNumber;

    std::cout << "The sum of these two numbers is " << firstNumber+secondNumber << "." << std::endl;


    return 0;
}
