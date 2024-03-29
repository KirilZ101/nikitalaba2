//
//  main.cpp
//  nikitalaba2
//
//  Created by Кирилл Заболотний on 25.02.2024.
//

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;;

 int main(int argc, const char * argv[]) {
     
     int maxel = 100;
     int nummax = -1;
     int n;
//создание массива и проверка на ввод
     cout << "Введите длину массива n: ";
     cin >> n;
     if (cin.fail()){
         cout << "Ошибка!Введите коректное значение переменной n";
         return 1;
     }
     if (n < 0 or n == 0 ){
         cout << "Ошибка!Введите коректное значение переменной n" <<endl;
         return 1;
     }
     /*int k = n;
     string str = to_string(k);
     if (str.find('.')) cout << ";Ошибка!Введите коректное значение переменной n";

     */
     
     int a[n];
     
     srand(time(0));
     cout << "Массив:" <<endl;
     for (int i = 0; i < n; i++) {
         a[i] = rand() % 21 - 10; // Генерация чисел от -10 до 10
         cout << a[i] << " ";
     }
//Нахождение максимального элемента массива и его номера
     int *pk = a;
     for (int i = 0; i < n; i++) {
         if (abs(*pk) < abs(maxel)) {
             maxel = *pk;
         }
         pk++;
     }
     
     cout << endl << "Наименьшее по модулю число массива: " << maxel << endl;
//Нахождение суммы элементов между первым и вторым нулевым элементом
     int sum = 0;
     int *pkk = a;
     int firstindex = -1;
     for (int i = 0; i < n; i++) {
         if(*pkk == 0) {
            firstindex = i;
             break;
             }
         }
     cout << "(";
     for (int i = firstindex; i < n; i++) {
         sum += abs(*(pkk ));
         cout << *(pkk );
         pkk++;
     }
     cout << ")";
     if (firstindex != -1) {
         cout << "Сумма элементов после первого нуля : " << sum <<endl;
     }
         else {
             cout << "Сумма элементов после первого нуля равна нулю" << endl;
     }
     
     
     
     cout << "Изменённый массив:"<<endl;
     int *pkc = a;
     int *pkn = a;
     for (int i = 0; i < n; i++) {
         if ((i + 1) % 2 != 0) {
             cout << *pkn << " ";
         }
         pkn++;
     }
     cout << "_ ";
     for (int i = 0; i < n; i++) {
         if ((i + 1) % 2 == 0) {
             cout << *pkc << " ";
         }
         pkc++;
     }
     cout << endl;
     
     return 0;
 }

