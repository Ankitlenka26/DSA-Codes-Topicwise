/*

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the first index at which x occurs in array a.
5. If x exists in array, print the first index where it is found otherwise print -1.

Constraints
1 <= n <= 10^4
0 <= n1, n2, .. n elements <= 10 ^ 3
0 <= x <= 10 ^ 3
Sample Input
6
15
11
40
4
4
9
4
Sample Output
3

*/

#include<iostream>
using namespace std ;

int display(int* arr , int i ,int n , int k){
    if(i==n){
        return -1; 
    }
    if(arr[i]==k){
        return i ;
    } 
    else return display(arr, i+1 , n , k);
}

int main(){
    int n ; 
    cin >> n ;
    int* arr = new int[n]; 
    for(int i=0 ;i<n ; i++){
        cin >> arr[i]; 
    }
    int k ; 
    cin >> k ;
    int i=0 ;
    cout << display(arr,i,n,k) << endl;  
    return 0; 
}