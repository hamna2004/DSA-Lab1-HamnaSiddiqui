#include <iostream>
#include <vector>
using namespace std;
 
int main () {
    
    cout << "Enter elements of array:(-1 to exit) "<<endl;
    
    vector<int>arr;
    int el;
    cin>>el;
    for(int i = 0 ; el!=-1 ; ++i){
        arr.push_back(el);
        cin>>el;
    }
    if(arr.empty()){
        cout<<"Array is empty";
    }
    else {
    cout << "Enter key: "<<endl;
    int key;
    cin>>key;
    
    vector<int>indices;
    for(int i = 0 ; i<arr.size(); ++i) {
        if(arr[i]==key){
            indices.push_back(i);
        }
    }
    if(indices.empty()){
        cout<<"Key not found";
    }

    else {
    cout<< "Key is present at indices ";

    for(int i=0 ; i<indices.size(); ++i){
        cout<<indices[i]<<" ";
    }
  }
}
}

