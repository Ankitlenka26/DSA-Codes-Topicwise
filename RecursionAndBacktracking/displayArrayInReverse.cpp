/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print the elements of array from end to beginning each in a separate line.
4. For the above purpose complete the body of displayArrReverse function. Don't change the signature.

Sample Input : 
5
3
1
0
7
5

Sample Output :
5
7
0
1
3
*/
#include<iostream>
using namespace std ;

void display(int* arr , int i ,int n){
    if(i==n){
        return ; 
    }
    display(arr, i+1 , n);
    cout << arr[i] << endl; 
    return ; 
}

int main(){
    int n ; 
    cin >> n ;
    int* arr = new int[n]; 
    for(int i=0 ;i<n ; i++){
        cin >> arr[i]; 
    }
    int i=0 ;
    display(arr,i,n); 
    cout << endl; 
    return 0; 
}
