#include<iostream>
#include<cmath>
using namespace std;
bool isprimme(int n){
  if(n<=1){
      return false;
    }
  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }


  }
  return true;
}
int countprime(int n){
  int count = 0;
  for(int i=2;i<n;i++){
    if(isprimme(i)){
      count++;
    }
  }
  return count;
}
int main(){
  int n;
  cin>>n;
  int ans = countprime(n);
  cout<<ans;
}