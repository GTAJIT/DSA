#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <list>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "CoffeMaker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "DeskLamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002","C003"};
    int quantity;
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }
    
    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7}
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    };

    unordered_map<string, string> customerData = {
        {"C001", "John Doe"},
        {"C002", "Jane Smith"},
        {"C003", "Alice Johnson"},
        {"C004", "Bob Brown"},
        {"C005", "Charlie White"}
    };

    unordered_set<int> uniqueProjectIDs;
    for(const auto &product: products){
        uniqueProjectIDs.insert(product.productID);
    };

    return 0;
};