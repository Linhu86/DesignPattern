#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__
#include "director.h"
#include "builder_product.h"
#include "builder.h"

class Director 
{
  public:
    Director(); 
    ~Director();
    Product *BuildProduct(string product_name);
};


#endif



