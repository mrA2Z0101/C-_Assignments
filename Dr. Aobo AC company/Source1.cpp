#include <iostream>
using namespace std;

int main()
{
	int currentHumidity, currentTime, targetTemp; //Declares the variables

	//Input: This section gets the current humidity and time
	cout << "Please enter the current humidity that is outside: ";
	cin >> currentHumidity;

	cout << "Please enter the current time that it is in your area (Use military time. For example 6pm will be 18): ";
	cin >> currentTime;

	//This section determines the current target temperature by looking at the time that the user entered.
	if (currentTime >= 6 && currentTime < 8)
	{
		targetTemp = 76;
	}
	else if (currentTime >= 8 && currentTime < 18)
	{
		targetTemp = 78;
	}
	else if (currentTime >= 18 && currentTime < 21)
	{
		targetTemp = 75;
	}
	else
	{
		targetTemp = 72;
	}

	cout << "The current target temperature is " << targetTemp << "F." << endl;

	//This section adjusts the target temperature based on the humidity rules
	if (currentHumidity > 65 && targetTemp == 78)
	{
		targetTemp = 73;
		cout << "I am changing the temperature to the target temperature of 73F.";
	}
	else if (currentHumidity >= 60 && currentHumidity <= 65 && targetTemp == 78)
	{
		targetTemp = 76;
		cout << "I am changing the temperature to the target temperature of 76F.";
	}
	else if (currentHumidity < 60 && targetTemp == 76)
	{
		targetTemp = 78;
		cout << "I am changing the temperature to the target temperature of 78F.";
	}

	return 0;
}