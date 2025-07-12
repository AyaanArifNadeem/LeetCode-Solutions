#include<iostream>
#include<vector>
using namespace std;

//Brute Force O(n^2)
vector<int> PairSum(vector<int>& numbers,int target){
    vector<int> ans;

    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            if(numbers.at(i)+numbers.at(j) == target){
                ans.push_back(numbers.at(i));
                ans.push_back(numbers.at(j));
                return ans;
            }
        }
    }

    return ans;
}


//Optimized Approach O(n)
vector<int> pairSum(vector<int>& numbers,int target){
    vector<int> ans;
    int pairsum, first = 0, last = numbers.size()-1;

    while(first < last){
        pairsum = numbers.at(first) + numbers.at(last);
        if (pairsum > target){last--;}
        if (pairsum < target){first++;}
        if (pairsum == target){
            ans.push_back(first+1);
            ans.push_back(last+1);
            return ans;
        }
    }

    return ans;
}


int main(){
    vector<int> nums = {2,7,11,15};
    int tar = 9;

    vector<int> answer = pairSum(nums, tar);

    for(int val : answer){
        cout<<val<<" ";
    }
}