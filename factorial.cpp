#include<iostream>
using namespace std;
long long int fact(int n)
{
	long long int fact=1;
	for (long long int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

int main()
{
	long long int n;
	cout<<"enter the value of n for factorial"<<endl;
	cin>>n;
	
	long long int ans= fact(n);
	cout<<"factorial of number "<<n<<" is : "<<ans<<endl;
	return 0;
}