/*
1. Here are a few sets of inputs and outputs for your reference
Input1 -> 1
Output1 -> 1 1 1

Input2 -> 2
Output2 -> 2 1 1 1 2 1 1 1 2

Input2 -> 3
Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

2. Figure out the pattern and complete the recursive function pzz to achieve the above for any positive number n.

Constraints
1 <= n <= 10
Sample Input
3
Sample Output
3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3
*/

#include<iostream>
using namespace std ; 

void print(int n){
    if(n==0) return ; 
    cout << n << " "; 
    print(n-1); 
    cout << n << " "; 
    print(n-1); 
    cout << n << " "; 
    return ; 
}
int main(){
    int n ; 
    cin >> n ; 
    print(n); 
    cout<< endl; 
    return 0 ; 
}