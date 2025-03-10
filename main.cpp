#include <iostream>;
#include "header.h";

using namespace std;

int main() {
	float firstVal, secondVal;
	char opr;

	cout << "Enter a first value: ";
	cin >> firstVal;
	secondVal = firstVal;
	PrintMenu();

	do {
		// Enter an operator and check whatever an allowed one is given
		do { 
			cout << "Enter an operator: ";
			cin >> opr;
			if (opr == '?') PrintMenu();
			// Clear history
			if (opr == 'C') {
				cout << "Enter a first value: ";
				cin >> firstVal;
			}
		} while (!IsAllowedOperator(opr));

		if (!IsUnaryOperator(opr)) {
			cout << "Enter a second value: ";
			cin >> secondVal;
		} 

		secondVal = Calculate(firstVal, secondVal, opr);

		if (opr != 'E') {
			cout << "Result = " << secondVal << endl;
			firstVal = secondVal;
		}

	} while (opr != 'E');
}
