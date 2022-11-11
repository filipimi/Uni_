#include <iostream>

int fibonacci(int number)
{
// Anfang der Rekursionsfolge, also von 1 und 2 festlegen
    if (number == 1)
    {
        return 0;
    }
    if (number == 2)
    {
        return 1;
    }
// Ab der dritten Zahl die vorherigen beiden addieren
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
    
}

int main (void)
{
// Eingabe von Zahl n
    int n;
    std::cout << "n= " ;
    std::cin >> n ;

// Überprüfen ob eingabe legit
    if (n <= 0)
    {
        std::cout << "Number has to be positive." << std::endl;
        return 1;
    }

// Ausgabe der Funktionswerte von 1 bis n
    for(int i = 1; i <= n; i++)
    {
        std::cout << "fibonacci(" << i << ") = " << fibonacci(i) << std::endl;
    }
}

// Große Werte stimmen nicht mehr überein, da das format Integer mit seinen 8 bytes nur eine endliche Zahl (ca. 4 Mrd) an ganzen Zahlen (also pos. und neg.) abdecken kann. 
// Die Grenze von 2 Mrd wird bei fibonacci(47) überschritten, sodass ab dieser Zahl falsche Werte herauskommen.
// Deshalb müsste hier ein long oder ein noch größeres Format verwendet werden.
