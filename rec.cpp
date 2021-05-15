#include <iostream>
using namespace std;

int factorial(int x) {
    if (x == 1) {
        return x;
    }
    x *= x-1;
    factorial(x-1);
    return x;
}

int main() {
    int testCases;
    cin>>testCases;
    for (int i = 0; i < testCases; i++) {
        int n;
        cin>>n;
        cout<<factorial(n)<<endl;
    }
    
    return 0;
}