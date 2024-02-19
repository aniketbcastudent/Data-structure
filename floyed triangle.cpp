#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value for n ="<<endl;
	cin>>n;
    cout<<"the floyed triangle are:-"<<endl;
	int c=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<" ";
			cout<<c;
			c++;
		}
		cout<<endl;
	}
}