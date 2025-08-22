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
	void SetNickname(const string& new_nickname);
	string GetNickname() const;


	void SetColor(const string& new_color);
	string GetColor() const;


	void SetCompany(const string& new_company);
	string GetCompany() const;

	
	void SetPower(int new_power);
	int GetPower();


	void SetRelease_year(int new_release_year);
	int GetRelease_year();


	void Info();
};