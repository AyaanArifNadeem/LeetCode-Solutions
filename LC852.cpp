#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr){
    //Since question will never have ans in edge cases we have excluded them
    //If it did we would have to use a variety of checks for edge cases
    int start = 1, end = arr.size()-2;
    while(start <= end){
        
        int mid = start + ((end-start)/2);
        if( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] ){return mid;}
        
        //Checks to see mid is in increasing or decreasing part of array
        if(arr[mid] < arr [mid+1]){start = mid +1;}
        else{end = mid -1;}
        
    }
    return -1;
}