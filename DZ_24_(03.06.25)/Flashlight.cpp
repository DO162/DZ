#include "Flashlight.h"

void FLASHLIGHT::SetNickname(const string& new_nickname) {
	nickname = new_nickname;
}

string FLASHLIGHT::GetNickname() const {
	return nickname;
}
//------------


void FLASHLIGHT::SetColor(const string& new_color) {
	color = new_color;
}

string FLASHLIGHT::GetColor() const {
	return color;
}
//------------


void FLASHLIGHT::SetCompany(const string& new_company) {
	company = new_company;
}

string FLASHLIGHT::GetCompany() const {
	return company;
}
//------------


void FLASHLIGHT::SetPower(int new_power) {
	if (new_power < 50 || new_power > 400) {
		cout << "Incorrect value for power. Please, enter value from 50 to 400 (W).\n";
	}
	else {
		power = new_power;
	}
}

int FLASHLIGHT::GetPower() {
	return power;
}
//------------


void FLASHLIGHT::SetLength(int new_length) {
	if (new_length < 5 || new_length > 20) {
		cout << "Incorrect value for length. Please, enter value from 5 to 20.\n";
	}
	else {
		length = new_length;
	}
}

int FLASHLIGHT::GetLength() {
	return length;
}
//------------


void FLASHLIGHT::SetBattery(int new_battery) {
	if (new_battery < 1000 || new_battery > 3000) {
		cout << "Incorrect value for battery. Please, enter value from 1000 to 3000 (mAh).\n";
	}
	else {
		battery = new_battery;
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