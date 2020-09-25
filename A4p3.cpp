#include <iostream>
#include <string>
#include <cstdlib>
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

    int n = 0;
    while(var != 1)
    {
      var = f(var);
      cout << var << "\t";
      n++;
    }

    cout << "\nLength of the list: " << n << "\n";
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

class MultiVarMathFunction: public MathFunction
{
  protected:
  int var2;
  public:
  MultiVarMathFunction(int x, int y): MathFunction(x)
  {
    var = x;
    var2 = y;
  }

  void getsp()
  {
    int sum = var + var2;
    int p = var * var2;
    cout << "Sum of " << var << " and " << var2 << " is " << sum << ". ";
    cout << "Product of " << var << " and " << var2 << " is " << p << ".\n";
  }
};

int main(int argc, char* argv[])
{
  MultiVarMathFunction function2(atoi(argv[1]), atoi(argv[2]));
  function2.getsp();
  cout << "Generated list for " + atoi(argv[1]) << " is:\n";
  function2.play();
  return 0;
}
