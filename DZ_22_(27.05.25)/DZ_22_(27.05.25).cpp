#include <iostream>
using namespace std;

class KETTLE {
public:
	string nickname;
	string color;
	string company;
	int power;

	void boil() {
		cout << nickname << " is boiling water...\n";
	}
};


class SPEAKER {
public:
	string nickname;
	string color;
	string company;
	int volume;
	int battery;

	void Play_Music() {
		cout << nickname << " is playing music...\n";
		battery--;
		cout << "Battery: " << battery << "%\n";
	}

	void charge() {
		cout << nickname << " is charging...\n";
		battery = 100;
		cout << "Energy: " << battery << "\n";
	}
};


class TELEPHONE {
public:
	string nickname;
	string color;
	string company;
	int model;
	int battery;

	void call() {
		cout << nickname << " is making a call...\n";
		battery--;
		cout << "Energy: " << battery << "\n";
	}

	void charge() {
		cout << nickname << " is charging...\n";
		battery = 100;
		cout << "Energy: " << battery << "\n";
	}
};


class MICROWAVE {
public:
	string nickname;
	string color;
	string company;
	int power;

	void heat_food() {
		cout << nickname << " is heating food...\n";
	}

	void stop_heating() {
		cout << nickname << " has stopped heating.\n";
	}
};


class FLASHLIGHT {
public:
	string nickname;
	string color;
	string company;
	int power;
	int length;
	int battery;

	void work() {
		cout << nickname << " is shines...\n";
		battery--;
		cout << "Energy: " << battery << "\n";
	}

	void charge() {
		cout << nickname << " is charging...\n";
		battery = 100;
		cout << "Energy: " << battery << "\n";
	}
};

int main()
{
	//-------------
	KETTLE kettle;
	kettle.nickname = "kettle";
	kettle.color = "red";
	kettle.company = "Philips";
	kettle.power = 1500;

	kettle.boil();

	//----------------
	cout << "\n";
	SPEAKER speaker;
	speaker.nickname = "speaker";
	kettle.color = "red";
	kettle.company = "JBL";
	speaker.volume = 50;
	speaker.battery = 100;

	speaker.Play_Music();
	speaker.charge();

	//-------------
	cout << "\n";
	TELEPHONE telephone;
	telephone.nickname = "telephone";
	telephone.color = "black";
	telephone.company = "Apple";
	telephone.model = 14;
	telephone.battery = 100;

	telephone.call();
	telephone.charge();

	//-------------
	cout << "\n";
	MICROWAVE microwave;
	microwave.nickname = "microwave";
	microwave.color = "white";
	microwave.company = "Samsung";
	microwave.power = 2500;

	microwave.heat_food();
	microwave.stop_heating();

	//-------------
	cout << "\n";
	FLASHLIGHT flashlight;
	flashlight.nickname = "flashlight";
	flashlight.color = "yellow";
	flashlight.company = "Xiaomi";
	flashlight.power = 250;
	flashlight.length = 10;
	flashlight.battery = 100;

	flashlight.work();
	flashlight.charge();
}