#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "ведіть a, b, c: ";
    std::cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                std::cout << "рівняня має безліч розвязків./n";
            else
                std::cout << "рівняня не має розвязків.\n";
        }
        else
        {
            double x = -c / b;
            std::cout << "рівняня лінійне, x = " << x << std::endl;
        }
    }
    else
    {
        double D = b*b - 4*a*c;
        if (D > 0)
        {
            double x1 = (-b + sqrt(D)) / (2*a);
            double x2 = (-b - sqrt(D)) / (2*a);
            std::cout << "два корені: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (D == 0)
        {
            double x = -b / (2*a);
            std::cout << "один корінь: x = " << x << std::endl;
        }
        else
        {
            std::cout << "корнів немає в дійсних числах./n";
        }
    }
    return 0;
}





