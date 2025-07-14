#include<iostream>
#include<vector>
using namespace std; 

//2-Pointer Approach O(n)
int maxArea(vector<int>& height) {
    if(height.size() == 2){return min(height[0],height[1]);}
    int vol = 0, left = 0, right = height.size()-1;

    while(right>left){
        int wt = right - left;
        int h = min(height[right],height[left]);
        int currVol = wt * h;
        vol = max(vol, currVol);

        (height[right] > height[left]) ? left++ : right--;
    }

    return vol;
}