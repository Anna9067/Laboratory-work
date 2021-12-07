
#include <iostream>
#include <Windows.h>

void dividers(long n)
{
    long d = 1;
    int i = 0;
    while (d <= n)
    {
        if (n % d == 0)
        {
            i = i + 1;
            std::cout << " d [" << i << "] = " << d << "\n";
        }
        d = d + 1;
    }
}
int main()
{   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    long n;
    std::cout << " Введіть натуральне ціле число: " << "\n"; 
    std::cout << " Якщо Ви хочете вийти, то натисність Ctrl+Z \n";
    std::cout << "N = ";
    while (std::cin >> n)
    {  
        if (n <= 0)
        {
            std::cout << "Error: Повинно бути додатнім!" << "\n";
        }
        else
        {
             dividers(n);
        }
        std::cout << "N = ";
    } 
    system("pause");
    return 0;
}



