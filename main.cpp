#include <iostream>;
#include "header.h";

using namespace std;

int main() {
	float firstVal, secondVal;
	char opr;

	float result = Calculate(1.2f, 3.4f, '+');
	cout << "result: " << result << endl;
	int result2 = Calculate(1, 2, '/');
	cout << "result2: " << result2 << endl;

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
			do {
				cout << "Enter a second value: ";
				cin >> secondVal;
				if (opr == '/' && secondVal == 0) cout << "Devision by zero is forbidden" << endl;
			} while (opr == '/' && secondVal == 0);
		} 

		secondVal = Calculate(firstVal, secondVal, opr);

		if (opr != 'E') {
			cout << "Result = " << secondVal << endl;
			firstVal = secondVal;
		}

	} while (opr != 'E');
}
