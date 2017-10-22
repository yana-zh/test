#include <iostream>

using namespace std;

struct Leaf
{
    int val;
    Leaf* next;
};

int main()
{
    Leaf* cur = 0;
    Leaf* head = new Leaf;
    head->val = 42;
    head->next = new Leaf;
    head->next->val = 5;
    head->next->next = new Leaf;
    cur = head->next->next;
    cur->val = 73;
    cur->next = 0;
    cur = head;
    while (cur) {
        cout << cur->val << endl;
        cur = cur->next;
    }
    cout << "Hello World!" << endl;
    return 0;
}

