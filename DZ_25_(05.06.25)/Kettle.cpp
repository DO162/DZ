#include "Kettle.h"

void KETTLE::SetNickname(const string& nickname) {
	this->nickname = nickname;
}

string KETTLE::GetNickname() const {
	return nickname;
}
//------------


void KETTLE::SetColor(const string& color) {
	this->color = color;
}

string KETTLE::GetColor() const {
	return color;
}
//------------


void KETTLE::SetCompany(const string& company) {
	this->company = company;
}

string KETTLE::GetCompany() const {
	return company;
}
//------------


void KETTLE::SetPower(int power) {
	if (power < 1000 || power > 3000) {
		cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
	}
	else {
		this->power = power;
	}
}

int KETTLE::GetPower() {
	return power;
}
//------------


void KETTLE::SetRelease_year(int release_year) {
	if (release_year < 2020 || release_year > 2025) {
		cout << "Incorrect value for release_year. Please, enter value from 2020 to 2025.\n";
	}
	else {
		this->release_year = release_year;
	}
}

int KETTLE::GetRelease_year() {
	return release_year;
}
//------------


void KETTLE::Info() {
	cout << "============================\n";
	cout << "Kettle nickname: " << nickname << "\n";
	cout << "Kettle color: " << color << "\n";
	cout << "Kettle company: " << company << "\n";
	cout << "Kettle power: " << power << " W\n";
	cout << "Kettle release year: " << release_year << "\n";
	cout << "============================\n";
}