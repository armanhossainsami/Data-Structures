#include <iostream>
using namespace std;


int main() {
    int arr[] = {2, 5, 9, 12, 20};
    int n = 5;
    int key = 12;

for(int i = 0; i < n; i++) {
    
    if(arr[i] == key) {
    cout << "Found at index: " << i << endl;
        break;
    }
    
    else if(arr[i] > key) {
        cout << "Target not found in array." << endl;
        break;
        }
    }
return 0;
}
