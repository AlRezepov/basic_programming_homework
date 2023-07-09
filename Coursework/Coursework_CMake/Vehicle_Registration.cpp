#include <iostream>
#include <vector>
#include "Vehicle_Registration.h"

enum Type_of_land_vehicle
{
    CAMEL = 1,
    FAST_CAMEL,
    CENTAUR,
    ALL_TERRAIN_BOOTS
};

enum Type_of_air_vehicle
{
    AEROPLANE_CARPET = 1,
    EAGLE,
    BROOM
};

void land_vehicle_registration(bool& land, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, int& land_vehicle_cout, std::vector <std::string>& land_vehicle) {

    if (land)
    {
        std::cout << "�� ����� ������ ���� ����������������� ���� �� 2 ������������ ��������." << std::endl;
        std::cout << "��� ����������� �������� ��������� ���� ��������� ����������:" << std::endl;
        std::cout << std::endl;
        std::cout << "\t 1. �������" << std::endl;
        std::cout << "\t 2. �������-���������" << std::endl;
        std::cout << "\t 3. �������" << std::endl;
        std::cout << "\t 4. �������-���������" << std::endl;
        std::cout << "\t 0. ��������� �����������" << std::endl;
        std::cout << std::endl;
        int choice_land_vehicle;
        while (true)
        {
            if (land_vehicle_cout > 0)
            {
                std::cout << "������������������ ������������ ��������: ";
                for (int i = 0; i < land_vehicle.size(); i++)
                {
                    std::cout << land_vehicle[i] << ", ";
                }
                std::cout << std::endl;
            }

            std::cout << "�������� ��������� �� 1 �� 4 ��� ������� 0 ��� ����������: ";
            std::cin >> choice_land_vehicle;
            std::cout << std::endl;
            while (choice_land_vehicle < 0 || choice_land_vehicle > ALL_TERRAIN_BOOTS)
            {
                std::cout << "�� ����� ������������ ��������!" << std::endl;
                std::cout << "����� �������� ���������: ";
                std::cin >> choice_land_vehicle;
                std::cout << std::endl;
            }
            if (choice_land_vehicle == 0)
            {
                if (land_vehicle_cout >= 2)
                {
                    break;
                }
                else
                {
                    std::cout << "������������� ���������� ���������� ��� �����!" << std::endl;
                    continue;
                }
            }
            fchoice_land_vehicle(choice_land_vehicle, land_vehicle_cout, camel, fast_camel, centaur, all_terrain_boots, land_vehicle);
        }
    }

}

void air_vehicle_registration(bool& air, bool& aeroplane_carpet, bool& eagle, bool& broom, int& air_vehicle_cout, std::vector <std::string>& air_vehicle) {

    if (air)
    {
        std::cout << "�� ����� ������ ���� ����������������� ���� �� 2 ������������ ��������." << std::endl;
        std::cout << "��� ����������� �������� ��������� ���� ���������� ����������:" << std::endl;
        std::cout << std::endl;
        std::cout << "\t 1. �����-�������" << std::endl;
        std::cout << "\t 2. ����" << std::endl;
        std::cout << "\t 3. �����" << std::endl;
        std::cout << "\t 0. ��������� �����������" << std::endl;
        std::cout << std::endl;
        int choice_air_vehicle;
        while (true)
        {
            if (air_vehicle_cout > 0)
            {
                std::cout << "������������������ ������������ ��������: ";
                for (int i = 0; i < air_vehicle.size(); i++)
                {
                    std::cout << air_vehicle[i] << ", ";
                }
                std::cout << std::endl;
            }

            std::cout << "�������� ��������� �� 1 �� 3 ��� ������� 0 ��� ����������: ";
            std::cin >> choice_air_vehicle;
            std::cout << std::endl;
            while (choice_air_vehicle < 0 || choice_air_vehicle > BROOM)
            {
                std::cout << "�� ����� ������������ ��������!" << std::endl;
                std::cout << "����� �������� ���������: ";
                std::cin >> choice_air_vehicle;
                std::cout << std::endl;
            }
            if (choice_air_vehicle == 0)
            {
                if (air_vehicle_cout >= 2)
                {
                    break;
                }
                else
                {
                    std::cout << "������������� ���������� ���������� ��� �����!" << std::endl;
                    continue;
                }
            }
            fchoice_air_vehicle(choice_air_vehicle, air_vehicle_cout, aeroplane_carpet, eagle, broom, air_vehicle);
        }
    }
}

