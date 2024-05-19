//Return maximum occurring letter in any string;

#include<bits/stdc++.h>
using namespace std;

char getMax(string s){
    int arr[26]={0};
    int number = 0;
    for(int i = 0;i<s.length();i++){
        number = s[i] - 'a';
        arr[number]++;
    }
    int maxi = -1;
    int ans =0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi=arr[i];
        }
    }
    return 'a'+ ans;
}

int main(){
      string s;
      cout<<"Enter a string:"<<endl;
      cin>>s;

      cout<<getMax(s);
      return 0;
}