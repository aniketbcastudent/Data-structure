#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int> trees, long long int m, long long int mid){
  long long int woodCollected=0;
  for(long long int i=0; i<trees.size(); i++)
  {
    if(trees[i] > mid){
      woodCollected += trees[i] - mid;
    }
  }
  return woodCollected >=m;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m){

  long long int start=0, end , ans=-1;
  end=*max_element(trees.begin(), trees.end());

  while(start<=end)
  {
    long long int mid=start +(end - start)/2;
    if(isPossibleSolution(trees, m, mid)){
      ans=mid;
      start=mid +1;
    }
    else{
      end=mid-1;
    }
  }
  return ans;
}

int main() {
  long long int n;
  long long int m;
  cout<<"enter the value of n || n denotes the number of tress in a single row"<<endl;
  cin>>n;
  cout<<"enter the value of m  which m dentoes the length of wood that is required to cut down "<<endl;
  cin>>m;
  vector<long long int> trees;
  while(n--)
  {
    long long int height;
    cout<<"enter the height of single tress line by line in the rows"<<endl;
    cin>>height;
    trees.push_back(height);
  }
  cout<<"max height of saw blade is"<<endl;
  cout<<maxSawBladeHeight(trees,m)<<endl;
  return 0;
}