#include<bits/stdc++.h>
using namespace std;

void update (int **p){

    //1st
      p = p + 1;  //No change
      
    //2nd
      //*p = *p + 1;  //Change in address

    //3
      //**p = **p + 1;  //Chnage in value
}
/*
int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;


    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; 
    cout<<ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<&ptr<<endl;

    */
   int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
   
   cout<< endl << endl;
   cout<< "before" << i <<endl;
   cout<< "before" << p <<endl;
   cout<< "before" << p2 <<endl;

   update(p2);

   cout<< "after" << i <<endl;
   cout<< "after" << p <<endl;
   cout<< "after" << p2 <<endl;

   return 0;
}