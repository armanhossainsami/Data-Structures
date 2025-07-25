#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "add array elements= "<< endl;
    for(int i = 0; i<n; i++) {
        cout << "Element "<< i+1 <<" ";
        cin >> arr[i];
    }
    cout << "The array elements are = ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int low = 0;
    int up = n-1;
    bool found = false;
    int mid;

    while(low<=up) {
        mid = (low+up)/2;
        
        if(arr[mid]==key) {
            found = true;
            break;
        }
        
        else if(arr[mid] < key) 
            low = mid+1;

        else
            up = mid-1;
    }
    if(found) {
        int first = mid;
        int last = mid;

        while(first>0 && arr[first-1] == key) {
            first--;
        }
        while(last<n-1 && arr[last+1] == key) {
            last++;
        }
        cout << "First occurence = " << first << endl;
        cout << "Last occurence = " << last <<endl;
        cout << "The element is present at indices: ";
        for (int i = first; i <= last; i++) {
            cout << i << " ";
    }
}
    else 
    cout << "Item not found!";

}
