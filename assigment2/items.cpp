#include "items.h"

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
int Items::getCopies() {
	return copies;
}

void Items::setId(string id) {

	this->id = id;
};

void Items::setTitle(string title) {
	this->title = title;
};

void Items::setLoanType(string loanType) {
	this->loanType = loanType;
};

void Items::setStatus(bool status) {// false if the item is borrowed
	this->isBorrowed = !status; 
};

void Items::addCopies(int copies) {
	this->copies += copies;
};

void Items::setRentalFee(string rentalFee) {
	this->rentalFee = rentalFee;
};

/*------------- MOVIES CLASS's FUNCTION DEFINE ------------------*/
string Movies::getGenres() {
	return genres;
};

void Movies::setGenres(string genres) {
	this->genres = genres;
};