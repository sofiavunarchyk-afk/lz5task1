#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double e = 0.001;

    double sum = 0.0;  // ���� �����������
    double an;         // �������� ���� �����������
    int n;
	cout << "������ ��������� �������� n (n > 0): ";
	cin >> n;

    // ���������� ����� �����������
    while (true) {
        an = static_cast<double>(n * n) / (n + 2);

        // ���� |a_n| < e, ��������� ����
        if (fabs(an) < e) {
            break;
        }

        // ������ ���� �� ����
        sum += an;

        n++;
    }

    cout << "���� ����� �����������: " << sum << endl;
    cout << "������� ������� ����: a_" << n << " = " << an << endl;
    cout << "ʳ������ ������� �����: " << n - 1 << endl;

    return 0;
}