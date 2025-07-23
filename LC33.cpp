#include<iostream>
#include<vector>
using namespace std;

//O(log(n)) Approach
int search(vector<int>& nums, int target){        
    int start = 0, end = nums.size()-1;

    while(start <= end){
        if(nums[start] == target){return start;}
        if(nums[end] == target){return end;}
        
        int mid = start + ((end-start)/2);
        if(nums[mid] == target){return mid;}
        
        //Check to see if left subArray is sorted
        if(nums[start] < nums[mid]){
            //checks if target value is in left sorted subArray
            if((target >= nums[start] && target < nums[mid])){end = mid -1;}    
            else{start = mid +1;}
        }
        else{
            //checks if target value is in Right sorted subArray
            if((target > nums[mid] && target <= nums[end])){start = mid +1;}    
            else{end = mid -1;}
        }
    }

    return -1;  //Target value not found
}