#include <iostream>

#include <conio.h>
using namespace std;
char yorn;
int main()
{
	cout << "welcome to the Temperature converter\n"<<"***********************************"<< endl;
	do {
	cout << "For Fahrenheit to Celsius press 1\n" <<"-----------------------------\n" << "For Celsius to Fahrenheit  press 2\n-----------------------------\n: ";
	int NumberPress;
	
	
	while (true) {
		cin >> NumberPress;
		if (NumberPress == 1 || NumberPress == 2) {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "please chose 1 or 2 \n";

		}
	}
		double F, C;
		if (NumberPress == 1) {
			cout << "enter the Fahrenheit number\n";
			cin >> F;
			double Process1 = (F - 32) / 1.8;
			cout <<"the Celsius Number is : " << Process1;
		}
		else if (NumberPress == 2) {
			cout << "enter the Celsius number\n";
			cin >> C;
			double Process2 = (C * 1.8) + 32;
			cout << "the Fahrenheit number is : " << Process2;
		}
		cout << "\n you want to do another operation? (y/n)\n";
		
		
		while (true) {
			cin >> yorn;
			if (yorn == 'y' || yorn == 'n') {
				break;
			}
			else {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "please chose y or n \n";

			}
		}
		getchar();
		  system("cls"); 
			
	} while (yorn == 'y');

	cout << "\n\n\n		good bye :)		\n\n\n\n";


		return 0;
	}

	
