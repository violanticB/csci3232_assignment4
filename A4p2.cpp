#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class MathFunction
{

  protected:
  int var;
  public:

  MathFunction(int x)
  {
    var = x;
  }

  void play()
  {
    while(var != 1)
    {
      var = f(var);
      cout << var << "\t";
    }
  }

  // f(x) = (3x+1) / 2
  int f(int x)
  {
    if(x % 2 == 0)
    {
      return (x / 2);
    }

    else
      return (3 * x + 1);
  }

};

int main(int argc, char* argv[])
{
  MathFunction function(atoi(argv[1]));
  function.play();
  return 0;
}
