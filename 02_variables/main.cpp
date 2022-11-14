#include <iostream>

using namespace  std;

int main() {
    // Use dataType variableName [= value]; to declare a new variable
    int developerAge;
    developerAge = 44;
    string developerName = "John";
    cout << "Hello, World! My name is " << developerName << endl;
    cout << "I am " << developerAge << " years old." << endl;
    cout << "A year later..." << endl << "And now I am " << ++developerAge;
    return 0;
}
