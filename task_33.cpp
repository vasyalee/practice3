#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("D:\\TEST.txt");
	fout << "Hello, World";
	fout.close();
	char buf[50];
	fstream Fin;
	Fin.open("D:\\TEST.txt");
	Fin.getline(buf, 50);
	Fin.close();
	cout << buf << endl;
	return 0;

}