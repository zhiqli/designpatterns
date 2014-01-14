#include <iostream>
#include "ProductA2.h"

using namespace std;

ProcductA2::ProcductA2()
:AbstractProductA()
{
    cout << "ProductA2 Create" << endl;
}

ProcductA2::~ProcductA2()
{
    cout << "ProductA2 Destory" << endl;
}
