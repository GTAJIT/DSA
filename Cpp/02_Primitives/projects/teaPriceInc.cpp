#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaName = "Chai";
    float teaBasePrice;
    cout<<"Tea Price: ";
    cin>>teaBasePrice;
    float teaNewPrice = teaBasePrice+((teaBasePrice*10)/100);
    int teaFinalPrice = (int)teaNewPrice;

    cout<<"The Price of Tea is: "<<teaFinalPrice<<"rs"<<endl;
}