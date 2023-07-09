#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Vehicle_Registration.h"
#include "Racing.h"

enum Type_of_race
{
    LAND = 1,
    AIR,
    LAND_AIR
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int again_programme = 0;
    do
    {
        //Приветственное окно и выбор типа гонки


        std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
        std::cout << "\t 1. Гонка для наземного транспорта" << std::endl;
        std::cout << "\t 2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "\t 3. Гонка для наземного и воздушного транспорта" << std::endl;
        int choice;
        std::cout << "Выберерите тип гонки: ";
        std::cin >> choice;
        std::cout << std::endl;
        bool land = false;
        bool air = false;
        bool land_air = false;
        while (choice < LAND || choice > LAND_AIR)
        {
            std::cout << "Вы ввели недопустимое значение!" << std::endl;
            std::cout << "Снова выберерите тип гонки: ";
            std::cin >> choice;
            std::cout << std::endl;
        }
        switch (choice)
        {
        case LAND:
            land = true;
            break;
        case AIR:
            air = true;
            break;
        case LAND_AIR:
            land_air = true;
            break;
        }

        //Инициализация и указание игроком дистанции гонки
        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        double distance;
        std::cin >> distance;
        std::cout << std::endl;
        if (distance <= 0) {
            while (distance <= 0)
            {
                std::cout << "Дистанция не может быть отрицательной или равной 0!!!" << std::endl;
                std::cout << "Пожалуйста, укажите заново длину дистанции гонки: ";
                std::cin >> distance;
                std::cout << std::endl;
            }
        }

        //Регистрация транспорта на гонку

        bool camel = false;
        bool fast_camel = false;
        bool centaur = false;
        bool all_terrain_boots = false;
        bool aeroplane_carpet = false;
        bool eagle = false;
        bool broom = false;
        int land_vehicle_cout = 0;
        int air_vehicle_cout = 0;
        int land_air_vehicle_cout = 0;
        std::vector <std::string> land_vehicle;
        std::vector <std::string> air_vehicle;
        std::vector <std::string> land_air_vehicle;
        std::vector <double> land_vehicle_result;
        std::vector <double> air_vehicle_result;
        std::vector <double> land_air_vehicle_result;

        //1. Регистрация наземной гонки

        land_vehicle_registration(land, camel, fast_camel, centaur, all_terrain_boots, land_vehicle_cout, land_vehicle);

        //2. Регистрация воздушной гонки

        air_vehicle_registration(air, aeroplane_carpet, eagle, broom, air_vehicle_cout, air_vehicle);

        //3. Регистрация наземной и воздушной гонки

        land_air_vehicle_registration(land_air, camel, fast_camel, centaur, all_terrain_boots, aeroplane_carpet, eagle, broom, land_air_vehicle_cout, land_air_vehicle);

        //Начало гонки или регистрация дополнительного транспорта
        int again = 0;
        do
        {
            std::cout << "\t 1. Зарегестрировать новый траспорт" << std::endl;
            std::cout << "\t 2. Начать гонку" << std::endl;
            int choice;
            std::cout << "Выберерите действие: ";
            std::cin >> choice;
            std::cout << std::endl;
            while (choice < 1 || choice > 2)
            {
                std::cout << "Вы ввели недопустимое значение!" << std::endl;
                std::cout << "Снова выберерите действие: ";
                std::cin >> choice;
                std::cout << std::endl;
            }
            switch (choice)
            {
            case 1:
                if (land)
                {
                    land_vehicle_registration(land, camel, fast_camel, centaur, all_terrain_boots, land_vehicle_cout, land_vehicle);
                }
                if (air)
                {
                    air_vehicle_registration(air, aeroplane_carpet, eagle, broom, air_vehicle_cout, air_vehicle);
                }
                if (land)
                {
                    land_air_vehicle_registration(land_air, camel, fast_camel, centaur, all_terrain_boots, aeroplane_carpet, eagle, broom, land_air_vehicle_cout, land_air_vehicle);
                }
                break;
            case 2:
                if (land)
                {
                    std::cout << "Участвуют в гонке: ";
                    for (int i = 0; i < land_vehicle.size(); i++)
                    {
                        std::cout << land_vehicle[i] << ", ";
                    }
                    std::cout << std::endl;
                    std::cout << "Дистанция: " << distance << std::endl;
                    std::cout << "Результат гонки: " << std::endl;
                    land_racing(camel, fast_camel, centaur, all_terrain_boots, land_vehicle_result, distance);
                    for (int i = 0; i < land_vehicle_result.size(); i++)
                    {
                        for (int j = 0; j < land_vehicle_result.size() - 1; j++)
                        {
                            if (land_vehicle_result[j] > land_vehicle_result[j + 1])
                            {
                                std::swap(land_vehicle_result[j], land_vehicle_result[j + 1]);
                                std::swap(land_vehicle[j], land_vehicle[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < land_vehicle_result.size(); i++)
                    {
                        std::cout << i + 1 << ". " << land_vehicle[i] << " - " << land_vehicle_result[i] << std::endl;
                    }
                }
                if (air)
                {
                    std::cout << "Участвуют в гонке: ";
                    for (int i = 0; i < air_vehicle.size(); i++)
                    {
                        std::cout << air_vehicle[i] << ", ";
                    }
                    std::cout << std::endl;
                    std::cout << "Дистанция: " << distance << std::endl;
                    std::cout << "Результат гонки: " << std::endl;
                    air_racing(aeroplane_carpet, eagle, broom, air_vehicle_result, distance);
                    for (int i = 0; i < air_vehicle_result.size(); i++)
                    {
                        for (int j = 0; j < air_vehicle_result.size() - 1; j++)
                        {
                            if (air_vehicle_result[j] > air_vehicle_result[j + 1])
                            {
                                std::swap(air_vehicle_result[j], air_vehicle_result[j + 1]);
                                std::swap(air_vehicle[j], air_vehicle[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < air_vehicle_result.size(); i++)
                    {
                        std::cout << i + 1 << ". " << air_vehicle[i] << " - " << air_vehicle_result[i] << std::endl;
                    }
                }
                if (land_air)
                {
                    std::cout << "Участвуют в гонке: ";
                    for (int i = 0; i < air_vehicle.size(); i++)
                    {
                        std::cout << land_air_vehicle[i] << ", ";
                    }
                    std::cout << std::endl;
                    std::cout << "Дистанция: " << distance << std::endl;
                    std::cout << "Результат гонки: " << std::endl;
                    land_air_racing(camel, fast_camel, centaur, all_terrain_boots, aeroplane_carpet, eagle, broom, land_air_vehicle_result, distance);
                    for (int i = 0; i < land_air_vehicle_result.size(); i++)
                    {
                        for (int j = 0; j < land_air_vehicle_result.size() - 1; j++)
                        {
                            if (land_air_vehicle_result[j] > land_air_vehicle_result[j + 1])
                            {
                                std::swap(land_air_vehicle_result[j], land_air_vehicle_result[j + 1]);
                                std::swap(land_air_vehicle[j], land_air_vehicle[j + 1]);
                            }
                        }
                    }
                    for (int i = 0; i < land_air_vehicle_result.size(); i++)
                    {
                        std::cout << i + 1 << ". " << land_air_vehicle[i] << " - " << land_air_vehicle_result[i] << std::endl;
                    }
                }
                again = 1;
                break;
            }
        } while (again != 1);

        std::cout << std::endl;
        std::cout << "\t 1. Провести еще одну гонку" << std::endl;
        std::cout << "\t 2. Выйти" << std::endl;
        choice = 0;
        std::cout << "Выберерите действие: ";
        std::cin >> choice;
        std::cout << std::endl;
        while (choice < 1 || choice > 2)
        {
            std::cout << "Вы ввели недопустимое значение!" << std::endl;
            std::cout << "Снова выберерите действие: ";
            std::cin >> choice;
            std::cout << std::endl;
        }
        switch (choice)
        {
        case 1:
            land = false;
            air = false;
            land_air = false;
            camel = false;
            fast_camel = false;
            centaur = false;
            all_terrain_boots = false;
            aeroplane_carpet = false;
            eagle = false;
            broom = false;
            land_vehicle_cout = 0;
            air_vehicle_cout = 0;
            land_air_vehicle_cout = 0;
            land_vehicle.clear();
            air_vehicle.clear();
            land_air_vehicle.clear();
            land_vehicle_result.clear();
            air_vehicle_result.clear();
            land_air_vehicle_result.clear();
            break;
        case 2:
            again_programme = 1;
            break;

        }
    } while (again_programme != 1);
    return 0;
}



