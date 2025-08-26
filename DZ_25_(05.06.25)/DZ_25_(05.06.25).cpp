#include "Kettle.h"
#include "Speaker.h"
#include "Telephone.h"
#include "Microwave.h"
#include "Flashlight.h"


int main()
{
	KETTLE kettle;

	kettle.SetNickname("kettle");
	kettle.SetColor("red");
	kettle.SetCompany("Philips");
	kettle.SetPower(1500);
	kettle.SetRelease_year(2023);

	kettle.Info();

	//-------------
	cout << "\n\n";
	SPEAKER speaker;

	speaker.SetNickname("speaker");
	speaker.SetColor("red");
	speaker.SetCompany("JBL");
	speaker.SetVolume(50);
	speaker.SetPower(80);

	speaker.Info();

	//-------------
	cout << "\n\n";
	TELEPHONE telephone;

	telephone.SetNickname("telephone");
	telephone.SetColor("black");
	telephone.SetCompany("Apple");
	telephone.SetModel(14);
	telephone.SetBattery(4500);

	telephone.Info();

	//-------------
	cout << "\n\n";
	MICROWAVE microwave;

	microwave.SetNickname("microwave");
	microwave.SetColor("white");
	microwave.SetCompany("Samsung");
	microwave.SetPower(1200);

	microwave.Info();

	//-------------
	cout << "\n\n";
	FLASHLIGHT flashlight;

	flashlight.SetNickname("flashlight");
	flashlight.SetColor("yellow");
	flashlight.SetCompany("Xiaomi");
	flashlight.SetPower(200);
	flashlight.SetLength(15);
	flashlight.SetBattery(2000);

	flashlight.Info();
}