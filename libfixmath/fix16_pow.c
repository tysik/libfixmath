#include "fix16.h"

fix16_t fix16_pow(fix16_t base, uint8_t exponent) {
  fix16_t result = fix16_from_int(1);

  while (exponent-->0)
    result = fix16_mul(result, base);

  return result;
}

