#ifndef __BUILDER__H__
#define __BUILDER__H__

#include "Product.h"

class Builder
{
public:
    explicit Builder();
    virtual ~Builder();

public:
    virtual void BuildPart() = 0;
    virtual Product* GetResult() = 0;

protected:
    Product *m_pProduct;
};

#endif
