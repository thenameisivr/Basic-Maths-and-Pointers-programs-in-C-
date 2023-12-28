#include<iostream>
using namespace std;
bool isprime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
void giveprime(int m,int n){
  for(int i=m;i<=n;i++){
    if(isprime(i)){
      cout<<i<<" ";
    }
  }
}
int main(){
  int n;
  int m;
  cin>>m>>n;
  giveprime(m,n);
}