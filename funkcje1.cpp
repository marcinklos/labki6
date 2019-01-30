#include <iostream>

using namespace std;

int main()
{
cout << "Wprowadz ile chcesz pieter choinki: ";
cin >> p;
if (p<4)
{
cout << "Liczba pieter jest zbyt mala do budopwy choinki: ";
return main();
}
    for (int i=0; i<p-1; i++)
{
    for (int j=0; j<p-i; j++)
{
cout << " ";
}
    for (int k=0; k<2*i+1; k++)
{
cout << "*";
}
cout << endl;
}
    for (int i=0; i<p; i++)
{
cout << " ";
}
cout << "*\n";
return 0;
}
