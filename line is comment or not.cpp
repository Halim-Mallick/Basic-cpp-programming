#include <iostream>
#include <string>
using namespace std;

bool isComment(const string& line) {
    // Check if the line starts with '//' or '/*' and ends with '*/'
    if (line.find("//") == 0 || (line.find("/*") == 0 && line.rfind("*/") == line.length() - 2)) {
        return true;
    }
    return false;
}

int main() {
    string input;
    char choice;

    do {
        cout << "Enter comment: ";
        getline(cin, input);

        if (isComment(input)) {
            cout << "It is a comment" << endl;
        } else {
            cout << "It is not a comment" << endl;
        }

        cout << "Do you want to check another line? (y/n): ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
