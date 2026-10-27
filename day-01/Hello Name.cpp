#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Hello, " << name << endl;
    cout << "Are you a male or female?" << endl;
    getline(cin >> ws, gender);
    if (gender == "M") {
        cout << "You are gentle man" << endl;
    }
    if (gender == "F") {
        cout << "You are a clever lady" << endl;
    }
    return 0;
}
