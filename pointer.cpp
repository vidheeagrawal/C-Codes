#include<bits/stdc++.h>
using namespace std;

// int main(){
    // int num = 5;
    // cout<<num<<endl;
    // cout<<"Address of 5 is : "<<&num<<endl;

    // int *ptr = &num;
    // cout<<"Value is:"<<*ptr<<endl;

    // cout<<"We will get: "<<ptr<<endl;

    // return 0;

    // pinters in array

    // int arr[10]={0};
    // cout<<"address of first memory is : "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"address of first memory is : "<<&arr[0]<<endl;

//     int arr[10]={1,2,3};
//     // cout<<"Element in fist memory location: "<<*arr<<endl;
//     // cout<<"Element in second memory location: "<<*arr + 1 <<endl;
//     cout<<"Element in second memory location: "<<arr[2] <<endl;
//     cout<<"Element in second memory location: "<<*(arr + 2) <<endl;

//     return 0;

// }

//      Note:
//      arr[i] = *(arr + i)
//      i[arr] = *(i+arr)
//      where i is index.


//summary

//int main(){
    // int temp[10]={1,2};
    // cout<< sizeof(temp) <<endl;
    // cout<< "1st size : " <<sizeof(*temp) <<endl;


    // int *ptr = &temp[0];
    // cout<< sizeof(ptr) << endl;  //address
    // cout<< sizeof(*ptr) << endl;  //value
    // cout<< sizeof(&ptr) << endl;  //address
    // int arr[0];

    // int *ptr = &arr[0];
    // cout<< ptr << endl;
    // ptr = ptr + 1 ;
    // cout<< ptr <<endl;


    //Char arrays:

    // int arr[10] = {1,2,3};
    //char ch[6] = "abcde";

    // cout << arr << endl;
    // cout << ch << endl;

    //char *c = &ch[0];
    //cout << c << endl;

    //return 0;

    // Pointer in functions
/*
    void print (int *p){
        cout << *p << endl;
    }

    void update(int *p){
       // p = p+1;
       // cout<< "Inside: "<< p <<endl;

       *p =*p + 1;
    }

    int main(){
         int value = 5;
         int *p = &value;

        // print (p);

        cout<<"Before: "<< *p <<endl;
        update(p);
        cout<<"After "<< *p << endl;
         return 0;
    }
*/
//Array in function(sum)

int getsum(int *arr , int n){
    cout<< endl << "size : "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[6]={1,2,3,4,5,8};
    cout<<"Sum is: "<<getsum(arr+3,3)<<endl;
}