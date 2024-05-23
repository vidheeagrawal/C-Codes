#include<bits/stdc++.h>
using namespace std;


/* factorialby recurssion logic:
    
    badi problem =  n!
    which is n *(n-1)

    choti problem = (n-1)!;

let badi = larger 
let choti = smaller 

*/


int factorial(int n){
     
     //base case
    if(n==0)
    return 1;
/*
    int smaller = factorial(n-1);
    int larger = n * smaller;

    return larger ;
    */

   // these three lines can be written in single line

   return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial is: "<<ans<<endl;

    return 0;
}