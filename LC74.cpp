#include<iostream>
#include<vector>
using namespace std;

//O(n) Approach
bool searchMatrix(vector<vector<int>>& matrix, int target) {
//1x1 Matrix
    if(matrix.size() == 1 && matrix[0].size() == 1){
        if(matrix[0].at(0)==target){return true;}
        return false;
    }

//Matrix with 1 column
    if(matrix.size() != 1 && matrix[0].size() == 1){
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i].at(0) == target){return true;}
        }
        return false;
    }

//Matrix with > 1 columns
    int first=0, last = matrix[0].size()-1, row = -1;
    for(int i = 0; i < matrix.size(); i++){
        if(target >= matrix[i].at(first) && target <= matrix[i].at(last)){row = i; break;}
    }
    if(row == -1){return false;}
    while(first <= last){
        if(matrix[row].at(first) == target || matrix[row].at(last) == target){return true;}
        first++; last--;
    }
    return false;
}



int main(){
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // vector<vector<int>> mat = {{1,3,5}};
    // vector<vector<int>> mat = {{1},{3}};
    cout<<searchMatrix(mat,3);

    return 0;
}