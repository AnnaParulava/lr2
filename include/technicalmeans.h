#pragma one
#include <iostream>
#include <string.h>

// Объявление класса
class TechnicalMeans
{
public: // открытая часть класса
    TechnicalMeans(); // Конструктор без параметров
    TechnicalMeans(std::string title, int year, std::string author, int inventory_number); //Конструктор с параметрами
    ~TechnicalMeans(); // Деструктор

    //Методы, устанавливающие новое значение свойств
     void setTitle(std::string title);
     void setAuthor(std::string author);
     void setInventoryNumber(int inventory_number);
     void setYear(int year);

    //Методы, позволяющие прочитать значение свойств
     std::string getTitle();
     int getInventoryNumber();
     std::string getAuthor();
     int getYear();

     //Найти самое старое тех. средство
    // void FindOldest(TechnicalMeans tm1, TechnicalMeans tm2, TechnicalMeans* tm, int n);

private: // закрытая часть класса
    std::string author; //Фирма­изготовитель
    std::string title; //Название технического средства
    int year; //Год ввода в эксплуатацию
    int inventory_number; //Инвентарный номер
};

