#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main() {
    string bin;
    cin>>bin;
    //cout<<bin.size();
    int dec = 0;
    for (int i = 0; i < bin.size(); i++)
    {
        dec -= (pow(2, i))*(bin.at(bin.size() - i));
    }

    cout<<dec;
    
    
    return 0;
}