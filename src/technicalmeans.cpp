#include "technicalmeans.h"

//Реализация функций-членов класса

    //Конструктор по умолчанию
    TechnicalMeans::TechnicalMeans()
    {
        title = "Noname" ;
        year = 0;
    }

     //Конструктор с параметрами
    TechnicalMeans::TechnicalMeans(std::string ntitle, int nyear, std::string nauthor, int ninventory_number)
        : title(ntitle)
        , year(nyear)
        , author(nauthor)
        , inventory_number(ninventory_number)
    {}

    TechnicalMeans::~TechnicalMeans()
    {
     //Деструктор по умолчанию, можно не включать в класс,
     // явно в программе не вызывается
    }

    // Возвращает значение свойства title
    std::string TechnicalMeans::getTitle()
    {
        return title;
    }

    // Перезаписывает значение свойства title
    void TechnicalMeans::setTitle(std::string title)
    {
        this -> title = title;
    }

    // Возвращает значение свойства author
    std::string TechnicalMeans::getAuthor()
    {
        return author;
    }

    // Перезаписывает значение свойства author
    void TechnicalMeans::setAuthor(std::string author)
    {
        this -> author = author;
    }

    // Возвращает значение свойства inventory_number
    int TechnicalMeans::getInventoryNumber()
    {
        return inventory_number;
    }

    // Перезаписывает значение свойства inventory_number
    void TechnicalMeans::setInventoryNumber(int inventory_number)
    {
        this -> inventory_number = inventory_number;
    }

        // Возвращает значение свойства year
    int TechnicalMeans::getYear()
    {
        return year;
    }

    // Перезаписывает значение свойства year
    void TechnicalMeans::setYear(int year)
    {
        this -> year = year;
    }


