#ifndef __FS_CONTAINER_H__
#define __FS_CONTAINER_H__

namespace oop244f{
  struct Container{
  private:
    double _capacity;
    double _quantity;
    char _contentType[41];
    char _unit[41];
  public:
    void set(const char contentType[],
      const char unit[],
      double capacity,
      double quantity);
    void setContentType(const char contentType[]);  // sets the type of conent a container can hold
    const char* getContentType()const;                   // gets and returns the conent type to the caller progeram
    double fill(double quantity);        // fill the container with "quantity" amount of "_contentType",
                                         // if the quantity overflows the "_capacity", it will return
                                         // the spillage amount, otherwise zero, (obviously)
    void display()const;
  };



}

#endif