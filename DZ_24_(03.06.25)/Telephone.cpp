#include "Telephone.h"

void TELEPHONE::SetNickname(const string& new_nickname) {
	nickname = new_nickname;
}

string TELEPHONE::GetNickname() const {
	return nickname;
}
//------------


void TELEPHONE::SetColor(const string& new_color) {
	color = new_color;
}

string TELEPHONE::GetColor() const {
	return color;
}
//------------


void TELEPHONE::SetCompany(const string& new_company) {
	company = new_company;
}

string TELEPHONE::GetCompany() const {
	return company;
}
//------------


void TELEPHONE::SetModel(int new_model) {
	if (new_model < 12 || new_model > 16) {
		cout << "Incorrect value for model. Please, enter value from 12 to 16.\n";
	}
	else {
		model = new_model;
	}
}

int TELEPHONE::GetModel() {
	return model;
}
//------------


void TELEPHONE::SetBattery(int new_battery) {
	if (new_battery < 3500 || new_battery > 7000) {
		cout << "Incorrect value for battery. Please, enter value from 3500 to 7000 (mAh).\n";
	}
	else {
		battery = new_battery;
	}
}

int TELEPHONE::GetBattery() {
	return battery;
}
//------------


void TELEPHONE::Info() {
	cout << "============================\n";
	cout << "Telephone nickname: " << nickname << "\n";
	cout << "Telephone color: " << color << "\n";
	cout << "Telephone company: " << company << "\n";
	cout << "Telephone model: " << model << "\n";
	cout << "Telephone battery: " << battery << " (mAh)\n";
	cout << "============================\n";
}