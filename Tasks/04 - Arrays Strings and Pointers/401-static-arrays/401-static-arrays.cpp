#include <iostream>
using namespace std;

int main()
{
    //Create and initialise an array
    int nums[] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111 };

    // Write out the size
    cout << "The array nums consumed " << sizeof(nums) << " bytes." << endl;

    //We can actually calculate the length of the array as follows:
    int N = sizeof(nums) / sizeof(int);

    cout << "The array nums contains " << N << " elements of type int" << endl;

    //Write the start address (just curious)
    cout << "The start address of the array nums is " << nums << " (hex)" << endl;

    //Write out all elements of the array
    for (unsigned int n = 0; n < N; n++) {
        int next = nums[n];                                             //Read by de-referencing
        cout << "Element " << n << " of nums = " << next << endl;       //Write to terminal
    }

    //Modify each element of the array
    for (unsigned int n = 0; n < N; n++) {
        int newValue = nums[n] + 1;             //Read (by de-referencing) and add one    
        nums[n] = newValue;                     //Write into the array (again, using de-referencing)
    }

    cout << "Add one...." << endl;

    //Write out all elements of the array again - shorter version this time
    for (unsigned int n = 0; n < N; n++) {
        cout << "Element " << n << " of nums = " << nums[n] << endl;
    }



    // **************************************************************************
    // TASK 1 - calculate and display the SUM of all elements in the array nums *
    // **************************************************************************

    //Write task 1 solution here
    int64_t sum = 0L;   //Result needs to be bigger than int to avoid overflow
    for (unsigned int n = 0; n < N; n++) {
		sum += nums[n];
	}
	cout << "The sum of all elements in the array nums is " << sum << endl;

    // ***********************************************************************************************************************
    // TASK 2 - calculate the mean of all elements (this will be a fractional value) and display to 1 decimal place accuracy *
    // ***********************************************************************************************************************

    //Write task 2 solution here
	cout << "The mean of all the elements is equal to the sum divided by the number of elements" << endl;
	float mean = (float)sum / (float)N;
    cout.precision(1);
	cout << "Mean = " << fixed << mean << endl;
}


