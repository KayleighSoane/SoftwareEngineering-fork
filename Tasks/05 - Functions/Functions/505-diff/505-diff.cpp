#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int u, int v);


int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;
  

    int diff = absDiff(var1, var2);

    cout << "Absolute diff = " << diff << endl;
}


int sub(int u, int v)
{
    int y = u - v;
    return y;
}

int absDiff(int u, int v) 
{
    int diff = 0;
    if (u >= v)               // check which variable is larger - also this covers the case where they are the same
    {
        diff = sub(u, v);     // do the subtraction
    } 
    else 
    {
        diff = sub(u, v);     // do the subtraction
    }

	return diff;
}