#include<iostream>
#include<vector>
using namespace std;
void countprime(int m,int n){
  // if(n<=1) return false;
  vector<bool>prime(n,true);
  prime[0] = prime[1] = false;
  for(int i=m;i<n;i++ ){
    if(prime[i]){
      cout<<i<<" ";
      int j = 2*i;
      while(j<n){
        prime[j] = false;
        j+=i;
      }
    }
  }
}

int main(){
  int m;
  int n;
  cin>>m>>n;
  countprime(m,n);
}