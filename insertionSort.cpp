#include <iostream>
using namespace std;

int main() {
    int arr[] = {12,11,13,5,6,9};
    int n = 6,j;

    for(int i = 1; i<n; i++) {
        int key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}