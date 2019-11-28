#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	//initialization
	int arr[5] = { 1,2,3,4,50 };
	// writing an array to file
	ofstream myfile("array.txt");
	int result = 0;
	string mystring;
	if (myfile)
	{
		cout << "Writting array's elements" << endl;
		cout << "The retrieved array is : " << endl;
		for (int i = 0; i < 5; i++)
		{
			myfile << arr[i] << " ";

		}
	}
	else
		cout << "not present";
	myfile.close();
	//reading the data 
	ifstream file("array.txt");
	if (file)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << " ";
			result = result + arr[i];
		}

	}
	// appending to add new data to previous data
	fstream(sum);
	sum.open("array.txt",ios::app);
	 sum << " sum is " << result;
	 cout << endl;
	 cout << "sum appended successfully";
}