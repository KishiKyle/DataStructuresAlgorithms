#include <stdio.h>
#include <iostream>
#include <vector>
#include <map> 
#include <iomanip>

using namespace std;
using namespace std::literals;

// Creativity

// C-1.1
//
//	PSEUDO CODE:
//	For each element (index) up to halfway in the array
//		temp = array[index] 
//		array[index] = array[length-index]
//		array[length-index] = temp

void ReverseArray(int arr[], int len) {
	int temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = temp;
	}
}

// C-1.2

template<size_t N>
bool ContainsPairProductEven(const int(&arr)[N]) {
	for (int i = 0; i < N - 1; i++) {
		if ((arr[i] * arr[i + 1]) % 2 == 0) {
			return true;
		}
	}
	return false;
}

// C-1.3
// Create a map of all values as vector is travesed
// If an insert fails there is a duplicate value
// A fail occurs when the size of the map doesn't change after an insert

bool AllValuesAreDistint(vector<int> vec) {
	map<int, int> m;
	for (int i = 0;i < vec.size();i++)
	{
		const std::size_t n = std::size(m);
		m.insert({ vec[i], i });
		if (std::size(m) == n) {
			return false;
		}
	}
	return true;
}

// C-1.5
//
// This function Can be thought of as creating a new deck by taking one card at a 
// time from the previous deck and inserting it randomly in the new deck.
template<size_t N>
void Randomise(int(&arr)[N]) {
	int rand;
	int temp;

	for (int i = 1; i < N; i++) {
		// Select a random location to place in the new deck
		std::srand(std::time(nullptr));
		rand = std::rand() % i;
		temp = arr[i];
		// Shift all cards after the random insertion
		for (int j = i; j > rand; j--) {
			arr[j] = arr[j - 1];
		}
		arr[rand] = temp;


	}
}



int main() {

	int deck[52];
	for (int i = 0; i < 52; i++) {
		deck[i] = i;
	}
	Randomise(deck);
	//Print deck
	for (int k = 0; k < 52; k++) {
		cout << deck[k] << " ";
	}
	cout << endl;
	Randomise(deck);
	//Print deck
	for (int k = 0; k < 52; k++) {
		cout << deck[k] << " ";
	}


}