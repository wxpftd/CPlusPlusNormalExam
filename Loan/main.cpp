#include <iostream>
#include <fstream>
#include "Loan.h"

using namespace std;

int main(int argc, char *argv[])
{
	Loan *ls = new Loan[5];
	for (int i = 0; i<5; i++)
	{
		(*(ls + i)).setLoanAmount(i);
	}
	const char *file = "Exercise12_6.bat";
	ofstream fout(file, ios::binary|ios::out);	
	if (!fout.is_open())	
	{
		cerr << "Can not open the file." << endl;	
		return -1;
	}
	fout.write((char*)ls, (sizeof *ls) * 5);
	fout.flush();
	fout.close();
	delete[] ls;

	Loan l;
	double sum = 0;
	ifstream fin(file, ios::in|ios::binary);
	if (fin.is_open())
	{
		while(!fin.read((char*)&l, sizeof l).eof())	
		{
			sum += l.getFinalMoney();	
			cout << l.getLoanAmount() << endl;
		}
		cout << "All the money is " << sum << endl;
	}

	
	return 0;
}
