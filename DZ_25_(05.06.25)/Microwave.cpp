#include "Microwave.h"

void MICROWAVE::SetNickname(const string& nickname) {
	this->nickname = nickname;
}

string MICROWAVE::GetNickname() const {
	return nickname;
}
//------------


void MICROWAVE::SetColor(const string& color) {
	this->color = color;
}

string MICROWAVE::GetColor() const {
	return color;
}
//------------


void MICROWAVE::SetCompany(const string& company) {
	this->company = company;
}

string MICROWAVE::GetCompany() const {
	return company;
}
//------------


void MICROWAVE::SetPower(int power) {
	if (power < 1000 || power > 3500) {
		cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
	}
	else {
		this->power = power;
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