
#include "text_interface.h"

#include "items.h"
#include "accounts_management.h"



using namespace std;
class Controller {
private: 
	
	

public:
	Controller() {};
	~Controller() {};
	
	void start();
	string getInput();
	
	void function1();
	void function2();
	void function3() {};
	void function4() {};
	void function5() {};
	void function6() {};
	void function7() {};
	void function8() {};
	void function9() {};
	void function10() {};
	
};


string Controller::getInput() {
	string input;
	getline(cin, input);
	return input;
}

void Controller::function1() {
	int num = getSelection(1);
	if (num == 1) {

		
	}
	else if (num == 2) {

		
	}
	else if (num == 3) {

		
	}
}
void Controller::function2() {
	int num = getSelection(2);
	if (num == 1){
		addCustomer();

	}
	

}



void Controller::start() {
	
	while (true) {

		printInterface();
		string ans = getInput();
		if (ans == "Exit") {
			break;
		}
		else if (ans == "1") {
		
			function1();
			
		}
		else if (ans == "2") {
			
			function2();
			
		}
		else if (ans == "3") {
			function3();
		
		}
		else if (ans == "4") {
			function4();
		
		}
		else if (ans == "5") {
			function5();
		
		}
		else if (ans == "6") {
			function6();
			
		}
		else if (ans == "7") {
			function7();
			
		}
		else if (ans == "8") {
			function8();
			
		}
		else if (ans == "9") {
			function9();
		}
		else if (ans == "10") {
			function10();
		}
		else {
			cout << "WRONG INPUT. RE-ENTER PLEASE!" << endl;
			cout << endl;
		}
		

	}
	printExit();
};