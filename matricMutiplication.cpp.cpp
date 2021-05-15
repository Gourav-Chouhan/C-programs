#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main() {
    
	int matrix1[3][3];
	int matrix2[3][3];
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
		cin>>matrix1[i][j];
		}
	}
	
	int ansMatrix[3][3];
	
		for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
		ansMatrix[i][j] = 0;
		}
	}

	
		for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
		cin>>matrix2[i][j];
		}
	}
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++){
			for(int k=0; k<3; k++) {
				 ansMatrix[i][j] += matrix1[i][k]*matrix2[k][i];
		}
	}
	}
	

		for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			if(i==0 & j==0){
				cout<<"Answer Matix is: "<<endl;
			}
		cout<<ansMatrix[i][j]<<" ";
		}
	 	cout<<endl;
	}	
	
    return 0;
}