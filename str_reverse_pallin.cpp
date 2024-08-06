// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin>>str;
  string str_rev;
  for(int i = str.size()-1;i>=0;i--){
      str_rev.push_back(str[i]);
  }
  cout<<str_rev<<endl;
  if (str == str_rev){
      cout<<"yes"<<endl;
  }
  else{
      cout<<"no"<<endl;
  }

    return 0;
}