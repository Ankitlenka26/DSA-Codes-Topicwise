/*
1. You are given a positive number n. 
2. You are required to print the counting from 1 to n.
3. You are required to not use any loops. Complete the body of print Increasing function to achieve it. Don't change the signature of the function.
Constraints
1 <= n <= 1000
Sample Input
5
Sample Output
1
2
3
4
5
*/

#include<iostream>
using namespace std;

void increasing(int n){
    if(n==0) return ; 
    increasing(n-1); 
    cout << n << endl;
    return ; 
}

int main(){
    int n ; 
    cin >> n ; 
    increasing(n); 
    cout << endl ;
    return 0; 
}