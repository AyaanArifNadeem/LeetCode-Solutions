#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach O(n^2)
int majorityelement(vector<int>& nums){
    for(int val: nums){
        int count = 0;
        for(int ele: nums){if(val == ele){count++;}}
        if(count > (nums.size()/2)){return val;}
    }
    return -1;
}


//Sorted Approach O(nLogn)
int majorityelement(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int count= 0, value = nums.at(0);  
    for(int val: nums){
        if(value == val){count++;}
        else{
            value = val;
            count = 1;
        }
        if(count > (nums.size()/2)){return value;}    
    }
    return -1;
}


//Moore's Voting Algorithm O(n)
int majorityElement(vector<int>& nums) {
    int count = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(count == 0){ans = nums.at(i);}
        if(nums.at(i) == ans){count++;}
        else{count--;}
    }
    return ans;
}

//To speed up moore's algorithm a sort function could be implemented
//giving it the same time complexity as the optimized approach