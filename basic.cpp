#include <iostream>
using namespace std;

int main() {
    int pi;
    bool minus = true;
    int sum = 1;
    for (int i=3; i<70; i += 2) {
        if (minus)
        {
            sum -= 1/i;
            minus = false;
        } else  {
            sum += 1/i;
            minus = true;
        }
     }
     pi = sum*4;
     cout<<pi<<"\n";
     cout<<sum;
    return 0;
}