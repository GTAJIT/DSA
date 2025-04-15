#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaName;
    int teaCount;
    cout << "Name of Fav Tea: ";
    getline(cin,teaName);
    cout << "How much cup you can drink: ";
    cin>>teaCount;

    //output
    cout << "You can Drink "<<teaName<<" "<<teaCount<<" Cups A day its your Fav"<< endl;

    return 0;
}