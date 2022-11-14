#include <iostream>

using namespace  std;

int main() {
    // 1. Varibale declaration
    // Use dataType variableName [= value]; to declare a new variable
    int developerAge;
    developerAge = 44;
    string developerName = "John";
    cout << "Hello, World! My name is " << developerName << endl;
    cout << "I am " << developerAge << " years old." << endl;
    cout << "A year later..." << endl << "And now I am " << ++developerAge << endl;

    // 2. Datatypes
    char initial = 'M'; // Use chart to declare a single character string. The string have to be in single quotes.
    string quote = "Stay hungry, Stay foolish";
    int age = 55;
    float pi = 3.14;
    double  temperature = 68.7898;
    bool isCompleted = true;

    cout << "Initial : " << initial << endl;
    cout << "Quote : " << quote << endl;
    cout << "Age : " << age << endl;
    cout << "Pi : " << pi << endl;
    cout << "Temperature : " << temperature << endl;
    cout << "Is completed ? : " << isCompleted << endl;

    return 0;
}
