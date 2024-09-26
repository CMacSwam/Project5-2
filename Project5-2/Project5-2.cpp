#include <iostream>

using namespace std;
int main() {

	int biggest = 0;
	int smallest = 99999;
	int numevens = 0;
	int numodds = 0;
	int input = -1;
	bool done = false;

	while (!done) {
		cout << "Enter number or Q to quit: ";
		cin >> input;
		if (cin.fail()) {
			done = true;
		}
		else {
			if (input > biggest) {
				biggest = input;
			}
			else if (input < smallest) {
				smallest = input;
			}
			if (input % 2 == 0) {
				numevens++;
			}
			else {
				numodds++;
			}
		}
	}
	cout << "Largest Value: " << biggest << " Smallest Value: " << smallest << endl;
	cout << "Even number count: " << numevens << " Odd number count: " << numodds;
}