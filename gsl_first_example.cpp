#include <iostream>
#include <cstdio>
#include <gsl/gsl_sf_bessel.h>

int main(void)
{
  for(int ii = 0; ii <= 1000; ++ii)
    {
      double x = 0.01*ii;
      double y = gsl_sf_bessel_J0(x);
      std::cout << x << "\t" << y << std::endl;
    }

  return 0;
}
