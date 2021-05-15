#include <iostream>
using namespace std;

int main() {
    float pi = 1;
    int x = 5;
    for (int i = 2; i < 20; i++)
    {
       // cout<<(1 / 5)<<endl;
        if(i%2 == 0){

         //   pi += (1 / i);
            pi -= 1 / i;
        } else {
            pi += 1 / i;
        }
    }
    cout<<pi<<endl;
    

    return 0;
}