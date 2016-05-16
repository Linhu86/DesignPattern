#include <iostream>

#include "builder_product.h"
#include "builder.h"
#include "director.h"

int main()
{
  Director *p_director = new Director();
  Product *p_productA = p_director->BuildProduct("PA");
  Product *p_productB = p_director->BuildProduct("PB");
  return 0;
}



