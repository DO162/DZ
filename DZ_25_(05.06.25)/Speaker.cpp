#include "Speaker.h"

void SPEAKER::SetNickname(const string& nickname) {
	this->nickname = nickname;
}

string SPEAKER::GetNickname() const {
	return nickname;
}
//------------


void SPEAKER::SetColor(const string& color) {
	this->color = color;
}

string SPEAKER::GetColor() const {
	return color;
}
//------------


void SPEAKER::SetCompany(const string& company) {
	this->company = company;
}

string SPEAKER::GetCompany() const {
	return company;
}
//------------


void SPEAKER::SetVolume(int volume) {
	if (volume < 5 || volume > 200) {
		cout << "Incorrect value for volume. Please, enter value from 5 to 200 (W).\n";
	}
	else {
		this->volume = volume;
	}
}

int SPEAKER::GetVolume() {
	return volume;
}
//------------


void SPEAKER::SetPower(int power) {
	if (power < 0 || power > 100) {
		cout << "Incorrect value for power. Please, enter value from 0 to 100 (%).\n";
	}
	else {
		this->power = power;
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