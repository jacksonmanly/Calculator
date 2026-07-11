// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> <cmath>
void showmenu()
{
    std::cout << "Choose an operation:\n";
    std::cout << "1:Addition\n";
    std::cout << "2.Subtract\n";
    std::cout << "3.Multiply\n";
    std::cout << "4.Division\n";
    std::cout << "5.Power\n";
}

double add(double x, double y)
{
    return x + y;
}
 
double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double division(double x, double y)
{
    if (y ==0)
    {       
        std::cout << "Cannot divide by zero";
        return 0;
    }
    else
        return x / y;
}

double squared(double x, double y)
{
   return pow(x,y);
}

    int main()
{
    double x{};
    double y{};
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
      else if (choice == 5)
          std::cout << "Answer:" << squared(x,y);
      else
          std::cout << "Invalid";

      return 0;



   
}

