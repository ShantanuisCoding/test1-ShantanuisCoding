#include <iostream>
using namespace std;

double calculateSalary(double stipend) {
    return stipend;
}

double calculateSalary(double baseSalary, double bonuses) {
    return baseSalary + bonuses;
}

double calculateSalary(double baseSalary, double bonuses, double performanceIncentives) {
    return baseSalary + bonuses + performanceIncentives;
}

int main() {
    double internStipend;
    double employeeBaseSalary;
    double employeeBonuses;
    double managerBaseSalary;
    double managerBonuses;
    double managerPerformanceIncentives;

    cout << "Enter Intern Stipend: ";
    cin >> internStipend;
    cout << "Enter Employee Base Salary: ";
    cin >> employeeBaseSalary;
    cout << "Enter Employee Bonuses: ";
    cin >> employeeBonuses;
    cout << "Enter Manager Base Salary: ";
    cin >> managerBaseSalary;
    cout << "Enter Manager Bonuses: ";
    cin >> managerBonuses;
    cout << "Enter Manager Performance Incentives: ";
    cin >> managerPerformanceIncentives;
    
    cout << "Intern Salary: " << calculateSalary(internStipend) << endl;
    cout << "Regular Employee Salary: " << calculateSalary(employeeBaseSalary, employeeBonuses) << endl;
    cout << "Manager Salary: " << calculateSalary(managerBaseSalary, managerBonuses, managerPerformanceIncentives) << endl;

    return 0;
}