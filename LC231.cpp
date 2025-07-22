#include<iostream>
#include<vector>
using namespace std;

//O(n) Approach
bool isPowerOfTwo(int n){
    while((n % 2) != 1 && n > 0){n = n >> 1;}
    if (n == 1){return true;}
    return false;
}
//O(1) Approach
bool isPowerOfTwo(int n) {
    return n > 0 && (n&(n-1)) == 0;
}