//Дана строка. Перевернуть каждое слово в строке. Порядок слов не менять.
#include <iostream>
#include <string>

using namespace std;



void reverseWord(string& s, size_t left, size_t right) {
    while (left < right) {
        --right;
        swap(s[left], s[right]);
        ++left;
    }
}

int main() {
    setlocale(LC_ALL, "Ru");

    cout << "Введите строку: ";
    string s;
    getline(cin, s);

    size_t i = 0;
    size_t len = s.length();

    while (i < len) {
        // Пропускаем пробелы
        while (i < len && s[i] == ' ') {
            ++i;
        }
        if (i >= len) break;

        size_t start = i;

        while (i < len && s[i] != ' ') {
            ++i;
        }
        size_t end = i;

        reverseWord(s, start, end);
    }

    cout << "Результат: " << s << endl;
    cin.get();
    return 0;
}

