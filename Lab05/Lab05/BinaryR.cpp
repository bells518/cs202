#include <iostream>

#include<fstream>
using std::cout;
using std::endl;
using std::ifstream;
using std::ios;

int main()
{
	ifstream f;
	//ios::in is for reading, ios::out is for writing
	f.open("data.dat", ios::in | ios::binary);

	int ii;
	//use const char* for writing to the file
	f.read(reinterpret_cast<char*>(&ii), sizeof(ii));
	//f.close isn't necesary but it doesnt hurt either.
	f.close();
	//this just prints the first number in the data file
	cout << ii << endl;
}