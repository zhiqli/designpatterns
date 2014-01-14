#include <iostream>
#include "AbstractFactory.h"

using namespace std;

AbstractFactory::AbstractFactory()
:m_ProductA()
,m_ProductB()
{
    cout << "AbstractFactory Create" << endl;
}

AbstractFactory::~AbstractFactory()
{
    cout << "AbstractFactory Destroy" << endl;
}
