#include<iostream>
using namespace std;
int countSetBit(int n){
  /*	int count=0;
	while(n>0)
	{
		int bit=n%2;
		if(bit==1)
		count ++;
		n=n/2;
	}
	return count;*/
	int count=0;
	while(n>0){
	int bit=(n & 1);
	if(bit==1)
	count++;
	n>>=1;
}
return count;
}
int main()
{
	int n;
	cout<<"enter the value of n count all the set bits"<<endl;
	cin>>n;
	int SetBitcount=countSetBit(n);
	cout<<"SetBitcount"<<"="<<SetBitcount<<endl;
	return 0;
}