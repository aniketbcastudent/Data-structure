#include<iostream>
using namespace std;
int createdNumberUsingDigits( int numberOfDigits)
{
	int num=0;
	for(int i=0; i<numberOfDigits; i++)
	{
		cout<<"enter the number of digits : "<<endl;
		int digits;
		cin>>digits;
		num=num*10+digits;
		cout<<"number created so far : "<<num<<endl;
	}
	return num;
}
int main()
{
	int numberOfDigits;
	cout<<"enter number of digits :";
	cin>>numberOfDigits;
	int num=createdNumberUsingDigits(numberOfDigits);
	cout<<"Number created by digits : "<<num<<endl;
	return 0;
}