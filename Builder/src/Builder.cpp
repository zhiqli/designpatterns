#include <iostream>
#include "Builder.h"

using namespace std;

Builder::Builder()
:m_pProduct(NULL)
{
    cout << "Builder Create" << endl;
}

Builder::~Builder()
{
    cout << "Builder Destory" << endl;
}
