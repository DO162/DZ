#include <iostream>
using namespace std;

class FLASHLIGHT {
private:
	string nickname;
	string color;
	string company;
	int power;
	int length;
	int battery;
public:
	void SetNickname(const string& new_nickname);
	string GetNickname() const;


	void SetColor(const string& new_color);
	string GetColor() const;


	void SetCompany(const string& new_company);
	string GetCompany() const;


	void SetPower(int new_power);
	int GetPower();


	void SetLength(int new_length);
	int GetLength();


	void SetBattery(int new_battery);
	int GetBattery();


	void Info();
};