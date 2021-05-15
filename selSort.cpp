#include <iostream>
#include <climits>
using namespace std;

int main() {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];
        }
        int start = 0;
		while (start<n){
			int mino = INT_MAX;
			int minIndex = 0;
			for (int i=start; i<n; i++){
				if(mino <= arr[i]) {
					
				} else {
					mino = arr[i];
					minIndex = i;
				}
			}
			int temp = arr[start];
			arr[start] = mino;
			arr[minIndex] = arr[start];
			start++;
		}
		for (int i=0; i<n; i++){
            cout<<arr[i];
        }
    return 0;
}