#include <iostream>
#include "AbstractProductA.h"

using namespace std;

AbstractProductA::AbstractProductA()
{
    cout << "AbstractProductA Create" << endl;
}

AbstractProductA::~AbstractProductA()
{
    cout << "AbstractProductA Destory" << endl;
}