void land_air_vehicle_registration(bool& land_air, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, int& land_air_vehicle_cout, std::vector <std::string>& land_air_vehicle) {

    if (land_air)
    {
        std::cout << "�� ����� ������ ���� ����������������� ���� �� 2 ������������ ��������." << std::endl;
        std::cout << "��� ����������� �������� ��������� ���� ��������� � ���������� ����������:" << std::endl;
        std::cout << std::endl;
        std::cout << "\t 1. �������" << std::endl;
        std::cout << "\t 2. �������-���������" << std::endl;
        std::cout << "\t 3. �������" << std::endl;
        std::cout << "\t 4. �������-���������" << std::endl;
        std::cout << "\t 5. �����-�������" << std::endl;
        std::cout << "\t 6. ����" << std::endl;
        std::cout << "\t 7. �����" << std::endl;
        std::cout << "\t 0. ��������� �����������" << std::endl;
        std::cout << std::endl;
        int choice_land_air_vehicle;
        while (true)
        {
            if (land_air_vehicle_cout > 0)
            {
                std::cout << "������������������ ������������ ��������: ";
                for (int i = 0; i < land_air_vehicle.size(); i++)
                {
                    std::cout << land_air_vehicle[i] << ", ";
                }
                std::cout << std::endl;
            }

            std::cout << "�������� ��������� �� 1 �� 7 ��� ������� 0 ��� ����������: ";
            std::cin >> choice_land_air_vehicle;
            std::cout << std::endl;
            while (choice_land_air_vehicle < 0 || choice_land_air_vehicle > 7)
            {
                std::cout << "�� ����� ������������ ��������!" << std::endl;
                std::cout << "����� �������� ���������: ";
                std::cin >> choice_land_air_vehicle;
                std::cout << std::endl;
            }
            if (choice_land_air_vehicle == 0)
            {
                if (land_air_vehicle_cout >= 2)
                {
                    break;
                }
                else
                {
                    std::cout << "������������� ���������� ���������� ��� �����!" << std::endl;
                    continue;
                }
            }
            fchoice_land_air_vehicle(choice_land_air_vehicle, land_air_vehicle_cout, camel, fast_camel, centaur, all_terrain_boots, aeroplane_carpet, eagle, broom, land_air_vehicle);
        }
    }
}

void fchoice_land_vehicle(int& choice_land_vehicle, int& land_vehicle_cout, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, std::vector <std::string>& land_vehicle) {
    switch (choice_land_vehicle)
    {
    case 0:
        break;
    case CAMEL:
        if (!camel)
        {
            camel = true;
            land_vehicle_cout = ++land_vehicle_cout;
            std::cout << "������� ������� ���������������!";
            std::cout << std::endl;
            land_vehicle.push_back("�������");
            break;
        }
        else
        {
            std::cout << "������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case FAST_CAMEL:
        if (!fast_camel)
        {
            fast_camel = true;
            land_vehicle_cout = ++land_vehicle_cout;
            std::cout << "�������-��������� ������� ���������������!";
            land_vehicle.push_back("�������-���������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "�������-��������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case CENTAUR:
        if (!centaur)
        {
            centaur = true;
            land_vehicle_cout = ++land_vehicle_cout;
            std::cout << "������� ������� ���������������!";
            land_vehicle.push_back("�������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case ALL_TERRAIN_BOOTS:
        if (!all_terrain_boots)
        {
            all_terrain_boots = true;
            land_vehicle_cout = ++land_vehicle_cout;
            std::cout << "�������-��������� ������� ����������������!";
            land_vehicle.push_back("�������-���������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "�������-��������� ��� ����������������!";
            std::cout << std::endl;
            break;
        }
    }
}

void fchoice_air_vehicle(int& choice_air_vehicle, int& air_vehicle_cout, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <std::string>& air_vehicle) {
    switch (choice_air_vehicle)
    {
    case 0:
        break;
    case AEROPLANE_CARPET:
        if (!aeroplane_carpet)
        {
            aeroplane_carpet = true;
            air_vehicle_cout = ++air_vehicle_cout;
            std::cout << "����-������ ������� ���������������!";
            air_vehicle.push_back("����-������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "����-������ ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case EAGLE:
        if (!eagle)
        {
            eagle = true;
            air_vehicle_cout = ++air_vehicle_cout;
            std::cout << "��� ������� ���������������!";
            air_vehicle.push_back("���");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "��� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case BROOM:
        if (!broom)
        {
            broom = true;
            air_vehicle_cout = ++air_vehicle_cout;
            std::cout << "����� ������� ����������������!";
            air_vehicle.push_back("�����");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "����� ��� ����������������!";
            std::cout << std::endl;
            break;
        }
    }
}

void fchoice_land_air_vehicle(int& choice_land_air_vehicle, int& land_air_vehicle_cout, bool& camel, bool& fast_camel, bool& centaur, bool& all_terrain_boots, bool& aeroplane_carpet, bool& eagle, bool& broom, std::vector <std::string>& land_air_vehicle) {
    switch (choice_land_air_vehicle)
    {
    case 0:
        break;
    case CAMEL:
        if (!camel)
        {
            camel = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "������� ������� ���������������!";
            land_air_vehicle.push_back("�������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case FAST_CAMEL:
        if (!fast_camel)
        {
            fast_camel = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "�������-��������� ������� ���������������!";
            land_air_vehicle.push_back("�������-���������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "�������-��������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case CENTAUR:
        if (!centaur)
        {
            centaur = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "������� ������� ���������������!";
            land_air_vehicle.push_back("�������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "������� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case ALL_TERRAIN_BOOTS:
        if (!all_terrain_boots)
        {
            all_terrain_boots = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "�������-��������� ������� ����������������!";
            land_air_vehicle.push_back("�������-���������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "�������-��������� ��� ����������������!";
            std::cout << std::endl;
            break;
        }
    case 5:
        if (!aeroplane_carpet)
        {
            aeroplane_carpet = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "����-������ ������� ���������������!";
            land_air_vehicle.push_back("����-������");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "����-������ ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case 6:
        if (!eagle)
        {
            eagle = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "��� ������� ���������������!";
            land_air_vehicle.push_back("���");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "��� ��� ���������������!";
            std::cout << std::endl;
            break;
        }
    case 7:
        if (!broom)
        {
            broom = true;
            land_air_vehicle_cout = ++land_air_vehicle_cout;
            std::cout << "����� ������� ����������������!";
            land_air_vehicle.push_back("�����");
            std::cout << std::endl;
            break;
        }
        else
        {
            std::cout << "����� ��� ����������������!";
            std::cout << std::endl;
            break;
        }
    }
}