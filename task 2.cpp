#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	string mystring;
	int age;
	cout << "writing the file" << endl;
	cout << "enter your name:";

	getline(cin, mystring);
	cout << "enter your age:";
	cin >> age;
	ofstream personal_info;
	personal_info.open("personal_info.txt");
	if (personal_info)
	{
		personal_info<< mystring << endl << age;
	
	}
	ifstream info;
info.open("personal|_info.txt");
	if (personal_info)
	{
		getline(info, mystring);
		cout << mystring;
		info >> age;
		cout << endl << age;
	}

}