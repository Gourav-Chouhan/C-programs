#include <iostream>
using namespace std;

int main() {
    int temp;
    int arr[100];
    arr[0] = 1;
    int counter = 1;
    cin>>temp;
    while (temp > 1) {
        if (temp%2 == 0) {
            temp = temp/2;
            arr[counter] = 0;
            counter++;
        } else {
            temp = (temp - 1)/2;
            arr[counter] = 1;
            counter++;
        }
    }
    
//  cout<<counter;
//cout<<temp<<endl<<endl;
    cout<<arr[0];
    for (int i = 1; i < counter; i++)
    {
        cout<<arr[counter - i ];
    }

    return 0;
}
