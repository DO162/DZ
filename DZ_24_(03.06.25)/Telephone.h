#include <iostream>
using namespace std;

class TELEPHONE {
private:
	string nickname;
	string color;
	string company;
	int model;
	int battery;
public:
	void SetNickname(const string& new_nickname);
	string GetNickname() const;


	void SetColor(const string& new_color);
	string GetColor() const;


	void SetCompany(const string& new_company);
	string GetCompany() const;


	void SetModel(int new_model);
	int GetModel();


	void SetBattery(int new_battery);
	int GetBattery();


	void Info();
};