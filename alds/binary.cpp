#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int binarySearch(){
    left = 0;
    right = n;
    while(left < right) {
        mid = (left+right / 2);
        if A[mid] == key {
            return mid;
        }else if(key < A[mid]) {
            right = mid;
        }else {
            left = mid+1;
        }
    }
    return NOT_FOUND;
}

int main(){
    
}