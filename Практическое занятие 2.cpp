#include <iostream> // Ввод и вывод
#include <cmath>    // Математические функции: round, sqrt

#include "Переменные.cpp"
#include "Консоль.cpp"

using namespace std;

class Calculator
{
public:

    // Сумма двух чисеЛ
    static double Sum(double a, double b)
    {
        double sum = a + b;

        double result = round(sum * 100.0) / 100.0;

        cout << "Сумма: " << result << endl;

        return result;
    }

    // Подзадача 2
    // Площадь круга
    static double CircleArea(double radius)
    {
        // Формула площади круга:
        // S = pi * r^2

        const double PI = 3.1415926535;

        double area = PI * radius * radius;

        // Округляем до двух знаков после запято
        double result = round(area * 100.0) / 100.0;

        cout << "Площадь круга: " << result << endl;

        return result;
    }

    // Подзадача 3
    // Площадь прямоугольник
    static double RectangleArea(double first, double second)
    {
        // Формула:
        // S = a * b

        double area = first * second;

        // Округляем
        double result = round(area * 100.0) / 100.0;

        cout << "Площадь прямоугольника: " << result << endl;

        return result;
    }

    // Подзадача 4
    // Площадь треугольника по формуле Герона
    static double TriangleArea(double first, double second, double third)
    {
        // Полупериметр:
        // p = (a + b + c) / 2

        double p = (first + second + third) / 2.0;

        // Формула Герона:
        // S = sqrt(p * (p-a) * (p-b) * (p-c))

        double area = sqrt(
            p *
            (p - first) *
            (p - second) *
            (p - third)
        );

        // Округляем
        double result = round(area * 100.0) / 100.0;

        cout << "Площадь треугольника по формуле Герона: "
            << result << endl;

        return result;
    }

    // Подзадача 5
    // Площадь треугольника через основание и высоту
    static double TriangleArea(double base, double height)
    {
        // Формула:
        // S = 1/2 * основание * высота

        double area = 0.5 * base * height;

        // Округляем
        double result = round(area * 100.0) / 100.0;

        cout << "Площадь треугольника через основание и высоту: "
            << result << endl;

        return result;
    }
};


int main()
{
    // Настройка русского языка в консоли Windows
    Console::SetRussianOnWindows();

    // Подзадача 1.1
    // Инструкция пользователю
    cout << "========================================" << endl;
    cout << "         ГЕОМЕТРИЧЕСКИЙ КАЛЬКУЛЯТОР" << endl;
    cout << "========================================" << endl;

    cout << "Введите три числовых значения." << endl;
    cout << endl;

    cout << "Первое значение может использоваться как:" << endl;
    cout << "- радиус круга;" << endl;
    cout << "- первая сторона прямоугольника;" << endl;
    cout << "- первая сторона треугольника;" << endl;
    cout << "- основание треугольника." << endl;

    cout << endl;

    cout << "Второе значение может использоваться как:" << endl;
    cout << "- вторая сторона прямоугольника;" << endl;
    cout << "- вторая сторона треугольника;" << endl;
    cout << "- высота треугольника." << endl;

    cout << endl;

    cout << "Третье значение используется как третья сторона "
        << "треугольника для формулы Герона." << endl;

    cout << endl;


    // Подзадача 1.2
    // Создаём три переменные типа doub

    double first;
    double second;
    double third;


    // Вводим первое число

    cout << "Введите первое значение: ";
    cin >> first;


    // Вводим второе число

    cout << "Введите второе значение: ";
    cin >> second;


    // Вводим третье число

    cout << "Введите третье значение: ";
    cin >> third;


    cout << endl;
    cout << "========================================" << endl;
    cout << "РЕЗУЛЬТАТЫ" << endl;
    cout << "========================================" << endl;


    // Сумма первых двух чисел

    Calculator::Sum(first, second);


    // Подзадача 2
    // first считаем радиусом круга

    Calculator::CircleArea(first);


    // Подзадача 3
    // first и second считаем сторонами прямоугольника

    Calculator::RectangleArea(first, second);


    // Подзадача 4
    // first, second и third считаем сторонами треугольника

    Calculator::TriangleArea(first, second, third);


    // Подзадача 5
    // first = основание
    // second = высота

    Calculator::TriangleArea(first, second);


    cout << "========================================" << endl;

    return 0;
}