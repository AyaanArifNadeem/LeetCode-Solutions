#include <iostream>
#include <vector>
using namespace std;

//Brute-Force
vector<int> twoSum(vector<int> &nums, int target){
    vector<int> ans;
 
    for (int i = 0; i < nums.size(); i++){
        if (ans.size() == 2){break;}
        for (int j = 0; j < nums.size(); j++){
            if (ans.size() == 2){break;}
            if (i == j){continue;}
            if (nums.at(i) + nums.at(j) == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}