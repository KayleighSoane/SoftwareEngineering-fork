#pragma once
#include <iostream>
using namespace std;


class ModuleRecord
{
private:
	string moduleName;
	string subjectArea = "COMP";
	int credits = 20;
	int semesters = 1;

public:

	ModuleRecord(string mn, string sa, int c, int s) {
		moduleName = mn;
		subjectArea = sa;
		credits = c;
		semesters = s;
	}

	string moduleSummary() {
		cout << subjectArea << " " << moduleName << endl;
		cout << "Credits per semester: " << credits << endl;
		cout << "Total credits: "; totalCredits();
		return "";
	}

	int totalCredits() {
	//no. credits x no. semesters
		int total = credits*semesters;
		cout << total << endl;
		return total;
	}

};

