#include <iostream>
#include <cmath> // for using some maths functions

using namespace  std;

int main() {
    // 1. Basic Strings operations
    string developerName = "John Carter";

    cout << "Number of characters in developerName : " << developerName.length() << endl; // Length
    cout << "First Letter : " << developerName[0] << endl; // Index, starting from 0

    developerName[0] = 'M';
    cout << "Changed the first letter : " << developerName << endl;

    // Return the index, from where the searched parameter start from, search from index 0
    cout << "`hn` is developerName start from index " << developerName.find("hn", 0) << endl;

    cout << "Second name : " << developerName.substr(5, 6) << endl;


    // 2. Basic numbers operations

    cout << 4+3 << endl;
    int wnum = 63;
    wnum++;
    wnum -= 4;
    cout << wnum << endl;
    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;
    cout << pow(2, 5) << endl;
    cout << sqrt(81) << endl;
    cout << round(4.6) << endl;
    cout << fmax(3, 10) << endl; // Max number

    return 0;
}
