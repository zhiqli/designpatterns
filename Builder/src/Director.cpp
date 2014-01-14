#include <iostream>
#include "Director.h"
#include "Product.h"
#include "ConcreteBuilder.h"

using namespace std;

Director::Director()
:m_pBuilder(new ConcreteBuilder())
{
    cout << "Director Create" << endl;
}

Director::~Director()
{
    if (NULL != m_pBuilder)
    {
        delete m_pBuilder;
        m_pBuilder = NULL;
    }
    cout << "Director Destory" << endl;
}

void Director::Construct()
{
    m_pBuilder->BuildPart();
    Product *pProduct = m_pBuilder->GetResult();

    if (NULL != pProduct)
    {
        cout << "GetProdcut Succfuly" << endl;
    }
}
