// CPP Program to demonstrate the implementation in Map
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{

	// empty map container
	map<int, int> BDCC;

	// insert elements in random order
	
	
	BDCC.insert(pair<int, int>(1, 40));
	BDCC.insert(pair<int, int>(2, 30));
	BDCC.insert(pair<int, int>(3, 60));
	BDCC.insert(pair<int, int>(4, 20));
	BDCC.insert(pair<int, int>(5, 50));
	BDCC.insert(pair<int, int>(6, 50));
	BDCC.insert(pair<int, int>(7, 10));

	// printing map BDCC
	
	
	
	map<int, int>::iterator itr;
	cout << "\nThe map BDCC is : \n";
	cout << "\tKEY\tELEMENT\n";
	
	
	
	for (itr = BDCC.begin(); itr != BDCC.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// assigning the elements from BDCC to BDCC2
	map<int, int> BDCC2(BDCC.begin(), BDCC.end());

	// print all elements of the map BDCC2
	cout << "\nThe map BDCC2 after"
		<< " assign from BDCC is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = BDCC2.begin(); itr != BDCC2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// remove all elements up to
	// element with key=3 in BDCC2
	cout << "\nBDCC2 after removal of"
			" elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	BDCC2.erase(BDCC2.begin(), BDCC2.find(3));
	for (itr = BDCC2.begin(); itr != BDCC2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	// remove all elements with key = 4
	int num;
	num = BDCC2.erase(4);
	cout << "\nBDCC2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = BDCC2.begin(); itr != BDCC2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	// lower bound and upper bound for map BDCC key = 5
	cout << "BDCC.lower_bound(5) : "
		<< "\tKEY = ";
	cout << BDCC.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << BDCC.lower_bound(5)->second
		<< endl;
	cout << "BDCC.upper_bound(5) : "
		<< "\tKEY = ";
	cout << BDCC.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << BDCC.upper_bound(5)->second
		<< endl;

	return 0;
}

