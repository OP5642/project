#include<iostream>
#include "test.h"

using namespace std;

void triangle(int n)
{
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
            cout << "*";
        cout << endl;
    }
}

void square(int n)
{
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    triangle(4);
}