#include <iostream>
using namespace std;

int hcf(int a, int b) {
    int d;
    if (a-b > 0){
        d = a - b;
    } else if (a == b) {
        return a;
    } else {
        d = b - a;
    }
    while (d > 1) {
        if (a % d == 0 && b % d == 0) {
        return d;
    } else {
        d--;
    }
    }
    return 1;
}
int lcm(int a, int b) {
    int lcm = a*b/(hcf(a, b));
    return lcm;
}

int main(){
    int n = 56;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
        {
           if (hcf(i, j) == lcm(i, j)) {
               cout<<"("<<i<<", "<<j<<")"<<endl;
               ans++;
           }
        }
    }
    cout<<ans;
    return 0;
}