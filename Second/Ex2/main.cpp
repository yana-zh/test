#include <iostream>

using namespace std;

enum color
{
    RED,
    YELLOW,
    GREEN
};


int main() {
color c;
c = RED;
while(c == RED)
{
    cout << "RED\n";
}
   return 0;
}
