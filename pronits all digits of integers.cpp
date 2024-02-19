#include<iostream>
using namespace std;
void printAllDigits(int n){
	while(n>0){
		int OncePlacesDigits = n % 10;
		cout<<"digits are:"<<OncePlacesDigits<<endl;
		n=n/10;	
	}	
}
int main ()
{
	int n;
	cout<<"enter number to see its digits:"<<endl;
	cin>>n;
	printAllDigits(n);
}