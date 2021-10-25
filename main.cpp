#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

#include "technicalmeans.h"

//поиск самого старого технического средства
void FindOldest(TechnicalMeans tm1, TechnicalMeans tm2, TechnicalMeans* tm, int n)
{
    int min = tm[0].getYear();
    int number = 0;
    int res =0;
    std::string name;

    for (int i=0; i<n; i++)
    {
        if(tm[i].getYear() < min)
        {
            min = tm[i].getYear();
            number=i;
        }
    }

    res = tm[number].getYear();
    name = tm[number].getTitle();

    if(res > tm1.getYear())
    {
        res = tm1.getYear();
        name = tm1.getTitle();
    }

    if(res > tm2.getYear())
    {
        res= tm2.getYear();
        name = tm2.getTitle();
    }

    std::cout<< std::endl;
    std::cout<<"Самое старое техническое средство: "<<name<<" Год ввода в эксплуатацию: "<<res<<std::endl;
}



// Программа, использующая класс
int main()
{
     setlocale(LC_ALL, "rus");

     const unsigned N = 3;

     TechnicalMeans tm_obj1;                 // Вызов конструктора по умолчанию
     TechnicalMeans tm_obj2("Kate",1977, "Kate", 32445);    // Вызов конструктора с параметрами
     tm_obj1.setTitle("Anita");
     tm_obj1.setYear(1978);
     tm_obj1.setAuthor("Ann");
     tm_obj1.setInventoryNumber(2356);
     std::cout <<"По умолчанию "<< tm_obj1.getTitle() << " " << tm_obj1.getYear() << " " << tm_obj1.getAuthor()<<" "<<tm_obj1.getInventoryNumber()<<std::endl;
     std::cout <<"С параметрами "<< tm_obj2.getTitle() << " " << tm_obj2.getYear() << " " << tm_obj2.getAuthor()<<" "<<tm_obj2.getInventoryNumber()<<std::endl;
     std::cout << std::endl;

     TechnicalMeans tm_obj3[N];
     std::string title_buf;
     std::string author_buf;
     int inventory_number_buf;
     int year_buf;

     for(int i=0;i<N;i++)
     {
         std::cout << "№"<<i <<std::endl;
         std::cout <<"Введите название технического средства: ";
         std::cin >> title_buf;
         tm_obj3[i].setTitle(title_buf);

         std::cout <<"Введите фирму­изготовитель: ";
         std::cin >> author_buf;
         tm_obj3[i].setAuthor(author_buf);

         std::cout <<"Введите год ввода в эксплуатацию: ";
         std::cin >> year_buf;
         tm_obj3[i].setYear(year_buf);

         std::cout <<"Введите инвентарный номер: ";
         std::cin >> inventory_number_buf;
         tm_obj3[i].setInventoryNumber(inventory_number_buf);
         std::cout<<std::endl;
     }

     for(int i=0;i<N;i++)
     {
         std::cout << tm_obj3[i].getTitle() << " " << tm_obj3[i].getYear()<< " " << tm_obj3[i].getAuthor()<<" "<<tm_obj3[i].getInventoryNumber()<<std::endl;
     }

     std::cout << std::endl;
     FindOldest(tm_obj1, tm_obj2, tm_obj3, N);

     return 0;
 }
