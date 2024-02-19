#include<iostream>
using namespace std;
int main()
{
	int n,f=1,i;
	cout<<"enter the any number:"<<endl;
	cin>>n;
	try{
		if(n<0)
		throw(n);
		else{
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<"enter the factorial"<<n<<"="<<f;
		}
	}
	catch(int p)
	{
		cout<<p<<"is -ve no"<<"exception factorial for negative number";
	}
	return 0;
}

