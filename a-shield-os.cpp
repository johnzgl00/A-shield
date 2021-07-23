#include <iostream>;
#include <string>;
#include <stdlib.h>;
using namespace std;

//Colors
string colorRed = "\e[1;31m";
string colorYellow = "\e[1;33m";
string colorGreen = "\e[1;32m";
string noColor = "\e[0m";
string colorMagenta = "\e[1;35m";
string colorCyan = "\e[1;36m";
string colorBlue = "\e[1;34m";
//Variables
string command ;
string username = "A-shield";
string deviceId = "0x01";
string platform = "Raspberry";

void start_msg() {
	cout << "****************************\n";
	cout << "*********STARTING***********\n";
	cout << "****************************\n";
	cout << "\n";
}

void get_command_msg() {
	cout << colorYellow + "A-shield" + colorBlue + "@" + colorYellow + "user" + colorRed + "(/): " + noColor;
	getline(cin, command);
}

void check_command() {
	if (command == "whoami") {
		cout << "username: " + username;
	}
	else if (command == "") {
		//Do nothing
	}
	else if (command == "device -id") {
		cout << "Device Info\n";
		cout << "	id: " + deviceId + "\n";
		cout << "	platform: " + platform;
	}
	else if (command == "power-down") {
		cout << "Stopping proccesses...";
		exit(1);
	}
	else if (command == "proccess --kill") {
		cout << "Killing proccesses...";
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
