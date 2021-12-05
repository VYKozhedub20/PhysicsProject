#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
  char liquid[100];
  char planet[100];
  int LiquidLenght;
  int PlanetLenght;
  double g, rho, Depth;

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
        cout << "The density of honey is 1 gram per milliliter." << endl;
      }
      else if(liquid[i] == 'w' && liquid[i + 1] == 'a' && liquid[i + 2] == 't' && liquid[i + 3] == 'e' &&liquid[i + 4] == 'r')
      {
        rho = 1;
        cout << "The density of water is 1 gram per milliliter." << endl;
      }
    }
    if(LiquidLenght == 7)
    {
      if(liquid[i] == 'a' && liquid[i + 1] == 'l' && liquid[i + 2] == 'c' && liquid[i + 3] == 'o' &&liquid[i + 4] == 'h' && liquid[i + 5] == 'o' && liquid[i + 6] == 'l')
      {
        rho = 0.8;
        cout << "The density of alcohol is 1 gram per milliliter." << endl;
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
        cout << "The free-fall acceleration on the surface of Mars is 3.7 meters per square second." << endl;
      }
    }
    if(PlanetLenght == 5)
    {
      if(planet[i] == 'V' && planet[i + 1] == 'e' && planet[i + 2] == 'n' && planet[i  + 3] == 'u' && planet[i  + 4] == 's')
      {
        g = 8.9;
        cout << "The free-fall acceleration on the surface of Venus is 8.9 meters per square second." << endl;
      }
      else if(planet[i] == 'E' && planet[i + 1] == 'a' && planet[i + 2] == 'r' && planet[i  + 3] == 't' && planet[i  + 4] == 'h')
      {
        g = 9.8;
        cout << "The free-fall acceleration on the surface of Earth is 9.8 meters per square second." << endl;
      }
    }
    if(PlanetLenght == 6)
    {
      if(planet[i] == 'S' && planet[i + 1] == 'a' && planet[i + 2] == 't' && planet[i  + 3] == 'u' && planet[i  + 4] == 'r' && planet[i  + 5] == 'n')
      {
        g = 10.4;
        cout << "The free-fall acceleration on the surface of Saturn is 10.4 meters per square second." << endl;
      }
      else if(planet[i] == 'U' && planet[i + 1] == 'r' && planet[i + 2] == 'a' && planet[i  + 3] == 'n' && planet[i  + 4] == 'u' && planet[i  + 5] == 's')
      {
        g = 8.9;
        cout << "The free-fall acceleration on the surface of Uranus is 8.9 meters per square second." << endl;
      }
    }
    if(PlanetLenght == 7)
    {
      if(planet[i] == 'J' && planet[i + 1] == 'u' && planet[i + 2] == 'p' && planet[i  + 3] == 'i' && planet[i  + 4] == 't' && planet[i  + 5] == 'e'
      && planet[i  + 6] == 'r')
      {
        g = 24.8;
        cout << "The free-fall acceleration on the surface of Jupiter is 24.8 meters per square second." << endl;
      }
      else if(planet[i] == 'N' && planet[i + 1] == 'e' && planet[i + 2] == 'p' && planet[i  + 3] == 't' && planet[i  + 4] == 'u' && planet[i  + 5] == 'n'
      && planet[i  + 6] == 'e')
      {
        g = 11;
        cout << "The free-fall acceleration on the surface of Neptune is 11 meters per square second." << endl;
      }
    }
  }
  cout << "Depth(in meters): ";
  cin >> Depth;
  cout << "Hydrostatic pressure(p) = " << rho * g * Depth << "Pa";  
}