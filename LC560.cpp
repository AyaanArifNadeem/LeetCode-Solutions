#include<iostream>
#include<vector>
using namespace std;

//Brute force O(n^2) Approach
int subarraySum(vector<int>& nums, int k) {
    int ans= 0, sum = 0;
    for(int i=0; i< nums.size(); i++){
        sum=nums[i];

        if(sum==k){ans++;}
        if(i==nums.size()-1){break;}
        
        for(int j=i+1; j< nums.size(); j++){
            sum += nums[j];
            if(sum == k){ans++;}
        }
    }

    return ans;
}