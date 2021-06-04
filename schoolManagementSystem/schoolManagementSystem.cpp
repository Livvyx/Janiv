// schoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Account {
	string username;
	string password;
};

struct Student {
	string studentName;
	int classNum;
	int yearGroup;
	string parentName;
	string parentEmail;
	string parentGender;
	Account accountDetails;
};

//Written By Liv :)
void starLine(int numOfStars) { // Output for Star Lines
	int i;
		for (i = 0; i < numOfStars; i++) {
			cout << "*";
		}
		cout << endl;
}

//Written By Livvy :)
void schoolTitle() {
	cout << "\n\t\t\tEVABEE SCHOOL" << endl;//Title output
	starLine(66);
}

//Written By Livvy
void introScreen(){
	//Contact Output
	cout << "<-Contact->" << endl;
	cout << "Phone: 08-947-3759" << endl;
	cout << "Email: Evabee.school@gmail.co.nz" << endl;
	cout << "Address: 678 Lansley Road, 8908, Wellington" << endl;
	starLine(66); // void Structure
	//Events Output
	cout << "<-Upcoming Events->" << endl;
	cout << "1/06/2021: Pride Month(SchoolLunch)" << endl;
	cout << "10/06/2021: Sports Day" << endl;
	cout << "15/06/2021: Sports Day Prize Giving" << endl;
	cout << "22/06/2021: Big Assembly" << endl;
	starLine(66); //void structure
	//Term Output
	cout << "<-Term Dates->" << endl;
	cout << "1/02/2021: Start Of Term 1" << endl;
	cout << "1/05/2021: Start Of Term 2" << endl;
	cout << "1/08/2021: Start Of Term 3" << endl;
	cout << "1/10/2021: Start Of Term 4" << endl;
	starLine(66); //void structure


}

//Janelle's code
void signIn() {
	cout << "Enter Username : ";
	//cin >> userName;
}

int main()
{
	//Janelle's Code start
	int menuOption = 0;

	schoolTitle();//calling the school name
	introScreen();

	while (menuOption != 3) {
		cout << "\n1. Sign In" << endl;
		cout << "2. Sign Up" << endl;
		cout << "\nEnter number for chosen option : ";
		cin >> menuOption;
		cout << "\n";
		
		switch (menuOption) {
		case 1:
			signIn();
			break;
		case 2:
			//sign up;
			break;
		case 3:
			//terminate program
			return 0;
		}
	}
	//Janelle's Code end
}