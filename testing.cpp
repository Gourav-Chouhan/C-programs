#include <iostream>
using namespace std;

int fac(int n) 
{
    if (n == 1) {
        return 1;
    }
    int prev = n*fac(n-1);
    return prev;
}

int sumFromAtoB(int a, int b) 
{

    int ans = 0;
    ans += sumFromAtoB(a+1, b);
    if (a == b) 
    {
        return ans;
    }
   // return ans;
}

int main() {

    cout<<sumFromAtoB(1,10);

    return 0;
}