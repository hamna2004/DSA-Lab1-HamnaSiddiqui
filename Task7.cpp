#include <iostream>
#include <vector>
using namespace std;

int main () {
    // Input array elements until user enters -1
    cout << "Enter elements of array (-1 to exit): " << endl;
    vector<int> arr;
    int el;
    cin >> el;

    // Keep reading elements until -1 is entered
    for (int i = 0; el != -1; ++i) {
        arr.push_back(el);
        cin >> el;
    }

    // If array is empty, show message and exit
    if (arr.empty()) {
        cout << "Array is empty";
    }
    else {
        // Ask user for the key to search
        cout << "Enter key: " << endl;
        int key;
        cin >> key;

        // Store indices of occurrences
        vector<int> indices;

        // Traverse array to find all indices where key occurs
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == key) {
                indices.push_back(i);
            }
        }

        // If no indices found
        if (indices.empty()) {
            cout << "Key not found";
        }
        else {
            // Print all indices of key
            cout << "Key is present at indices: ";
            for (int i = 0; i < indices.size(); ++i) {
                cout << indices[i] << " ";
            }
        }
    }
}
