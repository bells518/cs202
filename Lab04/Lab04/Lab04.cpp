// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <sstream>
using std::cout;
using std::endl;
#include <fstream>
#include <string>
using std::string;
using std::ostringstream;
using std::istringstream;
using std::ifstream;


//ask about how this should work
int main()
{
	ostringstream count;
	for (int i = 1; i <= 8; ++i)
	{
		count << i;
	}

	istringstream b(count.str());
	int c;
	b >> c;
	cout << "My Integer is " << c << endl;
	ifstream txt("out.txt");
	if (txt.is_open())
	{
	
	while (!txt.eof())
	{
		int x;
		txt >> x;
			
				
		cout << "x is " << x << "\n";
	}
}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
