
#include <iostream>;
#include <string>;
#include "text_interface.h";

using namespace std;
class Controller {

public:
	Controller() {};
	~Controller() {};
	
	void start();
	string getInput();
	
	void function1();
	void function2() {};
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
	char input[100];
	cin.getline(input, 100);
	return (string) input;
}

void Controller::function1() {
	printSubMenu(1);


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
			cout << "Wrong Input. Re-enter please!" << endl;
		}
		cin.get();

	}
};