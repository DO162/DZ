#include <iostream>
using namespace std;

class KETTLE {
private:
	string nickname;
	string color;
	string company;
	int power;
	int release_year;
public:
	void SetNickname(const string& new_nickname) {
		nickname = new_nickname;
	}

	string GetNickname() const {
		return nickname;
	}


	void SetColor(const string& new_color) {
		color = new_color;
	}

	string GetColor() const {
		return color;
	}
	
	
	void SetCompany(const string& new_company) {
		company = new_company;
	}

	string GetCompany() const {
		return company;
	}

	//---------------------------------

	void SetPower(int new_power) {
		if (new_power < 1000 || new_power > 3000) {
			cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
		}
		else {
			power = new_power;
		}
	}

	int GetPower() {
		return power;
	}


	void SetRelease_year(int new_release_year) {
		if (new_release_year < 2020 || new_release_year > 2025) {
			cout << "Incorrect value for release_year. Please, enter value from 2020 to 2025.\n";
		}
		else {
			release_year = new_release_year;
		}
	}

	int GetRelease_year() {
		return release_year;
	}
};


class SPEAKER {
private:
	string nickname;
	string color;
	string company;
	int volume;
	int power;
public:
	void SetNickname(const string& new_nickname) {
		nickname = new_nickname;
	}

	string GetNickname() const {
		return nickname;
	}


	void SetColor(const string& new_color) {
		color = new_color;
	}

	string GetColor() const {
		return color;
	}


	void SetCompany(const string& new_company) {
		company = new_company;
	}

	string GetCompany() const {
		return company;
	}

	//---------------------------------

	void SetVolume(int new_volume) {
		if (new_volume < 5 || new_volume > 200) {
			cout << "Incorrect value for volume. Please, enter value from 5 to 200 (W).\n";
		}
		else {
			volume = new_volume;
		}
	}

	int GetVolume() {
		return volume;
	}


	void SetPower(int new_power) {
		if (new_power < 0 || new_power > 100) {
			cout << "Incorrect value for power. Please, enter value from 0 to 100 (%).\n";
		}
		else {
			power = new_power;
		}
	}

	int GetPower() {
		return power;
	}
};


class TELEPHONE {
private:
	string nickname;
	string color;
	string company;
	int model;
	int battery;
public:
	void SetNickname(const string& new_nickname) {
		nickname = new_nickname;
	}

	string GetNickname() const {
		return nickname;
	}


	void SetColor(const string& new_color) {
		color = new_color;
	}

	string GetColor() const {
		return color;
	}


	void SetCompany(const string& new_company) {
		company = new_company;
	}

	string GetCompany() const {
		return company;
	}

	//---------------------------------

	void SetModel(int new_model) {
		if (new_model < 12 || new_model > 16) {
			cout << "Incorrect value for model. Please, enter value from 12 to 16.\n";
		}
		else {
			model = new_model;
		}
	}

	int GetModel() {
		return model;
	}


	void SetBattery(int new_battery) {
		if (new_battery < 3500 || new_battery > 7000) {
			cout << "Incorrect value for battery. Please, enter value from 3500 to 7000 (mAh).\n";
		}
		else {
			battery = new_battery;
		}
	}

	int GetBattery() {
		return battery;
	}
};


class MICROWAVE {
private:
	string nickname;
	string color;
	string company;
	int power;
public:
	void SetNickname(const string& new_nickname) {
		nickname = new_nickname;
	}

	string GetNickname() const {
		return nickname;
	}


	void SetColor(const string& new_color) {
		color = new_color;
	}

	string GetColor() const {
		return color;
	}


	void SetCompany(const string& new_company) {
		company = new_company;
	}

	string GetCompany() const {
		return company;
	}

	//---------------------------------

	void SetPower(int new_power) {
		if (new_power < 1000 || new_power > 3000) {
			cout << "Incorrect value for power. Please, enter value from 1000 to 3000 (W).\n";
		}
		else {
			power = new_power;
		}
	}

	int GetPower() {
		return power;
	}
};


class FLASHLIGHT {
private:
	string nickname;
	string color;
	string company;
	int power;
	int length;
	int battery;
public:
	void SetNickname(const string& new_nickname) {
		nickname = new_nickname;
	}

	string GetNickname() const {
		return nickname;
	}


