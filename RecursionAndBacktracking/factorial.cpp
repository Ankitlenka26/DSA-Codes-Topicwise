/*
Question
1. You are given a number n.
2. You are required to calculate the factorial of the number. Don't change the signature of factorial function.

Constraints
0 <= n <= 10
Sample Input
5

Sample Output
120
*/

#include<iostream>
using namespace std ; 

int fact(int n){
    if(n==0 || n==1){
        return n; 
    }
    
    return n*fact(n-1); 
}

int main(){
    int n ; 
    cin >> n ; 
    int ans = fact(n) ; 
    cout << ans << endl ;
}