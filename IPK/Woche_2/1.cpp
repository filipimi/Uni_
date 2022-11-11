#include <iostream> 

int number;
int count = 0;

void collatz(int number)
{
    while(number != 1 && number != 0 && number != -1 && number !=-5 && number != -17)
    {
        if (number % 2 == 0)
        {
            number = number/2; 
            count++;
        }
        else
        {
            number = number * 3 + 1;
            count++;
        }        
    }

    std::cout << number << std::endl;

    std::cout << "gone through while-loop " << count << " times" << std::endl;    
}

void collatzAa(long number){
  //go through steps while given numbers are not reached
  do{
    //case even
    if (number % 2 == 0){
      number /= 2;
    }
    //case odd
    else{
      number *= 3;
      number += 1;
    }
  }
  while (number != 1 && number != 0 && number != -1 && number != -5 && number != -17);
  std::cout << "The result is: " << number << "\n";
}

int main(void)
{
    std::cout << "number: ";
    std::cin >> number;

    collatz(number);
    collatzAa(number);
}