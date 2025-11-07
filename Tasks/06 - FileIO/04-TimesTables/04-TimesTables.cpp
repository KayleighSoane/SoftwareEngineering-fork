#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream f;
	f.open("tables.txt");

	if (f.is_open() == false) {
		cerr << "Cannot create file" << endl;
		return -1;
	}

	for (unsigned int r = 1; r <= 12; r++) {
		for (unsigned int c = 1; c <= 12; c++) {
			f << r * c << "\t";
		}
		f << endl;
	}
	f << endl;

	f.close();

	return 0;
}