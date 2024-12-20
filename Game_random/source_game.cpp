#include <iostream>

#include <cstdlib>

#include <ctime>

int trying = 0;


int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Я игра угадай число" << std::endl;

    while (true)
    {

        int number;

        int number_random;

        char prodolshite;

        

        srand(time(0));

        number_random = rand() % 21;

        std::cout << "Введите число" << std::endl;

        std::cin >> number;

        std::cout << "хотите продолжить если да то введите 'y', если нет то 'q'" << std::endl;

        std::cin >> prodolshite;

        if (prodolshite == 'q')
        {

            break;

        }

        if (number == number_random and prodolshite == 'y')
        {

            std::cout << "вы угадали" << std::endl;

        }

        else

            std::cout << "вы не угадали" << std::endl;

            trying = trying++;

    }

    std::cout << "количество попыток " << trying;
    
    return 0;

}
