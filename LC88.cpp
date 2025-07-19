#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//O((m+n)log(m+n))
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    for(int i = m; i < m+n; i++){
        nums1[i]=nums2[i-m];
    }
    sort(nums1.begin(),nums1.end());
}

//O(m+n)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    if(n == 0){return;}
    if(m == 0){nums1 = nums2; return;}
    if(m+n == 2){
        if(nums2[0] < nums1[0]){swap(nums1[0],nums1[1]);swap(nums1[0],nums2[0]);}
        if(nums2[0] > nums1[0]){swap(nums1[1],nums2[0]);}
        return;
    }

    int A = m-1, B = n-1, C = m+n-1;

    while(B >= 0){
        if(A >= 0 && nums2[B]<nums1[A]){swap(nums1[A--],nums1[C--]);}
        else{swap(nums1[C--],nums2[B--]);} 
    }
}

