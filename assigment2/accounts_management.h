// this class is to manage and handle with accounts only 
#include "account.h"
#include <iostream>
using namespace std;
class AccountManagement {
private:
	

public:
	friend void addCustomer();
	friend void editCustomer();
	friend void promoteCustomer();
	friend void displayCustomer();
	friend void displayGroupOfCustomers();
	friend void searchCustomer();
};

void addCustomer() {
	string type, id, name, address, phone;

	cout << "Enter your id: ";
	getline(cin, id);
	
	
	cout << "Enter you name: " << endl;
	getline(cin, name);
	

	cout << "Enter your address: " << endl;
	getline(cin, address);
	
	cout << "Enter you phone number: " << endl;
	getline(cin, phone);

	cout << "Enter the type of account to be created." << endl;
	cout << "Press 3 for Guest, 2 for Regular, or 1 for Vip" << endl;
	getline(cin, type);
	
	if (stoi(type) == REGULAR) {
		Regular newAcc (id, name, address, phone);
		cout << "A regular account has been created!" << endl;
		cout << endl;
	}
	else if (stoi(type) == VIP) {
		Vip newACc(id, name, address, phone);
	}
	else if (stoi(type) == GUEST) {
		Guest newAcc(id, name, address, phone);
	}
	else {
		cout << "TYPE OF ACCOUNT NOT FOUND" << endl;
	}
}

void editCustomer() {
	string idFound;
	
	cout << "Enter the id of customer to be edited: " << endl;

	getline(cin, idFound);


}

void promoteCustomer() {
	string idPromoted;
	cout << "Enter id of customer to be promoted:  " << endl;
	getline(cin, idPromoted);


}	

void displayGroupOfCustomers() {
	string level;
	cout << "Enter the level of group of customers to be displayed." << endl;
	cout << "Press 1 for Vip, 2 for Regular, or 3 for Guest" << endl;
	getline(cin, level);


	if (stoi(level) == VIP) {

	}
	else if (stoi(level) == REGULAR) {

	}
	else if (stoi(level) == GUEST) {

	}
	else {
		cout << "LEVEL NOT FOUND." << endl;
	}
	

}