#include <iostream>
#include <string>
#include <locale>

using namespace std;


/*Завдання №1*/
/*int main() {
	string surname = " ";
	string name = " ";
	int age = 0;

	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << surname << " " << name << ", " << age;
}*/

/*Завдання №2,4*/

/*int main() {
	int number1 = 0;
	int number2 = 0;
	int add = 0;
	int min = 0;
	int mul = 0;
	int div = 0;
	int math = 0;

	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;

	add = number1 + number2;
	min = number1 - number2;
	mul = number1 * number2;
	math = (number1 + number2) / 2;
	if (number2 == 0) {
		cout << "You cannot divide by zero!" << endl;
		cout << "Results: " << endl;
		cout << "Sum: " << add << endl;
		cout << "Difference: " << min << endl;
		cout << "Product: " << mul << endl;
		cout << "Medium arithmetic: " << math << endl;
	}

	else {
		div = number1 % number2;
		cout << "Results: " << endl;
		cout << "Sum: " << add << endl;
		cout << "Difference: " << min << endl;
		cout << "Product: " << mul << endl;
		cout << "Rest of ratio: " << div << endl;
		cout << "Medium arithmetic: " << math << endl;
	}
}*/

/*Завдання №3*/

/*int main() {
	setlocale(LC_CTYPE, "ukr");
tryAgain:
	float a = 0;
	float b = 0;
	float f = 0;
	float result = 0;
	cout << "Ласкаво просимо до нашої програми! Вона призначена для того, щоб знайти значення виразу(a + b - f / a) + f * a * a - (a + b). Введiть значення a: " << endl << "Welcome to our program!He is created to find the value of the expression(a + b - f / a) + f * a * a - (a + b).Enter the value of a : ";
	cin >> a;
	cout << endl << "a = " << a << endl;
	if (a == 0) {
		cout << endl << "Вибачте, але на нуль дiлити не можна! Будь ласка, спробуйте спочатку!" << endl << "Sorry, but you can't divide by zero! Please, try again! " << endl;
		goto tryAgain;
	}

	else {
		cout << endl << "Введiть значення b: " << endl << "Enter the value of b: ";
		cin >> b;
		cout << endl << "b = " << b << endl;
		cout << endl << "Введiть значення f: " << endl << "Enter the value of f: ";
		cin >> f;
		cout << endl << "f = " << f << endl;
		result = (a + b - f / a) + f * a * a - (a + b);
		cout << endl << "Вiдповiдь на рiвняння: " << endl << "Answer on expression: " << result << endl;
	}
}*/

/*Завдання №5*/

/*int main() {
tryAgain:
	float s = 0;
	float t = 0;
	float v = 0;

	cout << "Enter length of road in meters: ";
	cin >> s;
	cout << "Enter time of road in minutes: ";
	cin >> t;

	if (t == 0) {
		cout << "Sorry. You cannot divide by zero. Try again!";
		goto tryAgain;
	}

	else {
		v = s / t * 0.06;
		cout << "The speed of runner is: " << v << "km/h";
	}
	
}*/