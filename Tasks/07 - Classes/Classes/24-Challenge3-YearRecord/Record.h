#pragma once
#include <iostream>
#include <vector>
using namespace std;

class YearRecord {
private:
	int students;
	int modules;
	vector<string>ModuleRecord;
	vector<string>StudentRecord;

public:
	YearRecord(int s, int m) {
		students = s;
		modules = m;
	}

	void display() {
		cout << "Number of Students: " << students << endl;
		cout << "Number of Modules: " << modules << endl;
	}

	string AddModule(string moduleName) {
		ModuleRecord.push_back(moduleName);
		modules = ModuleRecord.size(); //update module count
		return moduleName;
	}

	string AddStudent(string studentName, string StudentSurname) {
		string FullName = studentName + " " + StudentSurname;
		StudentRecord.push_back(FullName);
		students = StudentRecord.size(); //update student count
		return FullName;
	}

	string FindStudent(string fname, string sname) {
		string name = fname + " " + sname;
		for (int i = 0; i < StudentRecord.size(); i++) {
			if (StudentRecord[i] == name) {
				return "Student " + name + " found.";
			}	
		} return "Student " + name + " not found.";
	}

};