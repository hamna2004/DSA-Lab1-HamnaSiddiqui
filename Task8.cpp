#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << "Write text: ";
    string text;
    getline(cin, text);   
    
    cout << "Write pattern: ";
    string pattern;
    getline(cin, pattern);  

    if (pattern.empty()) {
        cout << "Empty pattern" << endl;
        return 0;
    }

    int pos = (int)text.find(pattern);

    if (pos != -1) {
        cout << "Pattern found at index: " << pos << endl;

        if (pos == 0) {
            cout << "Pattern is at the beginning of the text." << endl;
        }

        if (pos == (int)(text.size() - pattern.size())) {
            cout << "Pattern is at the end of the text." << endl;
        }
    } 
    else {
        cout << "Pattern not found" << endl;
    }
    return 0;
}
