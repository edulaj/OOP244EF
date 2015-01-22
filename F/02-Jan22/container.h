#include <iostream>
using namespace std;

namespace oop244f{
  struct Container{
  private:
    double _capacity;
    double _quantity;
    char _contentType[41];
    char _unit[41];
  public:
    void setContentType(const char contentType[]);
    const char* getContentType();
    double fill(double quantity);
  };



}