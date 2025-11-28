#include <iostream>
using namespace std;

//global x
//int x = 0;

//Project namespace for both variables and code
namespace COMP1000 {
    int x;
    int addOne(int u) {
        return u + 1;
    }
}

namespace MATH1000 {
    int x;
    int addOne(int u) {
        return u + 10;
    }
}

int main()
{
    //Fully qualified name is COMP1000::x
    COMP1000::x = 20;
    cout << "x = " << COMP1000::x << endl;
    COMP1000::x = COMP1000::addOne(COMP1000::x);
    cout << "x = " << COMP1000::x << endl;

    //Now infer COMP1000 as the namespace to save on typing and clutter
	using namespace COMP1000; //if you declare using namespace , it will use that namespace for all unqualified names - wouldn't be able to use x in MATH1000 without saying MATH1000::x
    x = addOne(x);
    cout << "x = " << x << endl;

    MATH1000::x = 30;
	cout << "x = " << MATH1000::x << endl;          //napespaces group variables to make them easier to manage
	MATH1000::x = MATH1000::addOne(MATH1000::x);    //can be used instead of creating global variables, prevents having to declar4e many variables with different names
    cout << "x = " << MATH1000::x << endl;
	
    cout << "x = " << x << endl;
    return 0;
}
