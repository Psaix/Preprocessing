#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include "Mylib.h"
#define MY_SIZE 10
#define SMALL_SIZE 6
#define TELL_ME(a, b) cout << "Input the first digit:";\
cin >> a;\
cout << "Input the second digit:";\
cin >> b;\
if(a >= 0 && a < b)\
	std::cout << "true" << std::endl;\
else\
	std::cout << "false" << std::endl;
#define SwapINT(a, b) int temp;\
temp = a;\
a = b;\
b = temp;


using namespace std;


void printArray(const int arr[], size_t SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




void initArray(int arr[], size_t SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Input arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << endl;
}


void swapArray(int arr[], size_t SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SwapINT(arr[j], arr[j + 1]);
			}
				
		}
	}
}




int main()
{

	srand(time(NULL));


	double myArr[MY_SIZE];
	
	Mylib::initDbArray(myArr, MY_SIZE);

	Mylib::printDbArray(myArr, MY_SIZE);

	cout << endl;

	Mylib::countDbArray(myArr, MY_SIZE);

	cout << endl;

	int c, b;

	TELL_ME(c, b);

	cout << endl;

	int arrSwap[SMALL_SIZE];

	initArray(arrSwap, SMALL_SIZE);
	printArray(arrSwap, SMALL_SIZE);

	cout << endl;

	swapArray(arrSwap, SMALL_SIZE);
	printArray(arrSwap, SMALL_SIZE);

	cout << endl;

#pragma pack(push, 1)
	struct Employee
	{
		int id;
		int age;
		double salary;
	};
#pragma pack(pop)


	Employee* pWorker = new Employee;

	pWorker->id = 343;
	pWorker->age = 32;
	pWorker->salary = 200.00;

	cout << "Id is " << pWorker->id << endl;
	cout << "Age is " << pWorker->age << endl;
	cout << "Salary is " << fixed << setprecision(2) << pWorker->salary << endl;
	cout << "Size of the copied struct: " << sizeof(pWorker) << endl;

	ofstream homework("homework.txt");

	if (homework.is_open())
	{
		homework << "Id is " << pWorker->id << endl;
		homework << "Age is " << pWorker->age << endl;
		homework << "Salary is " << pWorker->salary << endl;
		homework.close();
	}


	delete pWorker;

	return 0;


}

