#include "Microwave.h"

void MICROWAVE::SetNickname(const string& new_nickname) {
	nickname = new_nickname;
}

string MICROWAVE::GetNickname() const {
	return nickname;
}
//------------


void MICROWAVE::SetColor(const string& new_color) {
	color = new_color;
}

string MICROWAVE::GetColor() const {
	return color;
}
//------------


void MICROWAVE::SetCompany(const string& new_company) {
	company = new_company;
}

string MICROWAVE::GetCompany() const {
	return company;
}
//------------


void MICROWAVE::SetPower(int new_power) {
	if (new_power < 1000 || new_power > 3500) {
		cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
	}
	else {
		power = new_power;
	}
}

int MICROWAVE::GetPower() {
	return power;
}
//------------


void MICROWAVE::Info() {
	cout << "============================\n";
	cout << "Microwave's nickname: " << nickname << endl;
	cout << "Microwave's color: " << color << endl;
	cout << "Microwave's company: " << company << endl;
	cout << "Microwave's power: " << power << " (W)" << endl;
	cout << "============================\n";
}