#include<iostream>
#include<math.h>
using namespace std;
bool checkPrime(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return false;
		}	
	}
	return true;
}
int main()
{
	int n;
	cout<<"enter the value n for prime number"<<endl;
	cin>>n;
	
	for (int i=2; i<=n; i++)
	{
	bool isPrime = checkPrime(i);
	if(isPrime)
	{
		cout<<"prime number"<<" "<<i<<endl;
		//cout<<n<<"="<<"is prime number"<<endl;
	}
	else{
		//cout<<n<<"="<<"is not prime number"<<endl;
	}
}
	return 0;
}