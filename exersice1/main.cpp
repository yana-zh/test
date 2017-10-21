#include <iostream>
#include <array>

using namespace std;
const int size = 10;
int main()
{
    cout << "Exersice 1:" << endl;
    int massive[size]{};
    for(int i = 0; i < size; ++i)
    {
        massive[i] = i;
    }
    for(auto a : massive)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    int s = 0;
    for(int i = 0; i < size; ++i)
    {
        massive[i] *= massive[i];
        s += massive[i];
    }
    for(auto a : massive)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    cout << "Sum = " << s << endl;

    //////////////////////////////

    cout << "Exersice 3:" << endl;

    int massive2[size]{};
    int* p = massive2;
    for(int i = 0; i < size; ++i)
    {
        *p = i;
        ++p;
    }
    for(auto a : massive2)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;

    p = massive2;
    s = 0;
    for(int i = 0; i < size; ++i)
    {
        *p *= *p;
        s += *p;
        ++p;
    }
    for(auto a : massive2)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    cout << "Sum = " << s << endl;

    //////////////////////////////

    cout << "Exersice 2:";
    bool end = false;
    do{
        cout << char(7) << "\nWhat size are you looking for? <Int, Float, Long, lonG long, Char, Double, Size_t, or E to exit>\n";
        char type{};
        cin >> type;
        switch(type){
        case 'i':
        case 'I':
              cout << sizeof(int);
            break;
        case 'f':
        case 'F':
              cout << sizeof(float);
            break;
        case 'l':
        case 'L':
              cout << sizeof(long);
            break;
        case 'g':
        case 'G':
              cout << sizeof(long long);
            break;
        case 'c':
        case 'C':
              cout << sizeof(char);
            break;
        case 'D':
        case 'd':
              cout << sizeof(double);
            break;
        case 's':
        case 'S':
              cout << sizeof(size_t);
            break;
        case 'e':
        case 'E':
              end = true;
            break;
        default:
            cout << char(7) << "Invalid input!";
        }
    } while(!end);
    return 0;
}
