#include <iostream>
#include <fstream>

int* create_arr(int size) {
    int* arr = new int[size];
    return arr;
}

int main()
{

    std::ifstream file_in("in.txt");
    if (!file_in.is_open()) {
        std::cout << "Не удалось открыть файл!" << std::endl;
        return 1;
    }
    //Определение размера 1-го массива
    int size_01;
    file_in >> size_01;
    //Выделение динамической памяти для 1-го массива
    int* arr_01 = create_arr(size_01);
    //Заполнение 1-го массива
    for (int i = 0; i < size_01; i++) {
        file_in >> arr_01[i];
    }
    //Определение размера 2-го массива
    int size_02;
    file_in >> size_02;
    //Выделение динамической памяти для 2-го массива
    int* arr_02 = create_arr(size_02);
    //Заполнение 2-го массива
    for (int i = 0; i < size_02; i++) {
        file_in >> arr_02[i];
    }
    //Перестановка элементов 1-го массива наоборот
    for (int i = 0; i < size_01 / 2; i++) {
        std::swap(arr_01[i], arr_01[size_01 - (i + 1)]);
    }
    //Перестановка элементов 2-го массива наоборот
    for (int i = 0; i < size_02 / 2; i++) {
        std::swap(arr_02[i], arr_02[size_02 - (i + 1)]);
    }
    //Создание out файла
    std::ofstream file_out("out.txt", std::ios::out);
    //Проверка на открытие файла
    if (!file_out.is_open()) {
        std::cout << "Не удалось открыть файл!" << std::endl;
        return 1;
    }
    //Запись данных в out файл
    file_out << size_02 << std::endl;
    for (int i = 0; i < size_02; i++) {
        file_out << arr_02[i] << " ";
    }
    file_out << std::endl;
    file_out << size_01 << std::endl;
    for (int i = 0; i < size_01; i++) {
        file_out << arr_01[i] << " ";
    }
    //Очистка памяти и закрытие файлов
    delete[] arr_01;
    delete[] arr_02;
    file_in.close();
    file_out.close();

    return 0;
}