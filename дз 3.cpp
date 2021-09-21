#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int num;
	double S, p, n, m, r, plus;
	char l;
	string per, text[30];
	ifstream fin;
	cout << "Добро пожаловать в домашнюю работу номер 3\n" << "Введите номер задания\n";
	cin >> num;
	while (num) {
		switch (num) {
		case 1:
			cout << "Введите S, p, n\n";
			cin >> S >> p >> n;
			r = p / 100;
			m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
			cout << m << endl;
			break;
		case 2:
			cout << "Введите S, m, n\n";
			cin >> S >> m >> n;
			plus = 10;
			p = 1;
			r = p / 100;
			for (int i = 0; i < 5; i++) {
				while ((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) < m) {
					p += plus;
					r = p / 100;
				}
				if ((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) == m) {
					break;
				}
				else {
					p -= plus;
					r = p / 100;
					plus = plus / 10;
				}
			}
			cout << p << endl;
			break;

		case 3:
			fin.open("dz.txt");
			if (fin.is_open()) {
				while (fin.get(l)) {
					cout << l;
				}
			}
			else {
				cout << "Не удалось открыть файл\n";
			}
			fin.close();
			break;
		
		case 4:
			fin.open("dz.txt");
			if (fin.is_open()) {
				while (fin.get(l)) {
					if (l <= '9' && l >= '0') {
						cout << l;
					}
				}
			}
			else {
				cout << "Не удалось открыть файл\n";
			}
			fin.close();
			break;

			break;
		case 5:
			cout << "Введите 30 букв через пробел\n";
			for (int i = 0; i < 30; i++) {
				cin >> text[i];
			}
			for (int i = 0; i < 29; i++) {
				for (int j = i + 1; j < 30; j++) {
					if (text[i] > text[j]) {
						per = text[i];
						text[i] = text[j];
						text[j] = per;
					}
				}
			}
			for (int i = 0; i < 30; i++) {
				cout << text[i];
			}
			break;
		}
		cout << "\nЕсли хотите продолжить просмотр домашнего задания, напишите номер, иначе 0\n";
		cin >> num;
	}

}