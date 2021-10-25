#include "technicalmeans.h"

//���������� �������-������ ������

    //����������� �� ���������
    TechnicalMeans::TechnicalMeans()
    {
        title = "Noname" ;
        year = 0;
    }

     //����������� � �����������
    TechnicalMeans::TechnicalMeans(std::string ntitle, int nyear, std::string nauthor, int ninventory_number)
        : title(ntitle)
        , year(nyear)
        , author(nauthor)
        , inventory_number(ninventory_number)
    {}

    TechnicalMeans::~TechnicalMeans()
    {
     //���������� �� ���������, ����� �� �������� � �����,
     // ���� � ��������� �� ����������
    }

    // ���������� �������� �������� title
    std::string TechnicalMeans::getTitle()
    {
        return title;
    }

    // �������������� �������� �������� title
    void TechnicalMeans::setTitle(std::string title)
    {
        this -> title = title;
    }

    // ���������� �������� �������� author
    std::string TechnicalMeans::getAuthor()
    {
        return author;
    }

    // �������������� �������� �������� author
    void TechnicalMeans::setAuthor(std::string author)
    {
        this -> author = author;
    }

    // ���������� �������� �������� inventory_number
    int TechnicalMeans::getInventoryNumber()
    {
        return inventory_number;
    }

    // �������������� �������� �������� inventory_number
    void TechnicalMeans::setInventoryNumber(int inventory_number)
    {
        this -> inventory_number = inventory_number;
    }

        // ���������� �������� �������� year
    int TechnicalMeans::getYear()
    {
        return year;
    }

    // �������������� �������� �������� year
    void TechnicalMeans::setYear(int year)
    {
        this -> year = year;
    }


