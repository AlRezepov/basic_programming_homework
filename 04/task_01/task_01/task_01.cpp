#include <iostream>
#include <string>
#include <fstream>

class Address
{
private:
	std::string city;
	std::string street;
	int house;
	int room;
public:
	Address()
	{
		city = "";
		street = "";
		house = 0;
		room = 0;
	}
	Address(std::string city, std::string street, int house, int room) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->room = room;
	}
	void write_to_file() {
		std::ofstream file_03("out.txt", std::ios::app);
		if (!file_03.is_open()) {
			std::cout << "Не удалось открыть файл!" << std::endl;
		}
		file_03 << city << ", " << street << ", " << house << ", " << room << std::endl;
		file_03.close();
	}
};

int main()
{
	std::ifstream file ("in.txt");
	if (!file.is_open()) {
		std::cout << "Не удалось открыть файл!" << std::endl;
	}
	int size;
	file >> size;
	Address* addresses = new Address[size];
	for (int i = 0; i < size; i++)
	{
		std::string city;
		std::string street;
		int house;
		int room;
		file >> city >> street >> house >> room;
		addresses[i] = Address(city, street, house, room);
	}
	std::ofstream file_02("out.txt");
	if (!file_02.is_open()) {
		std::cout << "Не удалось открыть файл!" << std::endl;
	}
	file_02 << size << std::endl;
	file_02.close();
	for (int i = size-1; i >= 0; i--)
	{
		addresses[i].write_to_file();
	}
	file.close();
	delete[] addresses;
	return 0;
}