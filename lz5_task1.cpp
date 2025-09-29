#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double e = 0.001;

    double sum = 0.0;  // сума послідовності
    double an;         // поточний член послідовності
    int n;
	cout << "Введіть початкове значення n (n > 0): ";
	cin >> n;

    // Обчислення членів послідовності
    while (true) {
        an = static_cast<double>(n * n) / (n + 2);

        // Якщо |a_n| < e, зупиняємо цикл
        if (fabs(an) < e) {
            break;
        }

        // Додаємо член до суми
        sum += an;

        n++;
    }

    cout << "Сума членів послідовності: " << sum << endl;
    cout << "Останній доданий член: a_" << n << " = " << an << endl;
    cout << "Кількість доданих членів: " << n - 1 << endl;

    return 0;
}