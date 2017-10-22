#include <iostream>

using namespace std;


struct Vector {
   int sz; //кількість елементів
   double* elem; //покажчик на елемент
};

void vector_init(Vector& v,int s)
{
    v.elem = new double[s];  //динамічне створення масиву
    v.sz = s;
}

void f(Vector v, Vector& rv, Vector* pv)
{
    cout<<v.sz<<' ';  //доступ за ім'ям
    cout<<rv.sz<<' ';  //доступ за посиланням
    cout<<pv->sz<<'\n';  //доступ за покажчиком
}


int main()
{
   constexpr int s = 5;
   Vector v;
   vector_init(v,s);

   for(int i=0; i!=v.sz; ++i)
      cin>>v.elem[i];
   f(v, v, &v);
   delete [] v.elem;
   return 0;
}

