#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
  char liquid[100];
  char planet[100];
  int LiquidLenght;
  int PlanetLenght;
  double g, rho;

  cout << "Liquid: ";

  cin.getline(liquid, 100, '\n');

  LiquidLenght = strlen(liquid);

  for(int i = 0; i < LiquidLenght; i++)
  {
    if(LiquidLenght == 5)
    {
      if(liquid[i] == 'h' && liquid[i + 1] == 'o' && liquid[i + 2] == 'n' && liquid[i + 3] == 'e' &&liquid[i + 4] == 'y')
      {
        rho = 1.42;
      }
      else if(liquid[i] == 'w' && liquid[i + 1] == 'a' && liquid[i + 2] == 't' && liquid[i + 3] == 'e' &&liquid[i + 4] == 'r')
      {
        rho = 1;
      }
    }
    if(LiquidLenght == 7)
    {
      if(liquid[i] == 'a' && liquid[i + 1] == 'l' && liquid[i + 2] == 'c' && liquid[i + 3] == 'o' &&liquid[i + 4] == 'h' && liquid[i + 5] == 'o' && liquid[i + 6] == 'l')
      {
        rho = 1.42;
      }
    }
  }
  
  cout << "Planet: ";

  cin.getline(planet, 100, '\n');

  PlanetLenght = strlen(planet);

  for(int i = 0; i < PlanetLenght; i++)
  {
    if(PlanetLenght == 4)
    {
      if(planet[i] == 'M' && planet[i + 1] == 'a' && planet[i + 2] == 'r' && planet[i  + 3] == 's')
      {
        g = 3.7;
      }
    }
  }
} 