// schoolManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Account {
	string username;
	string password;
};

struct Student {
	int id;
	string firstName;
	string lastName;
	int classNum;
	int yearGroup;
	string parentName;
	string parentEmail;
	string parentGender;
	Account accountDetails;
};

struct Admin {
	string firstName;
	string lastName;
	string email;
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

//Janelle's code start
void signIn() {
	cout << "Enter Username : ";
	//cin >> userName;
}
//Janelle's code end

//Janelle's code start
void adminSignUp(struct Admin* a) {
	ofstream adminFile;//open admin file
	adminFile.open("admins.csv", ios::app);

	cout << "Admin Sign Up" << endl;
	cout << "***********************" << endl;
	cout << "Enter First Name : ";
	cin >> a->firstName;
	cout << "Enter Last Name : ";
	cin >> a->lastName;
	cout << "Enter email : ";
	cin.ignore();
	getline(cin, a->email);
	cout << "Enter Username : ";
	cin >> a->accountDetails.username;
	cout << "Enter Passsword : ";
	cin >> a->accountDetails.password;

	adminFile << a->firstName << "," << a->lastName << "," << a->email << "," << a->accountDetails.username  << "," << a->accountDetails.password; //writing to file

	adminFile.close();//close admin file
}
//Janelle's code end

//Janelle's code start
void adminSignIn(struct Admin* a) {
	ifstream adminFile;//open admin file
	string username, password, line;
	string fn, ln, em, un, pw;
	adminFile.open("admins.csv", ios::in);

	cin.ignore();
	while (getline(adminFile, line)) {
		//cout << line;
		istringstream ss(line);
		//getline(linestream, fn,',');
		ss >> fn >> ln >> em >> un >> pw;
		cout << ln;
		//if (username == ln) {
		//	cout << "Enter Passsword : ";
		//}
		//else {
		//	cout << "no";
		//}
	}
	/*cout << "Enter Passsword : ";*/
	/*cin >> password;*/

	//adminFile << a->firstName << "," << a->lastName << "," << a->email << "," << a->accountDetails.username << "," << a->accountDetails.password; //writing to file

	cout << "Admin Sign In" << endl;
	cout << "***********************" << endl;
	cout << "Enter Username : ";
	cin >> username;

	adminFile.close();//close admin file
}
//Janelle's code end

//Janelle's code start
void signUpMenu(struct Admin* a) {
	int menuOption = 0;

	schoolTitle();

	while (menuOption != 4) {
		cout << "\nWhat is your position type?";
		cout << "\n1. Teacher" << endl;
		cout << "2. Admin" << endl;
		cout << "3. Parent" << endl;
		cout << "4. Student" << endl;
		cout << "\nEnter number for chosen option : ";
		cin >> menuOption;
		cout << "\n";

		switch (menuOption) {
		case 1:
			adminSignIn(a);
			break;
		case 2:
			adminSignUp(a);
			break;
		case 3:
			break;
		case 4:
			break;

		}
	}
}
//Janelle's code end

void TeacherSignUp() {
	schoolTitle();
	/*cout << "Enter First Name : ";
	cin >>  
	cout << "Enter Username : ";*/

}

int main()
{
	//Janelle's Code start
	struct Student stdnt[6];
	struct Student* s = stdnt;
	struct Admin admn;
	struct Admin* adminPointer = &admn;
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
			//signIn();
			adminSignIn(adminPointer);
			break;
		case 2:
			signUpMenu(adminPointer);
			break;
		case 3:
			//terminate program
			return 0;
		}
	}
	//Janelle's Code end
}