#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    int left = nums[0], right_prod = 1;
    vector<int> right = nums;

    for(int i = right.size()-1; i >=0; i--){
        right[i]= right_prod;
        right_prod = nums[i]*right_prod;
    }

    for(int i = 1; i < nums.size(); i++){
        right[i]= left*right[i];
        left = left*nums[i];
    }

    return right;        
}



int main(){
    // vector<int> num = {-1,1,0,-3,3};
    vector<int> num = {1,2,3,4};

    vector<int> ans = productExceptSelf(num);

    for(int val: ans){
        cout<<val<<" ";
    }

    return 0;
}