#include <iostream>
#include <Windows.h>
#include <cmath>

double factor(int k)
{
   double a = 1;
   for(int i = 1; i <= k; ++i)
   {
       a = i * a;
   } 
   return a;
}
double numerator(int k)
{
    int b = -1, r;
    double d;
     d = k * (k - 1) / 2;
     r = pow(b, d);
    return r;
}
void sum(int n)
{
    double sum = 0;
    int k = 0;
    while (k <= n)
    {
        sum = numerator(k)/factor(k) + sum;
        k = k + 1;
    }
    std::cout << "Sum = " << sum << "\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double n, k = 0;
    std::cout << "Введіть натуральне число: \n";
    std::cout << "Якщо Ви хочете вийти, то натисність Ctrl+Z \n";
    std::cout << "N = ";
    while(std::cin >> n)
    {
        if ((n - (int)n) != 0)
        {
            std::cout << "Error: Число повинно бути натуральним! \n";
        }
        else if (n < 0)
        {
            std::cout << "Error: N мусить бути додатнім, не від'ємним! \n";
        }
        else
        {
            sum(n);
        }
        std::cout << "N = ";
    } 
    system("pause");
    return 0;

}




