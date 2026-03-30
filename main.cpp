
// Написать программу, которая удаляет из массива все элементы больше
// определенного значения. Использовать динамический массив. Вывести
// размерность массива до обработки и после удаления элементов.
#include <iostream>

using namespace std;


int main() {
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;

    double* arr = new double[n];


    cout << "Введите" << n << "элементов массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    double porog;
    cout << "Введите пороговое значение: ";
    cin >> porog;

    int newSize = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= porog) {
            ++newSize;
        }
    }

    double* newArr = new double[newSize];
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= porog) {
            newArr[idx++] = arr[i];
        }
    }

    cout << "\nРазмерность до удаления: " << n << endl;
    cout << "Размерность после удаления: " << newSize << endl;
    cout << "Массив после удаления: ";
    if (newSize == 0) {
        cout << "[]";
    } else {
        cout << "[";
        for (int i = 0; i < newSize; ++i) {
            cout << newArr[i];
            if (i < newSize - 1) cout << ", ";
        }
        cout << "]";
    }
    cout << endl;

    delete[] arr;
    delete[] newArr;

    cin.ignore(100);
    cin.get();
    return 0;
}
