// declare all classes related to item and its type 
#include <string>
using namespace std;

class Items {
protected:
	string id, title, loanType, rentalFee;
	int copies;
	bool isBorrowed;

public:
	//getters.
	string getId();
	string getTitle();
	string getLoanType();
	string getRentalFee();
	bool isAvalaible();
	int getCopies();
	
	//setters.
	void setId(string id);
	void setTitle(string title);
	void setLoanType(string loanType);
	void setStatus(bool status);
	void addCopies(int copies);
	void setRentalFee(string rentalFee);

	//Constructors
	Items(string id, string title, string loanType, string rentalFee, int copies) {
		this->id = id;
		this->title = title;
		this->loanType = loanType;
		this->rentalFee = rentalFee;
		this->isBorrowed = false;
		this->copies = copies;
	
	}
};


class Movies : public Items {
protected: 
	string genres;

public:
	string getGenres();
	void setGenres(string genres);
	Movies(string id, string title, string loanType,

		string rentalFee, int copies, string genres) : Items(id, title, loanType, rentalFee, copies) {
		this->genres = genres;
	};


};


class DvDs : public Movies {
public:
	DvDs(string id, string title, string loanType,

		string rentalFee, int copies, string genres) : Movies(id, title, loanType, rentalFee, copies, genres) {
	};
};


class Games : public Items {
public: 
	Games(string id, string title, string loanType,

		string rentalFee, int copies) :Items(id, title, loanType, rentalFee, copies) {};

};


