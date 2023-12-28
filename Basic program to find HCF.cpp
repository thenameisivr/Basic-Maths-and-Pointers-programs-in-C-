#include<iostream>
#include<cmath>
using namespace std;
int biggest(int m,int n){
  int sqrtd = sqrt(m);
  int ans = 0;
  for(int i=1;i<=m;i++){
    if(n%i==0&&m%i==0){
      ans = i;
    }
  }
  return ans;
}
int main(){
  int n,m;
  cin>>m>>n;
  int ans = biggest(m,n);
  cout<<ans<<endl;
}