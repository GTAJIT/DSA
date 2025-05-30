#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployees(const Employee& employees) {
    cout << "ID: " << employees.id << ", Name: " << employees.name << ", Salary: $" << employees.salary << endl;
}

int main(){

    vector<Employee> employees = {
        {1, "Alice", 50000},
        {2, "Bob", 60000},
        {3, "Charlie", 70000},
        {4, "David", 80000},
        {5, "Eve", 90000}
    };

    sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
        return a.salary < b.salary;
    });

    cout << "Employees sorted by salary\n" << endl;
    for_each(employees.begin(), employees.end(), displayEmployees);

    vector<Employee> highEarners;
    copy_if(employees.begin(), employees.end(), back_inserter(highEarners), [](const Employee& e) {
        return e.salary > 70000;
    });

    cout << "\nHigh earners:\n" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployees);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e) {
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employees.size();

    auto highestpaid = max_element(employees.begin(), employees.end(), [](const Employee& a, const Employee& b){
        return a.salary < b.salary;
    });

    return 0;
};