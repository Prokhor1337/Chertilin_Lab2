#include <iostream>
#include<windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    long long result = 20;

    while (true) {
        bool divisible = true;
        for (int i = 1; i <= 20; ++i) {
            if (result % i != 0) {
                divisible = false;
                break;
            }
        }
        if (divisible) {
            cout << "найменше чило, яке дітиться на всі числа від 1 до 20: " << result << endl;
            break;
        }
        ++result;
    }
    return 0;
}
