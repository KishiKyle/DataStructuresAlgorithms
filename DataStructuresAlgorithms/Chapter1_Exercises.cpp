#include <string>
#include <stdio.h>
#include <iostream>
#include <tuple>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Exercises

// R-1.2) function(array)
//			int smallest, largest = 0;
//			for each element in array
//				if element < smallest
//					smallest = element
//				if element > largest
//					largest = element
//			return array(smallest, largest)


std::tuple<int, int> smallest_largest(int _array[], int length) {

	int smallest = _array[0], largest = _array[0];
	for (int i = 0; i < length; i++)
	{
		if (_array[i] < smallest)
		{
			smallest = _array[i];
		}
		if (_array[i] > largest)
		{
			largest = _array[i];
		}
	}
	return std::make_tuple(smallest, largest);

};


// R-1.3 
struct Pair
{
	int first;
	double second;
};

// R-1.4
// abcabcdabc

// R-1.5
// bool c = y + (2 * (z++)) < (3 - (w / 5));

// R-1.6
//	double* dp[10];
//	double dpa[10];
//	for (int i = 0; i < 10; i++) 
//		{
//		dp[i] = &dpa[i];
//		dpa[i] = 0.0;
//		}

// R-1.7

int smallerSum(int n) {
	int sum = 0;
	n--;
	while (n > 0) {
		sum += n;
		n--;
	}
	return sum;
}

// R-1.8

bool isMultiple(unsigned long n, unsigned long m) {
	return (m % n == 0);
}

// R-1.9
// Example code
//int num = 8;
//int* p = &num;
//int** pp = &p;
//printArray(pp,2,7);

void printArray(int** A, int m, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << **A;
		}
		cout << endl;
	}
}

// R-1.10 
// When a parameter is passed by reference the object which was passed 
// into the function can be changed and will remain changed outside the function

// R-1.11

class Flower
{
public:
	Flower() { };
	Flower(string _name, int _pedals, float _price) : name(_name), pedals(_pedals), price(_price) {};

	const string& GetName() { return name; }
	void SetName(string _n) { name = _n; }

	const int& GetPedals() { return pedals; }
	void SetPedals(int _pe) { pedals = _pe; }

	const float& GetPrice() { return price; }
	void SetPrice(float _pr) { price = _pr; }

private:
	string name = "";
	int pedals = 0;
	float price = 0.0f;

};

