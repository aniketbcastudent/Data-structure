#include<iostream>
using namespace std;
float  KMtomiles(float km){
	float _1kmMile=0.621371;
	float miles= km * _1kmMile;
	return miles;	
}
int main()
{
	float km;
	cout<<"tell me km to convert into milies:"<<"="<<endl;
	cin>>km;
	
	float miles = KMtomiles(km);
	cout<<"millies:"<<"="<<miles<<endl;
	return 0;
}