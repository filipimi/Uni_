#include <iostream>
#include <cmath>



int main(int argc, char** argv)
{
    double a;
    std::cout << "a = " << std::flush;
    std::cin >> a;

    double b;
    std::cout << "b = " << std::flush;
    std::cin >> b;

    double c;
    std::cout << "c = " << std::flush;
    std::cin >> c;
    
    double f1 = -b + std::sqrt(std::pow(b,2) - 4*a*c) / 2*a;
    double f2 = -b - std::sqrt(std::pow(b,2) - 4*a*c) / 2*a;

    printf("Die quadratische Funktion lautet: f(x) = %fx^2 + %fx + %f\n", a, b, c);

    if ((std::pow(b,2) - 4*a*c) < 0)
    {
        printf("Sie hat keine realen Nullstellen.");
    }

    else
    {
    printf("Die Nullstellen der Funktion sind: \n x_1 = %f \n x_2 = %f \n", f1, f2); 
    }

}