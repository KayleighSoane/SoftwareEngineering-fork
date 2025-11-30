// 24-Challenge3-YearRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "Record.h"
using namespace std;

YearRecord COMP(0, 0);

void select();

void choice1() {
	cout << endl;
	cout << "Enter module name: ";
	string ModuleName;
	cin >> ModuleName;
	COMP.AddModule(ModuleName);
	cout << "Module " << ModuleName << " added." << endl;
	cout << "Add another? (y/n): ";
	char onemore = _getch();
	if (onemore == 'y' || onemore == 'Y') {
		cout << endl << endl;
		choice1();
	}
	else {
		cout << endl << endl;
		cout << "Returning to menu.." << endl << endl;
		select();
	}
}

void choice2() {
	cout << endl;
	cout << "Enter student name: ";
	string StudentName, StudentSurname;
	cin >> StudentName >> StudentSurname;
	COMP.AddStudent(StudentName, StudentSurname);
	cout << "Student " << StudentName << " " << StudentSurname << " added." << endl;
	cout << "Add another? (y/n): ";
	char onemore = _getch();
	if (onemore == 'y' || onemore == 'Y') {
		cout << endl << endl;
		choice2();
	}
	else {
		cout << endl << endl;
		cout << "Returning to menu.." << endl << endl;
		select();
	}
}

void choice3() {
	cout << endl;
	cout << "Enter student's FULL NAME to find: ";
	string Studentf, Students;
	cin >> Studentf >> Students;
	cout << COMP.FindStudent(Studentf, Students) << endl;
	cout << "Find another? (y/n): ";
	char onemore = _getch();
	if (onemore == 'y' || onemore == 'Y') {
		cout << endl << endl;
		choice3();
	}
	else {
		cout << endl << endl;
		cout << "Returning to menu.." << endl << endl;
		select();
	}
}

void select() {
	system("cls");
	COMP.display();
	cout << endl;

	cout << "Select:" << endl;
	cout << "1. Add Module" << endl;
	cout << "2. Add Student" << endl;
	cout << "3. Find Student" << endl;
	cout << "q. Quit" << endl;
	char choice = _getch();

	if (choice == '1') {
		choice1();
	}
	else if (choice == '2') {
		choice2();
	}
	else if (choice == '3') {
		choice3();
	}
	else if (choice == 'q' || choice == 'Q') {
		cout << endl;
		cout << "Exiting program.." << endl;
	}
	else {
		cout << endl << endl;
		cout << "Invalid choice." << endl << endl;
		select();
	}
}


int main()
{
	cout << "Challenge 3" << endl << "-----------" << endl << endl;
	select();

	return 1;
}

