#include <iostream>
#include "ProductA1.h"

using namespace std;

ProductA1::ProductA1()
:AbstractProductA()
{
    cout << "ProductA1 Create" << endl;
}

ProductA1::~ProductA1()
{
    cout << "ProductA1 Destory" << endl;
}
