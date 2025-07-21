#include<iostream>
#include<vector>
using namespace std;

//O(n^2) Approach
int lengthOfLongestSubstring(string s) {
    string ans="";
    int output = 0, currLength = 0;

    for(int i = 0; i<s.length(); i++){
        ans += s[i];
        
        for(int j = 0; j<ans.length()-1; j++){
            if(ans.length()==1){break;}
            if(s[i] == ans[j]){ 
                if(j == 0) {ans.erase(0,1);break;}
                else if(j == ans.length()-2){ans = s[i];break;}
                else {ans.erase(0,j+1);break;}  
            }
        }

        currLength = ans.length();
        output = max(currLength,output);
    }

    return output;
}