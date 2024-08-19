#include <iostream>
using namespace std;

void link(int & b);
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Указатели
    int a = 5;
    int *pa = &a;
    cout << pa << " " << *pa << endl;




    // Указатели для массивов
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    
    int* ptr = arr; // Устанавливаем указатель на начало массива
    
    for (int i = 0; i < size; i++) {
        cout << *ptr << " ";  // Выводим значение, на которое указывает указатель
        ptr++;  // Перемещаем указатель на следующий элемент
    }
    



    // Указатели для функции

    // Указатель на функцию с сигнатурой int(int, int)
    int (*operation)(int, int);

    // Установим указатель на функцию add
    operation = add;

    // Вызовем функцию через указатель
    int result = operation(10, 5);
    cout << "Result of addition: " << result << endl;

    // Переключим указатель на функцию subtract
    operation = subtract;

    // Вызовем функцию через указатель
    result = operation(10, 5);
    cout << "Result of subtraction: " << result << endl;






    // Ссылки
    int b = 5;
    link(b);
    cout << b << endl;


    // указатели для символьных строк
    char str[] = "HRJK";
    char *s = str; 
    cout << s;
    return 0;
}





void link(int & b) {
    b = 7;
} 

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}