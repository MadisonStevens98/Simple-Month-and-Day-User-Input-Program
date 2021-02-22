#include <iostream>
using namespace std;

int main() {
	int day, month;	//declaring the day and month variables, by making these ints any double inputted will 
					//automatically convert to ints, thus checking for doubles being entered on its own

	cout << "Enter a month (use 1 for January, etc.) " << endl; //printing this statement for the user to read

	cin >> month;	//taking user input and putting it into the month variable

	if (month < 1 || month > 12) {	//this if statement is checking if the month is a valid number, if a 
									//decimal above or below 1-12 is entered this if stops it, if a decimal 
									//between 1-12 is entered (i.e. 1.2) the .2 is used for the day variable,
									//which will also throw a false in its if statement

		cout << "You have entered an invalid number or a decimal for the month, please try again" << endl;
		system("pause");
	}

	cout << "Enter a day of the month: " << endl;	//prompting for day of month input

	cin >> day;			//taking user input and putting it in the day variable

	if (day < 1 || day > 31) { //this if checks if the day is valid
		cout << "You have entered an invalid number for the day, or a decimal for the month, please try again" << endl;
		system("pause");
	}
	else if (month == 2 && day > 28) {
		cout << "You have entered Febuary for your month, which only has 28 days making your day input invalid." << endl;
		system("pause");
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11 && day < 30) {
		cout << "You have entered a month that contains only 30 days, making you're day input invalid." << endl;
		system("pause");
	}
	system("Pause");
	return 0;
}

