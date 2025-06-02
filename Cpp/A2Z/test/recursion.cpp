#include <bits/stdc++.h>
using namespace std;

class rec {
public:
    void f(int n){
        if(n == 0) return;
        cout << "Val :" << n << endl;
        n--;
        f(n);
    }

    void g(int i, int n){
        if(i < 1) return;
        cout << "Val :" << i << endl;
        g(i - 1, n);
    }

    void h(int i, int n){
        if(i < 1) return;
        h(i - 1, n);
        cout << "val :" << i << endl;
    }

    void j(int i, int n){
        if(i > n) return;
        j(i + 1, n);
        cout << "val :" << i << endl;
    }
};
class p3 {
    public:
        void f(int i,int n){
            if(i<1){
                cout<<n;
                return;
            }
            f(i-1,n+i);
        }
        int g(int n){
            if(n==0)return 0;
            return n+g(n-1);
        }
    };
    
    
int main(){
    p3 p;
    rec r; 
    int n;
    cin >> n;
    
    cout<<p.g(n);
}
 