#include "account.h"

using namespace std;
Account:: Account (string id, string name, string address, string phone){
	this->id = id;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->listOfRentals = 0;
}

string Account::getId() {
	return this->id;
}
string Account::getName() {
	return this->name;
}
string Account::getAddress() {
	return this->address;
};
string Account::getPhone() {
	return this->phone;
};
int Account::getListOfRentals() {
	return this->listOfRentals;
}
