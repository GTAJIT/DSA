#include<bits/stdc++.h>
using namespace std;

int count(int x){
    int c = 0;
    while(x>0){
        c++;
        x=x/10; 
    }
    return c;
}

int reverse(int x){
    int reNum = 0;
    while(x>0){
        int lastDig = x%10;
        x=x/10;
        reNum = (reNum*10)+lastDig;
    }
    return reNum;
}

string cd(int x){
    int rev=0;
    int val = x;
    while(val>0){
        int ls=val%10;
        val=val/10;
        rev=(rev*10)+ls;
    }
    if(rev==x) return "true";
    else return "false";
}

int main(){
    int x;
    cin>>x;
    cout << cd(x);
}