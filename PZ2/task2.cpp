#include <iostream>

int main()
{

    int fact = 1;
    int ans = 1;
    int n = 0;
    std::cout << "Введите значение последнего факториала: ";
    std::cin >> n;
    for (int i = 1; i <= n; i ++)
    {   
        fact = fact * i;
        ans = ans * fact;
    }
    std::cout<<"Произведение = "<<ans;
    
}