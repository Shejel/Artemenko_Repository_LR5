#include<iostream>
#include<string>
#include<Artemenko_Repository.cpp>
using namespace std;

float task1()
{
    float num1;
    cout << "Введите первое число: ";
    prov(num1);
    return num1;
}

float task2()
{
    float num2;
    cout << "Введите второе число: ";
    prov(num2);
    return num2;
}

void task3(float num11, float num22)
{
    cout << "Сумма равна " << num11 + num22 << endl;
}

void task4(float num11, float num22)
{
    cout << "Разность равна " << num11 - num22 << endl;
}