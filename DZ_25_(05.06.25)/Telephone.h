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
	void SetNickname(const string& nickname);
	string GetNickname() const;


	void SetColor(const string& color);
	string GetColor() const;


	void SetCompany(const string& company);
	string GetCompany() const;


	void SetModel(int model);
	int GetModel();


	void SetBattery(int battery);
	int GetBattery();


	void Info();
};