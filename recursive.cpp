#include <iostream>
#include <string>

using namespace std;

int countVowels(string str);

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Number of vowels in the string: " << countVowels(s) << endl;
    return 0;
}

int countVowels(string str) {
    int count = 0;
    char ch;
    for (int i = 0; i < str.length(); ++i) {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            ++count;
        }
    }
    return count;
}
