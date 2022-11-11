#include <iostream>

// Hier werden long long ints verwendet, sodass Die Fibonaccifolge bis zu 93 ausgerechnet werden kann:
// Einführen von Speichervariablen a und b. So müssen die vorherigen beiden Werte (f(n-1) & f(n-2)) nicht jedes mal erneut über die rekursive Folge ausgerechnet werden.

long long a;
long long b;

long long fibonacci(long long number)
{
    if (number == 1)
    {
        a = 0;
        return 0;
    }
    if (number == 2)
    {
        b = 1;
        return 1;
    }
    else
    {
// temporäre Variablen zum Zwischenspeichern von a und b
        long long a_ = a;
        long long b_ = b;

// a und b aktualisieren zum nächsten Funktionswert
        a = b_;
        b = a_ + b_;

// alte a und b returnen 
        return a_ + b_;
    }
    
}

int main (void)
{
    int n;

    std::cout << "n= " ;
    std::cin >> n ;


    if (n <= 0)
    {
        std::cout << "Number has to be positive." << std::endl;
        return 2;
    }

    for(int i = 1; i <= n; i++)
    {
        std::cout << "fibonacci(" << i << ") = " << fibonacci(i) << std::endl;
    }
}