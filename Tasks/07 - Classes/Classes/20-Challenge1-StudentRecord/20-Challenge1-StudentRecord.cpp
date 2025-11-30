#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Les", "Leyton", 12345);
    student1.display();
    
    //Test remaining member functions here
	student1.updateFirstName("Kayleigh");
	student1.getFullName();
	student1.updateLastName("Soane");
	student1.getFullName();
	int id = student1.getID();
	student1.display();
	

}
