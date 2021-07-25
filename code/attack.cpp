#include <iostream>
#include <string>
#include <unistd.h>
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

int main () {
	cout << colorMagenta + "|-----------------|\n";
	cout << colorMagenta + "|   H-Ping-3 (1)  |\n";
	cout << colorMagenta + "|-----------------|\n";
	cout << "\n";
	cout << colorRed +     "|-----------------|\n";
	cout << colorRed +     "|  Air-Crack (2)  |\n";
	cout << colorRed +     "|-----------------|\n";
	cout << "\n";
	cout << colorGreen +   "|-----------------|\n";
	cout << colorGreen +   "|    Wifite (3)   |\n";
	cout << colorGreen +   "|-----------------|\n";
	cout << "\n";
	cout << colorBlue +    "|-----------------|\n";
	cout << colorBlue +    "|  Metasploit (4) |\n";
	cout << colorBlue +    "|-----------------|\n";
	
	cout << colorYellow + "Option: " + noColor ;
	getline(cin, command);
	if (command == "1") {
		cout << colorMagenta + "Hping3 attack selected";
		sleep(1.5);
		system("clear");
	}
	else if (command == "2") {
		cout << colorRed + "Air-Crack attack selected";
		sleep(1.5);
		system("clear");
	}
	else if (command == "3") {
		cout << colorGreen + "Wifite attack selected";
		sleep(1.5);
		system("clear");
	}
	else if (command == "4") {
		cout << colorBlue + "Metasploit attack selected";
		sleep(1.5);
		system("clear");
	}
	else {
		exit(1);
	}
}
