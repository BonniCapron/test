#include <iostream>
int main()
{
    int width, height;
    std::cin >> width >> height;
    std::cout << "width = " << width;
    std::cout << std::endl << "height = "<< height << std::endl;

    for(int i = 0; i < height; i++)
    {
    for(int j=0; j < width; j++)
{
std::cout << "*";
}
std::cout << std::endl;
}
std::cout << std::endl;
return 0;
}
