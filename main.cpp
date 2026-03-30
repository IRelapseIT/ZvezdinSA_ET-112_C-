//Занятие 6 6-вариант

#include <iostream>
#include <limits>
#include <stdexcept>

using namespace std;

// Функция для безопасного ввода целого числа с обработкой ошибок
int safeIntInput(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break; // успешно
        } else {
            // Обработка ошибки ввода
            cout << "Ошибка: введите целое число." << endl;
            cin.clear(); // сбрасываем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // очищаем буфер
        }
    }
    return value;
}

// Функция для безопасного ввода вещественного числа (порог)
double safeDoubleInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cout << "Ошибка: введите число." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}

// Функция для вывода массива
void printArray(const double* arr, int size) {
    if (size == 0) {
        cout << "[] (пустой массив)";
        return;
    }
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    try {
        // Ввод размера массива
        int n = safeIntInput("Введите количество элементов массива: ");
        if (n <= 0) {
            throw invalid_argument("Размер массива должен быть положительным.");
        }

        // Выделение динамического массива
        double* arr = new double[n];

        // Ввод элементов
        cout << "Введите элементы массива:" << endl;
        for (int i = 0; i < n; ++i) {
            arr[i] = safeDoubleInput("arr[" + to_string(i) + "] = ");
        }

        // Вывод исходного массива и его размера
        cout << "\nИсходный массив (размер " << n << "): ";
        printArray(arr, n);
        cout << endl;

        // Ввод порога
        double threshold = safeDoubleInput("\nВведите пороговое значение: ");
        cout << "Удаляем все элементы > " << threshold << endl;

        // Подсчёт количества элементов, которые НЕ нужно удалять (<= threshold)
        int newSize = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= threshold) {
                ++newSize;
            }
        }

        // Создание нового массива с нужными элементами
        double* newArr = new double[newSize];
        int idx = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] <= threshold) {
                newArr[idx++] = arr[i];
            }
        }

        // Освобождение старого массива
        delete[] arr;

        // Вывод результата
        cout << "\nРазмерность до удаления: " << n << endl;
        cout << "Размерность после удаления: " << newSize << endl;
        cout << "Массив после удаления: ";
        printArray(newArr, newSize);
        cout << endl;

        // Освобождение нового массива
        delete[] newArr;

    } catch (const bad_alloc& e) {
        cout << "Ошибка выделения памяти!" << endl;
        return 1;
    } catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
        return 1;
    }

    return 0;
}


#include <iostream>
#include <string>
#include <algorithm> // для std::reverse
using namespace std;

int main() {
    setlocale(LC_ALL, ""); // поддержка русских символов в консоли (опционально)

    cout << "Введите строку: ";
    string s;
    getline(cin, s); // считываем всю строку, включая пробелы

    // Переворачиваем каждое слово
    size_t start = 0;
    while (start < s.length()) {
        // Пропускаем начальные пробелы (между словами)
        while (start < s.length() && s[start] == ' ') {
            ++start;
        }
        if (start >= s.length()) break; // конец строки

        size_t end = start;
        // Ищем конец текущего слова (пробел или конец строки)
        while (end < s.length() && s[end] != ' ') {
            ++end;
        }
        // Переворачиваем слово на отрезке [start, end)
        reverse(s.begin() + start, s.begin() + end);

        // Переходим к следующему слову
        start = end;
    }

    cout << "Результат: " << s << endl;
    cin.ignore(100);
    cin.get();
    return 0;
}