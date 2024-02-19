#include<iostream>
using namespace std;
int CheckEven( int n){
    if((n & 1) ==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter the value of n for checking odd or even :"<<endl;
    cin>>n;
    bool isEven = CheckEven(n);

    if(isEven){
       cout<<n<<" "<<"is even number"<<endl;
    }
    else{
        cout<<n <<" "<<"is odd number"<<endl;
    }
    return 0;
}