#include <iostream>

using namespace std;

enum class color
{
    RED,
    YELLOW,
    GREEN,
};

color& operator++(color& t)
{
   switch(t)
   {
   case color::RED :
      return t=color::YELLOW;
   case color::YELLOW:
      return t=color::GREEN;
   case color::GREEN:
      return t=color::RED;
   }
}

int main() {
    color c;
    c = color::RED;
    while(true)
    {
        ++c;
        cout << char(7) << (c == color::RED ? "RED\n" : c == color::YELLOW ? "YELLOW\n" : "GREEN\n");
    }

   return 0;
}
