#include <iostream>
#include <cctype>   // for isupper, islower, isdigit
#include <string>
using namespace std;

int checkPasswordStrength(const string& password) {
    if (password.length() < 12)
        return -1;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "),.;:<>(";

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        return 1;
    else
        return -1;
}


int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    int result = checkPasswordStrength(password);
    if (result == 1)
        cout << "Password is strong." << endl;
    else
        cout << "Password is weak." << endl;

    return 0;
}
