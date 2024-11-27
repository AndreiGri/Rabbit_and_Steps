#include <iostream>

int rabbit_and_steps(int n, int k = 3)
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
    int n = 5;
    int k = 4;
    std::cout << ' ' << rabbit_and_steps(n, k) << std::endl; //Выводим результат вычисления.
}