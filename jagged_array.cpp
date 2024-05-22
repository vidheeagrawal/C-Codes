/*
Each row of an array in a jagged array may contain a varied number of columns. Because it comprises numerous arrays, each with a different number of elements, the jagged array is sometimes known as an "array of arrays". The jagged array's elements are all arrays in and of itself.



//code 1

#include<bits/stdc++.h>
using namespace std;

int main()  
{  
    int **jaggedArray;  
    int rows = 3;  
jaggedArray = new int *[rows];  
jaggedArray[0] = new int[2] {1, 2};  
jaggedArray[1] = new int[3] {3, 4, 5};  
jaggedArray[2] = new int[4] {6, 7, 8, 9};  
  
    // Accessing jagged array elements  
cout<< "jaggedArray[0][0] = " <<jaggedArray[0][0] <<endl;  
cout<< "jaggedArray[1][1] = " <<jaggedArray[1][1] <<endl;  
cout<< "jaggedArray[2][2] = " <<jaggedArray[2][2] <<endl;  
  
    // Deallocating memory  
delete[] jaggedArray[0];  
delete[] jaggedArray[1];  
delete[] jaggedArray[2];  
delete[] jaggedArray;  
  
    return 0;  

}
*/

#include <iostream>  
using namespace std;  
  
int main()  
{  
    int* jaggedArray[3]; // declare a jagged array containing 3 rows  
  
    // allocate memory for the rows and assign their addresses to jaggedArray  
jaggedArray[0] = new int[2] {1, 2};  
jaggedArray[1] = new int[3] {3, 4, 5};  
jaggedArray[2] = new int[4] {6, 7, 8, 9};  
  
    // print the elements of the jagged array  
for(int i = 0; i< 3; i++) {  
for(int j = 0; j < i+2; j++) {  
cout<<jaggedArray[i][j] << " ";  
        }  
cout<<endl;  
    }  
  
    // deallocate memory for the rows  
for(int i = 0; i< 3; i++) {  
delete[] jaggedArray[i];  
    }  
  
    return 0;  
}  