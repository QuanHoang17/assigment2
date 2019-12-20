
#define VIP "Vip"
#define REGULAR "Regular"
#define GUEST "Guest"
#include <string>

using namespace std;

class Account{
protected: 
	string id, name, address, phone;
	int listOfRentals;
public:
	string getId();
	string getName();
	string getAddress();
	string getPhone();
	int getListOfRentals();
	
	virtual void  rent(int numOfBorrowed) {
		listOfRentals+= numOfBorrowed;
	};
	virtual string getAccountType() =0;

	Account(string id, string name, string address, string phone);
};

class Guest : public Account {
public: 
	Guest(string id, string name, string address, string phone) : Account(id, name, address, phone) {};
	~Guest() {};
	string getAccountType() {
		return GUEST;
	};
};

class Regular : public Account {

public:
	Regular(string id, string name, string address, string phone) : Account(id, name, address, phone) {};
	~Regular() {};
	string getAccountType() {
		return REGULAR;
	}
};

class Vip : public Account {
private: 
	int point; 
public:
	Vip(string id, string name, string address, string phone) : Account(id, name, address, phone) {
		this->point = 0;
	}
	~Vip() {};
	string getAccountType(){
		return VIP;
	}
	int getPoint() {
		return this->point;
	};
	
	void rent(int numOfBorrowed) {
		listOfRentals += numOfBorrowed;
		point += 10;
	}

	//this constructor is to promote an "regular" class to "vip" class. 
	Vip(Regular &promotedOne ): Account(promotedOne.getId(), promotedOne.getName(), promotedOne.getAddress(),promotedOne.getPhone()){
		this->point = 0;
	}
	
};



