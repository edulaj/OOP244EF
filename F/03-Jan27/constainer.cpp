#include <cstring>
#include <iostream>
using namespace std;
#include "container.h"


namespace oop244f{
  void Container::set(const char contentType[],
    const char unit[],
    double capacity,
    double quantity){
    setContentType(contentType);
    strcpy(_unit, unit);
    _capacity = capacity;
    _quantity = quantity;
  }

  void Container::setContentType(const char ct[]){ //ct: contentType
    strcpy(_contentType, ct);
  }
  const char* Container::getContentType()const{
    return _contentType;
  }
  double Container::fill(double quantity){
    double spill = 0.0;
    _quantity += quantity;
    if (_quantity > _capacity){
      spill = _quantity - _capacity;
      _quantity = _capacity;
    }
    return spill;
  }
  void Container::display()const{
    double diff = _quantity - _capacity;
    if (diff < 0.0001 && diff > -0.0001){
      cout << "this container "
        "is full of "
        << _contentType << endl;
    }
    else{
      cout << "this container "
        "has " << _quantity << " " << _unit << "(s) of "
        << _contentType << endl;
    }
  }

}