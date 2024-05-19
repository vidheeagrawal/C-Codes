#include<bits/stdc++.h>

using namespace std;

int countVowels(string s){
    int count = 0;
    for(int i=0;i< s.length();i++){
       char ch = s[i];
       if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        count++;
    }
    return count;
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    cout<<countVowels(s);
    return 0;
}
    