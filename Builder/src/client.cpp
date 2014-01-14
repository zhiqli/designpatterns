#include <iostream>
#include "Director.h"

using namespace std;

int main(char argc, char **argv)
{
    Director *pDirector = new Director();
    
    if (NULL != pDirector)
    {
        pDirector->Construct();
        
        delete pDirector;
        pDirector = NULL;
    }

    return 0;
}
