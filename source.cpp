#include <iostream>;
#include <cmath>;
#include "header.h";

using namespace std;

void PrintMenu() {
	cout << "--> List of available operators <--" << endl << endl;
	cout << "+ Add       \t* Multiply  \t% Mod     \ts Sqrt" << endl;
	cout << "- Substract \t/ Devide    \t^ Power   \ta Absolut" << endl;
	cout << "i Inversion \t! Factorial \td Degrees \tr Radians" << endl << endl;
	cout << "E Exit      \t? Show menu again  \tC Clear" << endl << endl;
}

bool IsAllowedOperator(char opr) {
	string AllowedOperators = "+*%s-/^ai!drfE";
	for (char c : AllowedOperators) {
		if (c == opr) return true;
	}
	return false;
}

bool IsUnaryOperator(char opr) {
	string UnaryOperators = "sai!drfE";
	for (char c : UnaryOperators) {
		if (c == opr) return true;
	}
	return false;
}

int Factorial(int n) {
	if (n == 1) return 1;
	else return n * Factorial(n - 1);
}

int Calculate(int firstVal, int secondVal, char opr) {
	cout << "Calculate INT" << endl;
	const float pi = 3.1415926535f;
	switch (opr) {
	case '+':
		secondVal += firstVal;
		break;
	case '-':
		secondVal = firstVal - secondVal;
		break;
	case '*':
		secondVal *= firstVal;
		break;
	case '/':
		secondVal = firstVal / secondVal;
		break;
	case '%':
		cout << "Warning: Mod devision is an integer function. Deicmal digits are ignored" << endl;
		secondVal = (int)firstVal % (int)secondVal;
		break;
	case '^':
		secondVal = pow(firstVal, secondVal);
		break;
	case 's':
		secondVal = sqrt(secondVal);
		break;
	case 'a':
		secondVal = abs(secondVal);
		break;
	case 'i':
		secondVal = 1 / secondVal;
		break;
	case 'd':
		secondVal = 180 / pi * secondVal;
		break;
	case 'r':
		secondVal = pi / 180 * secondVal;
		break;
	case 'f':
		cout << "Warning: Factorial is an integer function. Deicmal digits are ignored" << endl;
		secondVal = Factorial(secondVal);
		break;
	default:
		break;
	}

	return secondVal;
}

float Calculate(float firstVal, float secondVal, char opr) {
	cout << "Calculate FLOAT" << endl;
	const float pi = 3.1415926535f;
	switch (opr) {
	case '+':
		secondVal += firstVal;
		break;
	case '-':
		secondVal = firstVal - secondVal;
		break;
	case '*':
		secondVal *= firstVal;
		break;
	case '/':
		secondVal = firstVal / secondVal;
		break;
	case '%':
		cout << "Warning: Mod devision is an integer function. Deicmal digits are ignored" << endl;
		secondVal = (int)firstVal % (int)secondVal;
		break;
	case '^':
		secondVal = pow(firstVal, secondVal);
		break;
	case 's':
		secondVal = sqrt(secondVal);
		break;
	case 'a':
		secondVal = abs(secondVal);
		break;
	case 'i':
		secondVal = 1 / secondVal;
		break;
	case 'd':
		secondVal = 180 / pi * secondVal;
		break;
	case 'r':
		secondVal = pi / 180 * secondVal;
		break;
	case 'f':
		cout << "Warning: Factorial is an integer function. Deicmal digits are ignored" << endl;
		secondVal = Factorial(secondVal);
		break;
	default:
		break;
	}

	return secondVal;
}
