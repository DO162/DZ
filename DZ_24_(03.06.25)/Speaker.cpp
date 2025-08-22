#include "Speaker.h"

void SPEAKER::SetNickname(const string& new_nickname) {
	nickname = new_nickname;
}

string SPEAKER::GetNickname() const {
	return nickname;
}
//------------


void SPEAKER::SetColor(const string& new_color) {
	color = new_color;
}

string SPEAKER::GetColor() const {
	return color;
}
//------------


void SPEAKER::SetCompany(const string& new_company) {
	company = new_company;
}

string SPEAKER::GetCompany() const {
	return company;
}
//------------


void SPEAKER::SetVolume(int new_volume) {
	if (new_volume < 5 || new_volume > 200) {
		cout << "Incorrect value for volume. Please, enter value from 5 to 200 (W).\n";
	}
	else {
		volume = new_volume;
	}
}

int SPEAKER::GetVolume() {
	return volume;
}
//------------


void SPEAKER::SetPower(int new_power) {
	if (new_power < 0 || new_power > 100) {
		cout << "Incorrect value for power. Please, enter value from 0 to 100 (%).\n";
	}
	else {
		power = new_power;
	}
}

int SPEAKER::GetPower() {
	return power;
}
//------------


void SPEAKER::Info() {
	cout << "============================\n";
	cout << "Speaker nickname: " << nickname << "\n";
	cout << "Speaker color: " << color << "\n";
	cout << "Speaker company: " << company << "\n";
	cout << "Speaker volume: " << volume << "\n";
	cout << "Speaker power: " << power << "\n";
	cout << "============================\n";
}