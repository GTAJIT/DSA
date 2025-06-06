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
class p5 {
    public:
        auto f(int i){
            if(i<=1) return i;
            return f(i-1)+f(i-2);
        }
};
    
int main(){
    p5 p;
    rec r; 
    int i;
    cin >> i;
    
    cout<<p.f(i);
}
 