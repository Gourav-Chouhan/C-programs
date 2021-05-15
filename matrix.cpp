#include <iostream>
using namespace std;

int main() {
   int n = 3;
   int m = 1;
   int o = 3;
   int matrix1[n][m] = {{1}, {3}, {3}};
   int matrix2[m][o] = {{2, 3, 4}};
   int answer[n][o];

   for (int i = 0; i < n; i++) 
   {
       for (int  j = 0; j < o; j++)
       {
           for (int k = 0; k < m; k++)
           {
               answer[i][j] += matrix1[i][k]*matrix2[k][j]; 
           }
           
       }
       
   }

   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < o; j++)
       {
           cout<<answer[i][j]<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}
