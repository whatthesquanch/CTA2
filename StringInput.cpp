#include <iostream>
#include <string>

using namespace std;

int main () {

    string str1, str2, result;

    for (int i = 0; i < 3; ++i) {
        cout << "Enter the first string: ";
        getline(cin, str1);

        cout << "Enter the second string: ";
        getline(cin, str2);

        result = str1 + str2;
        cout << "Result:  " << result << endl;
    }

    return 0;
}