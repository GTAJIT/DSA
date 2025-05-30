#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" * ";
        } 
        cout<<endl;
    }
}
void print2(int n){
    for (int i = 0; i < n; i++)
    {
        // int num = 1;
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
            // num++;
        }
        cout<<endl;        
    }
}
void print3(int n){
    for (int i=1; i<=n; i++)
    {
        for (int j = 1; j<=n-i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n*2-i*2-1;j++){
            cout<<i+1;
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    
}

int main(){
    int n;
    cin >> n;
    print4(n);
} 