#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    const int n = 10;
    int i = 0;
    int arr[n];
    while (i < n) {
        if (i == 0) {
            cout << "Введите число для первой ячейки массива: ";
            cin >> arr[i];
        }
        else {
            cout << "Введите число для следующей ячейки массива: ";
            cin >> arr[i];
        }
        i++;
    }
    cout << endl;
    int j = 0;
    while (j < n) {
        cout << arr[j] << " ";
        j++;
    }
    cout << "Массив заполнен!" << endl;
    system("pause > nul");
    return 0;
}
