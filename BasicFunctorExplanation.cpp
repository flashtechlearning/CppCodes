/******************************************************************************

Basic Functor Explanation

*******************************************************************************/
#include <iostream>

using namespace std;

class FunctorClass{
  public:
  
  void operator()(void)
  {
      cout << "Functor called from object" << endl;
  }
  
  void operator()(int param1)
  {
      cout << "Functor called from object with parameter:"<< param1 << endl;
  }
};

int main()
{
    FunctorClass FunctorClassObj;
    
    FunctorClassObj();
    FunctorClassObj(1);

    return 0;
}
