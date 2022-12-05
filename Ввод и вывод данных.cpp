// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	double A, B, x;

	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	cout << "Vvedite znacheniye peremennoy B: ";
	cin >> B;
	x = A;
	A = B;
	B = x;
	cout << "Perviy sposob: " << endl; 
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;

	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	cout << "Vvedite znacheniye peremennoy B: ";
	cin >> B;
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "Vtoroy sposob: " << endl;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	return 0;
}