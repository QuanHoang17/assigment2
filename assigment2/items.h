// declare all classes related to item and its type 
#include <string>;
using namespace std;

class Items {
protected:
	string id, title, loanType, rentalFee, copies;
	bool isBorrowed;

public:
	//getters.
	string getId();
	string getTitle();
	string getLoanType();
	string getRentalFee();
	bool isAvalaible();
	string getCopies();
	
	//setters.
	void setId(string id);
	void setTitle(string title);
	void setLoanType(string loanType);
	void setStatus(bool status);
	void setCopies(string copies);
	void setRentalFee(string rentalFee);
};

string Items::getId() {
	return id;
}

string Items::getTitle() {
	return title;
}

string Items::getLoanType() {
	return loanType;
};

string Items::getRentalFee() {
	return rentalFee;
};

bool Items::isAvalaible() {
	return !isBorrowed;
};

string Items::getCopies() {
	return copies;
}


void Items::setId(string id) {

	this->id = id;
};

void Items::setTitle(string title) {
	this->title = title;
};

void Items :: setLoanType(string loanType) {
	this->loanType = loanType;
};

void Items :: setStatus(bool status) {
	this->isBorrowed = status; // true if the item is borrowed
};

void Items::setCopies(string copies) {
	this->copies = copies;
};

void Items::setRentalFee(string rentalFee) {
	this->rentalFee = rentalFee;
};


class Movies : public Items {
protected: 
	string genres;

public:
	string getGenres();
	void setGenres(string genres);
	Movies(string id, string title, string loanType,
		
			string rentalFee, bool isBorrowed, string copies, string genres);


};


string Movies::getGenres() {
	return genres;
};

void Movies ::setGenres(string genres){
	this->genres = genres;
};


Movies::Movies(string id, string title, string loanType, string rentalFee, bool isBorrowed, string copies, string genres) {
	this->id = id;
	this->title = title;
	this->loanType = loanType;
	this->rentalFee = rentalFee;
	this->isBorrowed = isBorrowed;
	this->copies = copies;
	this->genres = genres;

};

class DvDs : public Movies {
};

class Games : public Items {
public: 
	Games(string id, string title, string loanType,

		string rentalFee, bool isBorrowed, string copies);

};

Games::Games(string id, string title, string loanType, string rentalFee, bool isBorrowed, string copies) {

	this->id = id;
	this->title = title;
	this->loanType = loanType;
	this->rentalFee = rentalFee;
	this->isBorrowed = isBorrowed;
	this->copies = copies;

};
