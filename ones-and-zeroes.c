#include <stddef.h>

unsigned
binary_array_to_numbers(const unsigned *bits, size_t count)
{
  unsigned val = 0;

  for (size_t i = 0; i < count; i++)
    val = (val << 1) + bits[i];

  return val;
}
