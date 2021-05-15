#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int m = 40000;
    int count = 0;
    for (int i = n ; i < m; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                count++;
            }
            
        }
        if (count == 0)
        {
            cout<<i<<endl;
        }
        count = 0;
        
        
    }
    

    return 0;
}
