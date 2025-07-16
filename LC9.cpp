#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x){
    if(x < 0){return 0;}
    
    string check = to_string(x);
    int first = 0, last = check.size()-1;

    while(first < last){
        if(check[first] != check[last]){return 0;}
        first++; last--;
    }

    return 1;
}