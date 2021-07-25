#include <iostream>
#include <string>
using namespace std;

//Colors
string colorRed = "\e[1;31m";
string colorYellow = "\e[1;33m";
string colorGreen = "\e[1;32m";
string noColor = "\e[0m";
string colorMagenta = "\e[1;35m";
string colorCyan = "\e[1;36m";
string colorBlue = "\e[1;34m";

//Vars
string command;

int main() {
	cout << colorRed + "|---------------------|\n";
	cout << colorRed + "|    Attack Mode (1)  |\n";
	cout << colorRed + "|---------------------|\n";
	cout << "\n";
	cout << colorBlue+ "|---------------------|\n";
	cout << colorBlue+ "|    Recon Mode (2)   |\n";
	cout << colorBlue+ "|---------------------|\n";
	cout << noColor;
	
	cout << colorYellow + "Option: " + noColor;
	getline(cin, command);

	if (command == "1") {
		cout << colorRed + "Attack Mode Selected\n";
	}
	else if (command == "2") {
		cout << colorBlue + "Recon Mode Selected\n";
	}else if (command == "exit") {
		exit(1);
	}
}
