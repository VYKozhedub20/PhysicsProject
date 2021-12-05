#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
  char liquid[100];
  char Planet[100];
  int LiquidLenght;
  int PlanetLenght;
  int g, rho;

  cout << "Liquid: ";

  cin.getline(liquid, 100, '\n');

  LiquidLenght = strlen(liquid);

  for(int i = 0; i < LiquidLenght; i++)
  {
    if(LiquidLenght == 5)
    {
      if(liquid[i] == 'h' && liquid[i + 1] == 'o' && liquid[i + 2] == 'n' && liquid[i + 3] == 'e' &&liquid[i + 4] == 'y')
      {
        rho = 1;
      }
      else if(liquid[i] == 'w' && liquid[i + 1] == 'a' && liquid[i + 2] == 't' && liquid[i + 3] == 'e' &&liquid[i + 4] == 'r')
      {
        
      }
    }
  }
} 