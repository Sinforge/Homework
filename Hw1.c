#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int num, lamp, curtain, day;
	double a, b, c, D;
	printf("Добро пожаловать! \n Введите номер задания\n");
	scanf_s("%d", &num);
	while (num) {
		switch (num) {
		case 1:
			printf("Власов Владислав Витальевич \n");
			printf("Хотите продолжить? (Введите 0 если нет, номер задания если да )\n");
			break;
		case 2:
			printf("Введите a и b: \n");
			scanf_s("%lf%lf", &a, &b);
			printf("Сумма: %lf \n", a + b);
			printf("Разность (a - b): %lf \n", a - b);
			printf("Разность (b - a): %lf \n", b - a);
			printf("Произведение: %lf \n", a * b);
			if (b != 0) {
				printf("Частное (a / b): %lf \n", a / b);
			}
			if (a != 0) {
				printf("Частное (b / a): %lf \n", b / a);
			}
			printf("Хотите продолжить? (Введите 0 если нет, номер задания если да )\n");
			break;
		case 3:
			printf("Введите b и c: \n");
			scanf_s("%lf%lf", &b, &c);
			if (b == 0) {
				printf("Нет решения\n");
			}
			else {
				printf("Решение: %lf \n", (double)-1 * c / b);
			}
			printf("Хотите продолжить? (Введите 0 если нет, номер задания если да )\n");
			break;
		case 4:
			printf("Введите a, b, c: ");
			scanf_s("%lf%lf%lf", &a, &b, &c);
			if (a == 0 && b == 0 && c == 0) {
				printf("Бесконечно много решений\n");
			}
			else if (a == 0 && b == 0) {
				printf("Нет решения \n");
			}
			else if (b * b - 4 * a * c < 0) {
				printf("Нет решения \n");
			}
			else if (b * b - 4 * a * c == 0) {
				printf("Решение: %lf\ n", -b / (2 * a));
			}
			else if (b * b - 4 * a * c > 0) {
				printf("Решения: %lf %lf \n", (-b + sqrtf(b * b - 4 * a * c)) / (2 * a), (-b - sqrtf(b * b - 4 * a * c)) / (2 * a));
			}
			printf("Хотите продолжить? (Введите 0 если нет, номер задания если да )\n");
			break;
		case 5:
			printf("Открыты ли шторы?\n");
			scanf_s("%d", &curtain);
			printf("Сейчас день?\n");
			scanf_s("%d", &day);
			printf("Включена ли лампа?\n");
			scanf_s("%d", &lamp);
			if (curtain && day || lamp) {
				printf("В комнате светло\n");
			}
			else {
				printf("В комнате темно\n");
			}
			printf("Хотите продолжить? (Введите 0 если нет, номер задания если да )\n");
			break;

		}
		printf("\n \n");
		scanf_s("%d", &num);

	}
}