#include<iostream>
using namespace std;
int main(){
  int n = 5;
  cout<<n<<endl;
  cout<<"Address of n: "<<&n<<endl;
  int* ptr = &n;
  cout<<"Address of n stored in n: "<<ptr<<endl;
  cout<<"Value of address at the pointer ptr: "<<*ptr;
  
}