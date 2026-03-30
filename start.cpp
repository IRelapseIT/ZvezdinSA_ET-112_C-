// #include <iostream>
// #include "math.h"
// using namespace std;

// int main() {


//     double part1 = pow(0.027, -1.0 / 3.0);
//     double part2 = (1.0 + sin(1.2)) / 6.0; 
//     double ln_05 = log(0.5);
//     double part3 = pow(ln_05, 2);
//     double result_a = part1 - part2 + part3;
//     cout << "Выражение: 0.027^(-x/6) - (1 + sin 1.2)/6 + (ln 0.5)^2" << endl;
//     cout << "4. Результат: " << result_a << endl << endl;


//     double x_b = 2.1;
//     double part1_b = x_b;                       
//     double part2_b = exp(pow(x_b, 2) / 2.0);    
//     double part3_b = 2.5 * log10(1.0 + x_b);  
    
//     double result_b = part1_b - part2_b + part3_b;
    
//     cout << "Выражение: x - e^(x^2/2) + 2.5 * lg(1 + x)" << endl;
//     cout << "При x = " << x_b << ":" << endl;
//     cout << "4. Результат: " << result_b << endl << endl;

//     double A0 = 0.0;
//     double A1 = -1.0;

//     int A2, A3, A4, A5, A6;
    
//     A2 = (pow(1, 2) - 1) * A1 - A0;
//     A3 = (pow(2, 2) - 1) * A2 - A1;
//     A4 = (pow(3, 2) - 1) * A3 - A2; 
//     A5 = (pow(4, 2) - 1) * A4 - A3;
//     A6 = (pow(5, 2) - 1) * A5 - A4;
//     cout << "Вывод А2: " << A2; 
//     cout << "Вывод А3: " << A3;
//     cout << "Вывод А4: " << A4;
//     cout << "Вывод А5: " << A5;
//     cout << "Вывод А6: " << A6;
//     cin.ignore(100);
//     cin.get();
// }


// #include <iostream>
// using namespace std;

// int main() {
//     double x, y;
//     bool isInside;
//     int num;

//     cout << "\nФигура ограничена:" << endl;
//     cout << "- сверху дугами окружностей: x^2 + y^2 = 4 и (x-2)^2 + y^2 = 4" << endl;
//     cout << "- снизу прямой: y = -0.25x" << endl;
    
//     cout << "Введите координаты точки:" << endl;
//     cout << "x = ";
//     cin >> x;
//     cout << "y = ";
//     cin >> y;
    
//     bool kret1 = (x*x + y*y <= 4);           
//     bool kret2 = ((x-2)*(x-2) + y*y <= 4);  
//     bool kret3 = (y >= -0.25 * x);        
    
//     isInside = kret1 && kret2 && kret3;
    
//     cout << "РЕЗУЛЬТАТЫ ПРОВЕРКИ:" << endl;
//     cout << "1. x^2 + y^2 <= 4 (" << x*x + y*y << " <= 4) : " 
//          << (kret1 ? "ДА" : "НЕТ") << endl;
//     cout << "2. (x-2)^2 + y^2 <= 4 (" << (x-2)*(x-2) + y*y << " <= 4) : " 
//          << (kret2 ? "ДА" : "НЕТ") << endl;
//     cout << "3. y >= -0.25x (" << y << " >= " << -0.25*x << ") : " 
//          << (kret3 ? "ДА" : "НЕТ") << endl;
    
//     cout << "ИТОГ: Точка " << (isInside ? "НАХОДИТСЯ" : "НЕ НАХОДИТСЯ") 
//          << " внутри фигуры" << endl;
    
//     cin.ignore(100);
//     cin.get();
//     return 0;

// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int time;
//     int ostat;
//     cout << "Сколько прошло минут: " << endl;
//     cin >> time;
//     ostat = time % 6;
//     cout << ostat << endl;
//     if (ostat == 0 || ostat == 1 || ostat == 2) {
//         cout << "Зеленый";
//     }
//     else if (ostat == 3) {
//         cout << "Желтый";
//     }
//     else if (ostat == 4 || ostat == 5) {
//         cout << "Красный";
//     }
//     cin.ignore(10);
//     cin.get();
//     return 0;
// }

//Практика 4-5

// #include <iostream>
// #include <cmath>
// #include <ctime>
// using namespace std;

// int main() {
//     clock_t start = clock();

//     double sum = 0.0;
//     float orient = -1.0;

//     for (int n = 1; n <= 22; ++n) {
//         sum += (orient / sqrt(n));
//         orient = -orient;
//         }
    
//     cout << "Сумма = " << sum << endl;
//     cout << "Ожидаемое значение: -0.4995" << endl;

//     clock_t end = clock();
//     double elapsed = double(end - start) / CLOCKS_PER_SEC;
//     cout << "Время выполнения: " << elapsed << " секунд" << endl;

//     cin.ignore(10);
//     cin.get();
//     return 0;
// }



// #include <iostream>
// #include <cmath>
// #include <ctime>
// using namespace std;

// int main() {
//     double x = 2.0;
//     clock_t start = clock();

//     double sum = 0.0;
//     double a = -1.0 / 8.0; //значение при i=1
//     int i = 1;
//     const double eps = 1e-15;

//     while (fabs(a) > eps) {
//         sum += a;
//         i++;
//         //рекуррентная формула: a(i) = -a(i-1) * x^2 / ((2i-1)*(2i+2))
//         a = -a * x * x / ((2.0 * i - 1) * (2.0 * i + 2));
//     }

//     clock_t end = clock();
//     double elapsed = double(end - start) / CLOCKS_PER_SEC;

//     cout << "Сумма ряда = " << sum << endl;
//     cout << "Ожидаемое значение: -0.0998" << endl;
//     cout << "Время выполнения: " << elapsed << " сек" << endl;

//     cin.ignore();
//     cin.get();
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// #include <ctime>
// using namespace std;

// int main() {
//     clock_t start = clock();

//     double maxVal = -1e9;  
//     int maxIndex = 0;

//     for (int i = 1; i <= 25; ++i) {
//         double u = i * i * i * exp(-0.3 * i);
//         if (u > maxVal) {
//             maxVal = u;
//             maxIndex = i;
//         }
//     }

//     clock_t end = clock();
//     double elapsed = double(end - start) / CLOCKS_PER_SEC;

//     cout << "Максимальное значение: " << maxVal << " (при i = " << maxIndex << ")" << endl;
//     cout << "Ожидаемое значение: 49.787068 при i = 10" << endl;
//     cout << "Время выполнения: " << elapsed << " сек" << endl;

//     cin.ignore();
//     cin.get();
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// #include <ctime>
// using namespace std;

// int main() {
//     clock_t start = clock();

//     double A_prev = 1.0; 
//     double A_curr = 10.0; 
//     int n = 1;            

//     do {
//         double A_next = (double)n / (n + 1) * A_curr - A_prev;
//         A_prev = A_curr;
//         A_curr = A_next;
//         n++;
//     } while (fabs(A_curr) <= 10);

//     clock_t end = clock();
//     double elapsed = double(end - start) / CLOCKS_PER_SEC;

//     cout << "Наименьший номер элемента с |A_n| > 10: n = " << n << endl;
//     cout << "A_" << n << " = " << A_curr << endl;

//     cin.ignore();
//     cin.get();
//     return 0;
    
// }

