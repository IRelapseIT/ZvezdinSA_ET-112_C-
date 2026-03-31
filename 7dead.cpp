// //задача 1
// #include <iostream>
// using namespace std;
// void swal(double &x, double &y) {
//   x = x + y;
//   y = x - y;
//   x -= y;
  
// }

// int main() {
//   double x = -3.0, y = 1.0;
//   cout << "x = " << x << " y = " << y;
//   swal(x, y);
//   printf("\n");
//   cout << "x = " << x << " y = " << y;
// }

// // Задача 2
// #include <iostream>
// using namespace std;
// float f1(float x) {
//   return sin(x) / x;
// }
// float f2(float x) {
//   return (x * x + 2 * pow(x, 1.5));
// }
// float f3(float x) {
//   return (x + 1) * (x + 2) * x;

// }
// void print(float x, float(*y)(float)) {
//   if (y == f1) cout << "Result f1: " << y(x) << endl;
//   else if (y == f2) cout << "Result f2: " << y(x) << endl;
//   else if (y == f3) cout << "Result f3: " << y(x) << endl;
//   else cout << "Result: " << y(x) << endl;
// }
// int main() {
//   float x = 0.6, y = 0.3, z = 0.1;
//   float R = f1(x) + f2(y) * f3(f2(z));
//   cout << "R = " << R;
//   return 0;
// }

// //3 задача

// #include <iostream>
// using namespace std;
// double max(double a, double b) {
//     return a > b ? a : b;
// }
// double min(double a, double b) {
//     return a < b ? a : b;
// }
// double max(double arr[], int size) {
//     double mx = arr[0];
//     for (int i = 1; i < size; i++) {
//         mx = max(mx, arr[i]);
//   }
//     return mx;
// }
// double min(double arr[], int size) {
//     double mn = arr[0];
//     for (int i = 1; i < size; i++) {
//         mn = min(mn, arr[i]);
//   }
//     return mn;
// }
// int main() {
//     double a[1] = {};
//     double b[] = { 2.0, 5.6 };
//     int n = sizeof(b) / sizeof(b[0]);
//     cout << max(a, 1) << endl;
//     cout << min(b, n);
//     cin.ignore(10);
//     cin.get();
// }

// //4 задача
// #include <iostream>
// #include <cmath>
// using namespace std;

// double sum_by_value(double x, double eps) {
//     double sum = 0.0;
//     double term;
//     int n = 1;
//     do {
//         term = pow(x, 2*n - 1) / (2*n - 1);
//         if (n % 2 == 0) term = -term; 
//         sum += term;
//         ++n;
//     } while (fabs(term) >= eps);
//     return sum;
// }

// void sum_by_pointer(double x, double eps, double* result) {
//     if (result == nullptr) return;
//     double sum = 0.0;
//     double term;
//     int n = 1;
//     do {
//         term = pow(x, 2*n - 1) / (2*n - 1);
//         if (n % 2 == 0) term = -term;
//         sum += term;
//         ++n;
//     } while (fabs(term) >= eps);
//     *result = sum;
// }

// double& sum_by_reference(double x, double eps, double& result) {
//     double sum = 0.0;
//     double term;
//     int n = 1;
//     do {
//         term = pow(x, 2*n - 1) / (2*n - 1);
//         if (n % 2 == 0) term = -term;
//         sum += term;
//         ++n;
//     } while (fabs(term) >= eps);
//     result = sum;
//     return result;
// }

// int main() {
//     double x = 0.20;
//     double eps = 0.5e-4;  

//     cout << "x = " << x << ", точность eps = " << eps << endl;

//     double res1 = sum_by_value(x, eps);
//     cout << "1) Функция по значению:   sum = " << res1 << endl;

//     double res2;
//     sum_by_pointer(x, eps, &res2);
//     cout << "2) Функция с указателями: sum = " << res2 << endl;

//     double res3;
//     double& ref = sum_by_reference(x, eps, res3);
//     cout << "3) Функция со ссылками:   sum = " << ref << endl;

//     cin.ignore(10);
//     cin.get();
//     return 0;  
// }