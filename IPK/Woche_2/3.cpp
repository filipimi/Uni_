#include <iostream>

#include <cstddef>


int iterative(int q, int n)
{
    int a = 1;   
    if (n == 0)
    {
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        a = a * q;
    }
    
    return a;
}

int iterativeAa(int q, int n){
    if (n == 0)
    {
        return 1;
    }

    long out = q;
    //repeat multiplication with q n-times
    for(int i=1; i<n; i++){
        out *= q;
    }
    return out;
}

int recursive(int q, int n)
{
    if (n == 1)
    {
        return q;
    }

    else if (n == 0)
    {
        return 1;
    }

    else
    {
        return q * recursive(q,n-1);
    }
}

int better (int q, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int b = q;
    int a = 1;

    while (a <= n/2)
    {
        a *= 2;
        b = iterative(b, 2);
    }

    return b * iterative(q, n-a);
}

int main (void)
{
// Eingabe von Zahl n
    int q;
    std::cout << "q= " ;
    std::cin >> q ;

    int n;
    std::cout << "n= " ;
    std::cin >> n ;


// Überprüfen ob eingabe legit
    if (n < 0)
    {
        std::cout << "Number has to be positive." << std::endl;
        return 1;
    }

    std::cout << "(iterative) " << q << "^" << n << " = " << iterative(q,n) << std::endl;
    std::cout << "(iterativeAa) " << q << "^" << n << " = " << iterativeAa(q,n) << std::endl;
    std::cout << "(recursive) " << q << "^" << n << " = " << recursive(q,n) << std::endl;
    std::cout << "(better) " << q << "^" << n << " = " << better(q,n) << std::endl;
}