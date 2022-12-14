#include <iostream> 
#include <cstring> //подключение библиотеки для работы со строками string

using namespace std; 

int main() { 
    setlocale(0, ""); //русский язык в консоли

    string num; //объявление строки типа string с именем num
    cin >> num; //запрос на ввод строки num

    for (int i = 0; i < num.size(); ++i) { //цикл (пробегаем по всей строке)
        if (num[i] < '0' || num[i] > '9') { //проверка на цифру (если символ в строке не цифра, то завершаем программу)
            cout << "Число введено некорректно"; //вывод сообщения в консоль (произойдет, если не цифра)

            return 0; //завершение работы программы
        }
    }

    int summ = 0; //объявление переменной summ (сумма) со значением 0

    for (int i = 0; i < num.size(); ++i) { //опять пробегаем по строке
        summ += (num[i] - '0'); //изменение значения переменной summ
    }

    cout << summ; //Вывод summ (суммы) в консоль

    return 0;//завершение работы программы
}