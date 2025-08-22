#include "Kettle.h"

void KETTLE::SetNickname(const string& new_nickname) {
	nickname = new_nickname;
}

string KETTLE::GetNickname() const {
	return nickname;
}
//------------


void KETTLE::SetColor(const string& new_color) {
	color = new_color;
}

string KETTLE::GetColor() const {
	return color;
}
//------------


void KETTLE::SetCompany(const string& new_company) {
	company = new_company;
}

string KETTLE::GetCompany() const {
	return company;
}
//------------


void KETTLE::SetPower(int new_power) {
	if (new_power < 1000 || new_power > 3000) {
		cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
	}
	else {
		power = new_power;
	}
}

int KETTLE::GetPower() {
	return power;
}
//------------


void KETTLE::SetRelease_year(int new_release_year) {
	if (new_release_year < 2020 || new_release_year > 2025) {
		cout << "Incorrect value for release_year. Please, enter value from 2020 to 2025.\n";
	}
	else {
		release_year = new_release_year;
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