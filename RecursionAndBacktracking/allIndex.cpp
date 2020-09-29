/*

Question
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the all indices at which x occurs in array a.
5. Return an array of appropriate size which contains all indices at which x occurs in array a.

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
4

*/

#include<iostream>
#include<vector>
using namespace std ;

void allIndexes(int* arr , int n ,int idx ,  int x , vector<int>& v){
    if(idx == n){
        return ; 
    }
    if(arr[idx] == x){
        v.push_back(idx); 
    }
    
    allIndexes(arr , n , idx+1 , x , v); 
    return ; 
}

int main(){
    int n ; 
    cin >> n ;
    int *arr = new int[n]; 
    for(int i=0 ;i<n ;i++){
        cin >> arr[i]; 
    }
    int k ; 
    cin >> k ;
    vector<int> v; 
    int idx = 0; 
    allIndexes(arr , n , idx,  k,v);
    for(int ele : v){
        cout << ele << endl ;
    }
    return 0; 
}