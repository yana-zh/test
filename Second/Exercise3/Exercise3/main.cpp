#include <iostream>

using namespace std;

//Виконати завдання 1, але за допомогою класу.

struct list_elem //list element
{
    float val;
    list_elem* next;
};

class list
{
public:
    list(float v) //create head element with value v
    {
        head->val = v;
        head->next = 0;
    }

    list_elem* add_elem_return(float v)
    //add element with value v to the tail of the list and return pointer to the element
    {
        list_elem* cur = head;
        while(cur->next != 0)
        {
            cur = cur->next;
        }
        cur->next = new list_elem;
        cur->next->val = v;
        cur->next->next = 0;
        return cur->next;
    }

    void add_elem(float v) //add element with value v to the tail of the list
    {
        list_elem* cur = head;
        while(cur->next != 0)
        {
            cur = cur->next;
        }
        cur->next = new list_elem;
        cur->next->val = v;
        cur->next->next = 0;
    }

    void output() //whole list output
    {
        list_elem* cur = head;
        while(cur->next)
        {
            cout << cur->val << " ";
            cur = cur->next;
        }
            cout << cur->val << " " << endl;
    }

private:
    list_elem* head;
};

int main()
{
    list one(42); //create list one
    one.add_elem(43); //add element
    list_elem* try_return = one.add_elem_return(44); //add and return element
    one.output(); //output whole list
    cout << try_return->val << endl; //output one member
    return 0;
}
