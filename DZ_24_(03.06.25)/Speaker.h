#include <iostream>
using namespace std;

class SPEAKER {
private:
	string nickname;
	string color;
	string company;
	int volume;
	int power;
public:
	void SetNickname(const string& new_nickname);
	string GetNickname() const;


	void SetColor(const string& new_color);
	string GetColor() const;


	void SetCompany(const string& new_company);
	string GetCompany() const;
	

	void SetVolume(int new_volume);
	int GetVolume();


	void SetPower(int new_power);
	int GetPower();


	void Info();
};