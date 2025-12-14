#include <iostream>

int main()
{
    int height, width;
    std::cin >> height >> width;

    int num = 1;

    for (int i = 0; i < height; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < width; j++)
            {
                std::cout << num << " ";
                num++;
            }
        }
        else
        {
            int temp = num + width - 1;
            for (int j = 0; j < width; j++)
            {
                std::cout << temp << " ";
                temp--;
            }
            num += width;
        }

        std::cout << std::endl;
    }

    return 0;
}
