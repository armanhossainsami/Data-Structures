#include <iostream>
using namespace std;

int main() {
    int arr[] = {70,30,50,10,5,20};
    int n = 6;
    int min;

    for(int i = 0; i<n-1; i++) {
        min = i;

        for(int j =i+1; j<n; j++) {
            if(arr[j]<arr[min]) 
            min = j;
        }
        swap(arr[i], arr[min]);

    }

    for(int i =0; i<n; i++) {
        cout << arr[i] <<  " ";
    }
}