/*      Here, we are taking simple example of recurrsion.
        basically you need to reach home which is 1km away (says)
        how will you go?
        by taking steps.
        so what we wil do we will write func for step ad called it recursively.
*/


#include<bits/stdc++.h>
using namespace std;

void reachHome(int dest, int src){

    cout << "Source " << src << " Destination " << dest << endl;   //printed each value of recurssion for better understanding.

    //base case
    if(src == dest){
        cout<<"Reached "<<endl;
        return;
    }

    //processing 
    src++;
     
    //recursive call
    reachHome(dest,src);

}

int main(){
    int dest = 10;
    int src = 1;

    reachHome(dest,src);

    return 0;
}

