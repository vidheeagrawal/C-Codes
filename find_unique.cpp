/*xoring of same number =0
   like a^a=0
   a^0=a

   int the same way 1^1=0 and 2^2=0 and 0^3=0

   this is leedcode question.
*/


#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans ^= arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,1,2,3};
    int size=5;
    int ans = findUnique(arr,size);
    cout<<ans<<endl;
    return 0;
}