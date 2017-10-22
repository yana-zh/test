#include <iostream>
#include <array>

using namespace std;
const int size = 10;
int main()
{
    cout << "Exersice 1:" << endl;
    int arr[size]{};
    for(int i = 0; i < size; ++i)
    {
        arr[i] = i;
    }
    for(auto a : arr)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    int s = 0;
    for(int i = 0; i < size; ++i)
    {
        arr[i] *= arr[i];
        s += arr[i];
    }
    for(auto a : arr)
    {
        cout << a <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    cout << "Sum = " << s << endl;

    //////////////////////////////

    cout << "Exersice 3:" << endl;

    int arr2[size]{};
    int* beg = arr2;
    int* end = &arr2[size];
    int i = 0;
    for(int* p = beg; p < end; ++p)
    {
        *p = i++;
    }
    for(int* p = beg; p < end; ++p)
    {
        cout << *p <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;

    s = 0;
    for(int* p = beg; p < end; ++p)
    {
        *p *= *p;
        s += *p;
    }
    for(int* p = beg; p < end; ++p)
    {
        cout << *p <<  ", ";
    }
    cout << char(8) << char(8) << "  " << endl;
    cout << "Sum = " << s << endl;

    //////////////////////////////

    cout << "Exersice 2:";
    bool fin = false;
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
              fin = true;
            break;
        default:
            cout << char(7) << "Invalid input!";
        }
    } while(!fin);
    return 0;
}
