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
	void SetNickname(const string& nickname);
	string GetNickname() const;


	void SetColor(const string& color);
	string GetColor() const;


	void SetCompany(const string& company);
	string GetCompany() const;


	void SetPower(int power);
	int GetPower();


	void SetRelease_year(int release_year);
	int GetRelease_year();


	void Info();
};