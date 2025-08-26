#include <iostream>
using namespace std;

class MICROWAVE {
private:
	string nickname;
	string color;
	string company;
	int power;
public:
	void SetNickname(const string& nickname);
	string GetNickname() const;


	void SetColor(const string& color);
	string GetColor() const;


	void SetCompany(const string& company);
	string GetCompany() const;


	void SetPower(int power);
	int GetPower();


	void Info();
};