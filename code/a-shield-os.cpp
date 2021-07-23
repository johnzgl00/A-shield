#include <iostream>;
#include <string>;
#include <stdlib.h>;
using namespace std;

string command ;

void start_msg() {
	cout << "****************************\n";
	cout << "*********STARTING***********\n";
	cout << "****************************\n";
	cout << "\n";
}

void get_command_msg() {
	cout << "A-shield@user(/): ";
	getline(cin, command);
}

void check_command() {
	if (command == "whoami") {
		cout << "user";
	}
	else if (command == "device -id") {
		cout << "0x65";
	}
	else if (command == "power-down") {
		cout << "Stopping proccesses...";
		exit(1);
	}
	else {
		cout << "Err: command not found (code:404)";
	}
	cout << "\n";
	get_command_msg();
}

int main() {
	start_msg();
	get_command_msg();
	while (true) {
		check_command();
	}
}