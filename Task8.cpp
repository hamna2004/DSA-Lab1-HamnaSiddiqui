#include <iostream>
#include <string>
using namespace std;

int main () {
    // Ask user to enter the main text
    cout << "Write text: ";
    string text;
    getline(cin, text);   // read full line including spaces
    
    // Ask user to enter the pattern to search
    cout << "Write pattern: ";
    string pattern;
    getline(cin, pattern);  // read full line (can include spaces)

    // Case 1: Empty pattern (special case)
    if (pattern.empty()) {
        cout << "Empty pattern" << endl;
        return 0;
    }

    // Find the first occurrence of the pattern in the text
    int pos = (int)text.find(pattern);

    // If pattern is found
    if (pos != -1) {
        cout << "Pattern found at index: " << pos << endl;

        // Case 2: Pattern at the beginning
        if (pos == 0) {
            cout << "Pattern is at the beginning of the text." << endl;
        }

        // Case 3: Pattern at the end
        if (pos == (int)(text.size() - pattern.size())) {
            cout << "Pattern is at the end of the text." << endl;
        }
    } 
    // If pattern is not found in text
    else {
        cout << "Pattern not found" << endl;
    }

    return 0;
}
