#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 3, 7, 3, 2};
    int n = 7, key = 3;
    bool found = false;

    for(int i = 0; i<n; i++) {
        if(arr[i] == key) {
            if(!found) cout << "value found in indices: ";
            if(found) {
                cout << ", ";
            }
            cout << i;
            found = true;
        }
    }
    if(!found) 
    cout << "Element not found!";
}