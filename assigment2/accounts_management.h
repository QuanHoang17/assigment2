// this class is to manage and handle with accounts only 
#include "account.h"
#include <iostream>
using namespace std;
class AccountManagement {
private:
	friend string getInput();

public:
	friend void addCustomer();
	friend void editCustomer();
	friend void deleteCustomer();

};

void addCustomer() {
	string id, name, address;

	cout << "Enter your id: ";
	getline(cin, id);
	
	
	cout << "Enter you name: " << endl;
	getline(cin, name);
	

	cout << "Enter your address: " << endl;
	getline(cin, address);
	

	

}