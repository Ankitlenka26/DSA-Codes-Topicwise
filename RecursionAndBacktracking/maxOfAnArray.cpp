/*

1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the maximum of input. 
4. For the purpose complete the body of maxOfArray function. Don't change the signature.

Sample Input
6
15
30
40
4
11
9
Sample Output
40

*/

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std ;

void display(int* arr , int i ,int n , int& maxEle){
    if(i==n){
        return ; 
    }
    display(arr, i+1 , n,maxEle);
    maxEle = max(maxEle,arr[i]);  
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
    int maxEle = INT_MIN; 
    display(arr,i,n,maxEle); 
    cout << maxEle << endl; 
    return 0; 
}