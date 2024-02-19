#include<iostream>
using namespace std;
int n;
int main()
{
	cout<<"enter the value of n = ";
	cin>>n;
	
	//loop outer loop for and inner loop for column
	for( int row=0; row<n; row++){
		for(int col=0; col<=row; col++){
			if(col ==0 || col == row || row == n-1){
			cout<<col+1;
		}
		else{
			cout<<" ";
		}
	}
	cout<<endl;	
}
return 0;
}