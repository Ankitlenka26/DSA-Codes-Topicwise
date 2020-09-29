/*
1. You are given a positive number n. 
2. You are required to print the counting from n to 1.
3. You are required to not use any loops. Complete the body of print Decreasing function to achieve it.

Constraints
1 <= n <= 1000
Sample Input
5
Sample Output
5
4
3
2
1
*/

#include<iostream>
using namespace std;

void increasing(int n){
    if(n==0) return ; 
    cout << n << endl;
    increasing(n-1);
    return ; 
}

int main(){
    int n ; 
    cin >> n ; 
    increasing(n); 
    cout << endl ;
    return 0; 
}