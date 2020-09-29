/*
1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n. Don't change the signature of power function.

Constraints
1 <= x <= 10
0 <= n <= 9
Sample Input
2
5
Sample Output
32
*/

#include<iostream>
using namespace std ; 


int helper(int x , int n){
    if(n==0 || x==1){
        return 1 ; 
    }
    
    int ans = helper(x,n/2); 
    
    if(n%2 == 0){
        return ans*ans;
    }else{
        return ans*ans*x;
    }
    
    return -1; 
}

int main(){
    int x , n ; 
    cin >> x >> n ;
    int power = helper(x,n); 
    cout << power << endl; 
    return 0; 
}