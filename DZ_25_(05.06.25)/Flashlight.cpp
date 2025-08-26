#include "Flashlight.h"

void FLASHLIGHT::SetNickname(const string& nickname) {
	this->nickname = nickname;
}

string FLASHLIGHT::GetNickname() const {
	return nickname;
}
//------------


void FLASHLIGHT::SetColor(const string& color) {
	this->color = color;
}

string FLASHLIGHT::GetColor() const {
	return color;
}
//------------


void FLASHLIGHT::SetCompany(const string& company) {
	this->company = company;
}

string FLASHLIGHT::GetCompany() const {
	return company;
}
//------------


void FLASHLIGHT::SetPower(int power) {
	if (power < 50 || power > 400) {
		cout << "Incorrect value for power. Please, enter value from 50 to 400 (W).\n";
	}
	else {
		this->power = power;
	}
}

int FLASHLIGHT::GetPower() {
	return power;
}
//------------


void FLASHLIGHT::SetLength(int length) {
	if (length < 5 || length > 20) {
		cout << "Incorrect value for length. Please, enter value from 5 to 20.\n";
	}
	else {
		this->length = length;
	}
}

int FLASHLIGHT::GetLength() {
	return length;
}
//------------


void FLASHLIGHT::SetBattery(int battery) {
	if (battery < 1000 || battery > 3000) {
		cout << "Incorrect value for battery. Please, enter value from 1000 to 3000 (mAh).\n";
	}
	else {
		this->battery = battery;
	}
}

int FLASHLIGHT::GetBattery() {
	return battery;
}
//------------


void FLASHLIGHT::Info() {
	cout << "============================\n";
	cout << "Flashlight's nickname: " << nickname << endl;
	cout << "Flashlight's color: " << color << endl;
	cout << "Flashlight's company: " << company << endl;
	cout << "Flashlight's power: " << power << " (W)" << endl;
	cout << "Flashlight's length: " << length << " (cm)" << endl;
	cout << "Flashlight's battery: " << battery << " (mAh)" << endl;
	cout << "============================\n";
}