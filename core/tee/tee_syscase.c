#include <stdint.h>
#include <tee/tee_syscase.h>

unsigned long ADD_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res) {
  *res = a + b;
  return 0;
}

unsigned long SUB_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res) {
  *res = a - b;
  return 0;
}

unsigned long MUL_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res) {
  *res = a * b;
  return 0;
}

unsigned long ADD_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res) {
  *res = a + b;
  return 0;
}

unsigned long SUB_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res) {
  *res = a - b;
  return 0;
}

unsigned long MUL_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res) {
  *res = a * b;
  return 0;
}
