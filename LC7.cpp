#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int reverse(int x) {
    int ans = 1;
    string num = to_string(x);

    if(x < 0){ans *= -1; num.erase(0,1);}
    reverse(num.begin(),num.end());

    try{ans *= stoi(num);}
    catch(...){return 0;}

    return ans;
}



int main(){
    cout<<reverse(120)<<endl;
    cout<<reverse(1534236469)<<endl;
    cout<<reverse(-2147483412)<<endl;
    cout<<reverse(-2147483648)<<endl;
    
    return 0;
}