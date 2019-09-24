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
	int sum = 0;
	double d = 0;
	double av = 0;
	while (true)
	{
		//use const char* for writing to the file
		f.read(reinterpret_cast<char*>(&ii), sizeof(ii));

		//this just prints the first number in the data file
		cout << ii << endl;
		sum += ii;
		d += 1;
		if(!f)
		{
			break;
		}
	}
	av = sum / d;
	cout << "Sum: " << sum << endl;
	cout << endl;
	cout << "Average: " << av << endl;
	//f.close isn't necesary but it doesnt hurt either.
	f.close();
}