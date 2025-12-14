#include <iostream>

int main()
{
    int n;
    std::cin >> n; 

 
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int s = 0; s < n / 2 - i; s++)
            std::cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }


    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int s = 0; s < n / 2 - i; s++)
            std::cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }

    return 0;
}
