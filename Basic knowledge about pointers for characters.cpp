#include <iostream>
using namespace std;

int main() {
  char ch[10] = "love";
  char* ptr = ch;
  cout<<ch<<endl;
  cout<<&ch<<endl;
  cout<<ch[0]<<endl;
  cout<<&ptr<<endl;
  cout<<*ptr<<endl;
  cout<<ptr<<endl;


  return 0;
}