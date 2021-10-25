#pragma one
#include <iostream>
#include <string.h>

// ���������� ������
class TechnicalMeans
{
public: // �������� ����� ������
    TechnicalMeans(); // ����������� ��� ����������
    TechnicalMeans(std::string title, int year, std::string author, int inventory_number); //����������� � �����������
    ~TechnicalMeans(); // ����������

    //������, ��������������� ����� �������� �������
     void setTitle(std::string title);
     void setAuthor(std::string author);
     void setInventoryNumber(int inventory_number);
     void setYear(int year);

    //������, ����������� ��������� �������� �������
     std::string getTitle();
     int getInventoryNumber();
     std::string getAuthor();
     int getYear();

     //����� ����� ������ ���. ��������
    // void FindOldest(TechnicalMeans tm1, TechnicalMeans tm2, TechnicalMeans* tm, int n);

private: // �������� ����� ������
    std::string author; //�����������������
    std::string title; //�������� ������������ ��������
    int year; //��� ����� � ������������
    int inventory_number; //����������� �����
};

