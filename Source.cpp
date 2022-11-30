#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

//Перевірка значень
void CheckValidInput() {
	if (cin.fail()) {
		throw "Incorect input";
	}
}

//Перевірка n
void CheckValidParams(int n) {
	if (n < 1) {
		throw "Incorect input";
	}
}

float calculate(float x, int n) {

	int y;

		if (x < 0) {
			y = 0;
			for (int i = 1; i <= n - 1; i++) {
				for (int j = 1; j <= n; j++) {
					y += x - i * i + j;
				}
			}
		}
		else {
			y = 0;
			for (int i = 0; i <= n - 1; i++) {
				y += (x - 1) / (i + 1);
			}
		}
		return y;
}

int  main() {

	float x, b, h;
	int n;
	bool results;

    try {
		cout << "Input a = ";
			cin >> x;
		CheckValidInput();

		cout << "Input b = ";
		cin >> b;
		CheckValidInput();

		cout << "Input h = ";
		cin >> h;
		CheckValidInput();

		cout << "Input n >= 1, n = ";
		cin >> n;
		CheckValidInput();
		CheckValidParams(n);

		//Збереження результату у файл
		ofstream fout("D:\\results.txt");
		cout << "If you want to save the results to a file, enter 1. If you dont want, enter 0" << endl;
		cin >> results;
		CheckValidInput();

		for (x; x <= b; x += h) {
			cout << "x = " << x << "; " << "y = " << calculate(x, n) << endl;
			if (results == 1) {
				fout << "x = " << x << "; " << "y = " << calculate(x, n) << endl;
			}
		}
	}

	catch (const char* ex){
		cout << ex << endl;
		return -1;
	}

	catch (...) {
		cout << "Unknown error" << endl;
		return -2;
	}
}


