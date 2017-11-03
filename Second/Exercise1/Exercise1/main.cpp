#include <iostream>

using namespace std;

//Створити структуру елемента однозв'язного списку, функцію додавання елементу у хвост списку,
//додати декілька елементів у список та вивести його вміст на екран.

struct list_elem //list element
{
    float val;
    list_elem* next;
};

list_elem* add_elem (float v) //create head element with value v
{
    list_elem* cur = new list_elem;
    cur->val = v;
    cur->next = 0;
    return cur;
}

list_elem* add_elem_return(float v, list_elem* p)
//add element with value v to the tail of list of wich p is a member and return pointer to the element
{
    while(p->next != 0)
    {
        p = p->next;
    }
    p->next = new list_elem;
    p->next->val = v;
    p->next->next = 0;
    return p->next;
}

void add_elem(float v, list_elem* p)
//add element with value v to the tail of list of wich p is a member
{
    while(p->next != 0)
    {
        p = p->next;
    }
    p->next = new list_elem;
    p->next->val = v;
    p->next->next = 0;
}


int main()
{
    list_elem* head = add_elem(42); //create head
    list_elem* next = add_elem_return(43, head); //add with return
    add_elem(44, head); //add without return
    cout << head->val << " " << next->val << " " << next->next->val << endl; //list output
    list_elem* cur = head; //whole list output with while
    while(cur->next)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
        cout << cur->val << " " << endl;
    return 0;
}
