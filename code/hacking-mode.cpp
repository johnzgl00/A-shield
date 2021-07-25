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

void show_recon_attack_btns () {
	cout << colorRed + "|-----------------|\n";
	cout << colorRed + "|   Attack Mode   |\n";
	cout << colorRed + "|-----------------|\n";
	cout << "\n";
	cout << colorBlue+ "|-----------------|\n";
	cout << colorBlue+ "|    Recon Mode   |\n";
	cout << colorBlue+ "|-----------------|\n";
	cout << noColor;
}

int main() {
	show_recon_attack_btns();
}
