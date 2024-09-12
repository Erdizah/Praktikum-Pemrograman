#include <iostream>
#include <vector>

/*
John Doe
15000000
200000
150000
Net Salary: 11650000

Andi
32500000
3000000
5000000
Net Salary: 18000000

Mr. X
3000000
300000
300000
Net Salary: 1800000

Erdizah Ghodi Al Haidar
1000000000
10000000
50000000
Net Salary: 740000000

Mr. Y
3113359
314159
271828
Net Salary: 1904701
*/

int main () {
	std::string name;
	long long grosssalary, tax, installment, insurance, net;
	
	std::cout << "Payslip for Employee" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "Name: "; getline (std::cin, name);
	std::cout << "Gross Salary: "; std::cin >> grosssalary;
	tax = grosssalary/5;
	std::cout << "Tax (20%): "; std::cout << tax << std::endl;
	std::cout << "Installment: "; std::cin >> installment;
	std::cout << "Insurance: "; std::cin >> insurance;
	net = grosssalary - tax - installment - insurance;
	std::cout << "Net Salary: "; std::cout << net << std::endl; 
}