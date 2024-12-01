#include <iostream>

int rabbit_and_steps(int n, int k = 3)          //Метод для вычисления кол-ва вариантов прохода лестницы кроликом
{
    int count = 0;

    if (n == 0)                                 //Если в метод в качестве первого аргумента передаётся 0
    {
        return 1;                               //метод возвращает 1.
    }

    for (int i = n < k ? 0 : n - k; i < n; i++) //Если при очередной итерации i = 0 (соответственно n == 0) то добавляем в count 1
    {
        count += rabbit_and_steps(i, k);        
    }
    return count;
}

int main()
{
    int n;                                                   //Объявляем переменную для записи кол-ва ступеней
    int k;                                                   //Объявляем переменную для записи кол-ва максимального прыжка кролика
    std::cout << "Enter the number of steps in the ladder and the maximum number of steps the rabbit can jump over: ";//Запрос
    std::cin >> n >> k;                                      //Запись значений
    std::cout << ' ' << rabbit_and_steps(n, k) << std::endl; //Выводим результат вычисления.
    return 0;
}