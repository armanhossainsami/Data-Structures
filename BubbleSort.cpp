#include <iostream> 
using namespace std;

void bubblesort(int arr[], int n) {
    int i,j,temp;

    for(i=0; i<n-1; i++) {
        bool sorted=false;
        for(j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                sorted=true;
            }
        }
        if(!sorted)
        break;
    }
}

int main () {

    int n;

    cout << "Enter array size: " ;
    cin >> n;
    int arr[n];

    cout << "Enter array values: " <<endl;
    for(int k=0; k<n; k++) {
        cin >> arr[k];
    }
    cout << "The array: ";
    for(int k=0; k<n; k++) {
        cout << arr[k] <<" ";
    }
    cout << endl;

 bubblesort(arr, n);
    cout << "The sorted array: ";
    for(int k=0; k<n; k++) {
        cout << arr[k] <<" ";
    }

}