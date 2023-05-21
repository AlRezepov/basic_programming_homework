#include <iostream>
#include <string>

struct Address
{
    std::string city;
    std::string street;
    int number_house;
    int number_room;
    int index;
};

void display_adress(Address x) {
    std::cout << "Город: " << x.city << std::endl;
    std::cout << "Улица: " << x.street << std::endl;
    std::cout << "Номер дома: " << x.number_house << std::endl;
    std::cout << "Номер квартиры: " << x.number_room << std::endl;
    std::cout << "Индекс: " << x.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Address x, y;
    x.city = "Москва"; x.street = "Арбат"; x.number_house = 12; x.number_room = 8; x.index = 123456;
    y.city = "Ижевск"; y.street = "Пушкина"; y.number_house = 59; y.number_room = 143; y.index = 953769;
    display_adress(x);
    display_adress(y);
    return 0;
}
