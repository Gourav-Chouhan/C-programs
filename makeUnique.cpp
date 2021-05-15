#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int arr2[1001]; 
    for (int i=0; i<1001; i++) {
        arr2[i] = 0;
    }

    for (int i=0; i<n; i++) {
        arr2[arr[i]] += 1;
    }

    for (int i=1000; i>=0; i--) {
        if (arr2[i] == 1) {
            cout<<arr2[i]<<" ";
        }
    }

    return 0;
}