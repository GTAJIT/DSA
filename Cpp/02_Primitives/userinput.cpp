#include <iostream>
#include <string>
using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea? \n";
    // getline(cin, userTea);
    cin >> userTea;
    
    //ask for quantity
    cout << "How many cups of" << userTea << "would you like to have ?";
    cin >> teaQuantity;

    cout << teaQuantity << " " << userTea << endl;

    return 0;
}