/*
Bijan Fazeli
Lab 03
*/

#include <iostream>
#include <iomanip>

using namespace std;

void askUser(double& well, double& ill, double& dead, int& week);

void askUser(double& well, double& ill, double& dead, int& week) 
{
	cout << "Enter the initial probability of being well: ";
	cin >> well;
	cout << "Enter the initial probability of being ill: ";
	cin >> ill;
	cout << "Enter the initial probability of being dead: ";
	cin >> dead;
	cout << "Enter the number of weeks: ";
	cin >> week;
}

int main(int argc, const char * argv[]) 
{
	cout << "Welcome to the Bad Luck Machine." << endl;
	cout << "Here you will be asked to enter the patient's info "
		<< "\nand revieve a prognosis of his/her status." << endl;

	// Getting user inputs and storing them into variables, 'well, ill, dead'
	double well, ill, dead;
	int week;
	askUser(well, ill, dead, week);

	// Re-prompt user for a new set of values if the values do not match the constraints
	bool done = false;
	
	while (!done) 
	{
		if (well < 0 || ill < 0 || dead < 0 || (well + ill + dead >= 1)) 
		{
			askUser(well, ill, dead, week);
		}
		else done = true;
	}

	// Logic process
}
