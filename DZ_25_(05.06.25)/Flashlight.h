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
	void SetNickname(const string& nickname);
	string GetNickname() const;


	void SetColor(const string& color);
	string GetColor() const;


	void SetCompany(const string& company);
	string GetCompany() const;


	void SetPower(int power);
	int GetPower();


	void SetLength(int length);
	int GetLength();


	void SetBattery(int battery);
	int GetBattery();


	void Info();
};