#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int num, lamp, curtain, day;
	double a, b, c, D;
	printf("����� ����������! \n ������� ����� �������\n");
	scanf_s("%d", &num);
	while (num) {
		switch (num) {
		case 1:
			printf("������ ��������� ���������� \n");
			printf("������ ����������? (������� 0 ���� ���, ����� ������� ���� �� )\n");
			break;
		case 2:
			printf("������� a � b: \n");
			scanf_s("%lf%lf", &a, &b);
			printf("�����: %lf \n", a + b);
			printf("�������� (a - b): %lf \n", a - b);
			printf("�������� (b - a): %lf \n", b - a);
			printf("������������: %lf \n", a * b);
			if (b != 0) {
				printf("������� (a / b): %lf \n", a / b);
			}
			if (a != 0) {
				printf("������� (b / a): %lf \n", b / a);
			}
			printf("������ ����������? (������� 0 ���� ���, ����� ������� ���� �� )\n");
			break;
		case 3:
			printf("������� b � c: \n");
			scanf_s("%lf%lf", &b, &c);
			if (b == 0) {
				printf("��� �������\n");
			}
			else {
				printf("�������: %lf \n", (double)-1 * c / b);
			}
			printf("������ ����������? (������� 0 ���� ���, ����� ������� ���� �� )\n");
			break;
		case 4:
			printf("������� a, b, c: ");
			scanf_s("%lf%lf%lf", &a, &b, &c);
			if (a == 0 && b == 0 && c == 0) {
				printf("���������� ����� �������\n");
			}
			else if (a == 0 && b == 0) {
				printf("��� ������� \n");
			}
			else if (b * b - 4 * a * c < 0) {
				printf("��� ������� \n");
			}
			else if (b * b - 4 * a * c == 0) {
				printf("�������: %lf\ n", -b / (2 * a));
			}
			else if (b * b - 4 * a * c > 0) {
				printf("�������: %lf %lf \n", (-b + sqrtf(b * b - 4 * a * c)) / (2 * a), (-b - sqrtf(b * b - 4 * a * c)) / (2 * a));
			}
			printf("������ ����������? (������� 0 ���� ���, ����� ������� ���� �� )\n");
			break;
		case 5:
			printf("������� �� �����?\n");
			scanf_s("%d", &curtain);
			printf("������ ����?\n");
			scanf_s("%d", &day);
			printf("�������� �� �����?\n");
			scanf_s("%d", &lamp);
			if (curtain && day || lamp) {
				printf("� ������� ������\n");
			}
			else {
				printf("� ������� �����\n");
			}
			printf("������ ����������? (������� 0 ���� ���, ����� ������� ���� �� )\n");
			break;

		}
		printf("\n \n");
		scanf_s("%d", &num);

	}
}