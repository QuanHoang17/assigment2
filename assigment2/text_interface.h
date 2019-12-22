// this class is incharge of the text interface.

#include <iostream>
using namespace std;

class Interface {
public: 
	// make these friend functions so that no need object created to call these functions.
	friend void printInterface();
	friend void printExit();
	friend void printSubMenu(int funcNum);
	friend int getSelection();
};

void printInterface() {

	cout << "Welcome to Genie video store" << endl;
	cout << "Enter an option below." << endl;
	cout << "1.Add a new item, update or delete anexisting item \n"
		<< "2.Add new customer or update an existing customer\n"
		<< "3.Promote an existing customer\n"
		<< "4.Rent an item\n"
		<< "5.Return an item\n"
		<< "6.Display all items\n"
		<< "7.Display out-of-stock items\n"
		<< "8.Display all customers\n"
		<< "9.Display group of customers\n"
		<< "10.Search items or customers" << endl;

	cout << "Your answer: " << endl;
};

void printExit() {
	cout << "ASSIGNMENT 2 GROUP 123 " << std::endl;
	cout << "s3754450, s3754450@rmit.edu.vn, Quan, Hoang" << std::endl;
	cout << "s3760192, s3760192@rmit.edu.vn, Quang, Vu" << std::endl;
	cout << "s3757823, s3757823@rmit.edu.vn, Son, Le" << std::endl;
}

void printSubMenu(int funcNum) {
	switch (funcNum) {
	case 1: cout << "Choose your option:" << endl;
		cout << "1. Add an item" << endl;
		cout << "2. Update an item" << endl;
		cout << "3. Delete an item" << endl;
		cout << "Your option: " << endl;

		break;
	case 2: cout << "Choose your option:" << endl;
		cout << "1. Add a new customer" << endl;
		cout << "2. Update an existing customer" << endl;
		cout << "Your option: " << endl;
		break;

	case 3: cout << "Available customers to be promoted" << endl;
		// a function to print out all the accounts that are allowed to be promoted along with their positions.
		cout << "Enter the position of an account you would like to promote: " << endl;
		break;

	case 4: cout << "Please enter the id of the customer and id of item to be borrowed." << endl;
		break;

	case 5: cout << "Please enter the id of the customer and id of item to be returned." << endl;
		break;

	case 6: cout << "All available items in the stock: " << endl;
		break;

	case 7: cout << "Out of stock items: " << endl;
		break;

	case 8: cout << "Display all customers sorted by: " << endl;
		cout << "Press 1: Names" << endl;
		cout << "Press 2: Ids" << endl;
		cout << "Your option: " << endl;
		break;

	case 9: cout << "Enter the level of group of customer to be printed out:" << endl;
		cout << "Press 1: Guest" << endl;
		cout << "Press 2: Regular" << endl;
		cout << "Press 3: VIP" << endl;
		cout << "Your option: " << endl;
		break;

	case 10:cout << "Would you like to search for Items or Customers?" << endl;
		cout << "Press 1: Items" << endl;
		cout << "Press 2: Customers" << endl;
		break;
	default: cout << endl;


	};
}

int getSelection(int num) {
	int ans; 
	printSubMenu(num);
	cin >> ans;
	cin.get();
	return ans;
}
