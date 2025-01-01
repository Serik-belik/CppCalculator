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
		return secondVal + firstVal;
	case '-':
		return firstVal - secondVal;
	case '*':
		return secondVal * firstVal;
	case '/':
		return firstVal / secondVal;
	case '%':
		cout << "Warning: Mod devision is an integer function. Deicmal digits are ignored" << endl;
		return (int)firstVal % (int)secondVal;
	case '^':
		return pow(firstVal, secondVal);
	case 's':
		return sqrt(secondVal);
	case 'a':
		return abs(secondVal);
	case 'i':
		return 1 / secondVal;
	case 'd':
		return 180 / pi * secondVal;
	case 'r':
		return pi / 180 * secondVal;
	case 'f':
		cout << "Warning: Factorial is an integer function. Deicmal digits are ignored" << endl;
		return Factorial(secondVal);
	default:
		break;
	}
}

float Calculate(float firstVal, float secondVal, char opr) {
	cout << "Calculate FLOAT" << endl;
	const float pi = 3.1415926535f;
	switch (opr) {
	case '+':
		return secondVal + firstVal;
	case '-':
		return firstVal - secondVal;
	case '*':
		return secondVal * firstVal;
	case '/':
		return firstVal / secondVal;
	case '%':
		cout << "Warning: Mod devision is an integer function. Deicmal digits are ignored" << endl;
		return (int)firstVal % (int)secondVal;
	case '^':
		return pow(firstVal, secondVal);
	case 's':
		return sqrt(secondVal);
	case 'a':
		return abs(secondVal);
	case 'i':
		return 1 / secondVal;
	case 'd':
		return 180 / pi * secondVal;
	case 'r':
		return pi / 180 * secondVal;
	case 'f':
		cout << "Warning: Factorial is an integer function. Deicmal digits are ignored" << endl;
		return Factorial(secondVal);
	default:
		break;
	}
}
