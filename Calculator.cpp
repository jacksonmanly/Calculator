// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void showmenu()
{
    std::cout << "Choose an operation:\n";
    std::cout << "1:Addition\n";
    std::cout << "2.Subtract\n";
    std::cout << "3.Multiply\n";
    std::cout << "4.Division\n";
}

int add(int x, int y)
{
    return x + y;
}
 
int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    if (y ==0)
        std::cout << "Invalid";
    else
        return x / y;
}

    int main()
{
    int x{};
    int y{};
    int choice{};
    
    std::cout << "Select your first number:\n";
    std::cin >> x;
    
    showmenu();
        std::cin >> choice;
      
      std::cout << "Enter your 2nd number:\n";
      std::cin >> y;

      if (choice == 1)

          std::cout << "Answer:" << add(x, y);

      else if (choice == 2)

          std::cout << "Answer:" << subtract(x, y);

      else if (choice == 3)
          std::cout << "Answer:" << multiply(x, y);

      else if (choice == 4)
          std::cout << "Answer:" << division(x, y);
      else
          std::cout << "Invalid";

      return 0;



   
}

