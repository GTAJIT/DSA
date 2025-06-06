#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int i, string s) {
        string n = s;
        if(i>=n.size()/2) return true;
        if(n[i]!=n[n.size()-i-1]) return false;
        return(isPalindrome(i+1,s));
    }
};

int main(){
    Solution r;
    string s;
    getline(cin,s);
    // cin>>s;
    cout<<r.isPalindrome(0,s)<<endl;

    return 0;
}