#include <iostream>
#include "ProductB1.h"

using namespace std;

ProductB1::ProductB1()
:AbstractProductB()
{
    cout << "ProductB1 Create" << endl;
}

ProductB1::~ProductB1()
{
    cout << "ProductB1 Destory" << endl;
}