	void SetColor(const string& new_color) {
		color = new_color;
	}

	string GetColor() const {
		return color;
	}


	void SetCompany(const string& new_company) {
		company = new_company;
	}

	string GetCompany() const {
		return company;
	}

	//---------------------------------

	void SetPower(int new_power) {
		if (new_power < 50 || new_power > 400) {
			cout << "Incorrect value for power. Please, enter value from 50 to 400 (W).\n";
		}
		else {
			power = new_power;
		}
	}

	int GetPower() {
		return power;
	}


	void SetLength(int new_length) {
		if (new_length < 5 || new_length > 20) {
			cout << "Incorrect value for length. Please, enter value from 5 to 20.\n";
		}
		else {
			length = new_length;
		}
	}

	int GetLength() {
		return length;
	}


	void SetBattery(int new_battery) {
		if (new_battery < 1000 || new_battery > 3000) {
			cout << "Incorrect value for battery. Please, enter value from 1000 to 3000 (mAh).\n";
		}
		else {
			battery = new_battery;
		}
	}

	int GetBattery() {
		return battery;
	}
};

int main()
{
	//-------------
	KETTLE kettle;
	
	kettle.SetNickname("kettle");
	cout << "Kettle nickname: " << kettle.GetNickname() << "\n";

	kettle.SetColor("red");
	cout << "Kettle color: " << kettle.GetColor() << "\n";

	kettle.SetCompany("Philips");
	cout << "Kettle company: " << kettle.GetCompany() << "\n";

	kettle.SetPower(1500);
	cout << "Kettle power: " << kettle.GetPower() << " W\n";

	kettle.SetRelease_year(2023);
	cout << "Kettle release year: " << kettle.GetRelease_year() << "\n";


	//-------------
	cout << "\n";
	SPEAKER speaker;
	
	speaker.SetNickname("speaker");
	cout << "Speaker nickname: " << speaker.GetNickname() << "\n";

	speaker.SetColor("red");
	cout << "Speaker color: " << speaker.GetColor() << "\n";
	
	speaker.SetCompany("JBL");
	cout << "Speaker company: " << speaker.GetCompany() << "\n";

	speaker.SetVolume(50);
	cout << "Speaker volume: " << speaker.GetVolume() << "\n";

	speaker.SetPower(80);
	cout << "Speaker power: " << speaker.GetPower() << "\n";
	

	//-------------
	cout << "\n";
	TELEPHONE telephone;
	
	telephone.SetNickname("telephone");
	cout << "Telephone nickname: " << telephone.GetNickname() << "\n";

	telephone.SetColor("black");
	cout << "Telephone color: " << telephone.GetColor() << "\n";

	telephone.SetCompany("Apple");
	cout << "Telephone company: " << telephone.GetCompany() << "\n";

	telephone.SetModel(14);
	cout << "Telephone model: " << telephone.GetModel() << "\n";

	telephone.SetBattery(4500);
	cout << "Telephone battery: " << telephone.GetBattery() << "\n";


	//-------------
	cout << "\n";
	MICROWAVE microwave;
	
	microwave.SetNickname("microwave");
	cout << "Microwave nickname: " << microwave.GetNickname() << "\n";

	microwave.SetColor("white");
	cout << "Microwave color: " << microwave.GetColor() << "\n";

	microwave.SetCompany("Samsung");
	cout << "Microwave company: " << microwave.GetCompany() << "\n";

	microwave.SetPower(1200);
	cout << "Microwave power: " << microwave.GetPower() << " W\n";


	//-------------
	cout << "\n";
	FLASHLIGHT flashlight;
	
	flashlight.SetNickname("flashlight");
	cout << "Flashlight nickname: " << flashlight.GetNickname() << "\n";

	flashlight.SetColor("yellow");
	cout << "Flashlight color: " << flashlight.GetColor() << "\n";

	flashlight.SetCompany("Xiaomi");
	cout << "Flashlight company: " << flashlight.GetCompany() << "\n";

	flashlight.SetPower(200);
	cout << "Flashlight power: " << flashlight.GetPower() << " W\n";

	flashlight.SetLength(15);
	cout << "Flashlight length: " << flashlight.GetLength() << " cm\n";

	flashlight.SetBattery(2000);
	cout << "Flashlight battery: " << flashlight.GetBattery() << " mAh\n";
}