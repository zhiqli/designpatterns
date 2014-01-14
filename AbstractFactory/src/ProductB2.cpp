#include <iostream>
#include "ProductB2.h"

using namespace std;

ProductB2::ProductB2()
:AbstractProductB()
{
    cout << "ProductB2 Create" << endl; 
}

ProductB2::~ProductB2()
{
    cout << "ProductB2 Destory" << endl;
}
