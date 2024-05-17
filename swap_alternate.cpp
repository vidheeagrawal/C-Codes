/*arr[5]={1,2,7,8,5}
   therefore after swap alternate
arr[5]={2,1,8,7,5}

here we are also adding condition that if i+1 is greater, then swap otherwise keep it same 
   */

#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int odd[5]={1,2,7,8,5};
    int even[6] ={1,4,3,8,2,6};

    swapAlternate(odd,5);
    printArray(odd,5);
    swapAlternate(even,6);
    printArray(even,6);

}