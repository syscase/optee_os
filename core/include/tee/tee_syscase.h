#ifndef TEE_SYSCASE_H
#define TEE_SYSCASE_H

#include <stdint.h>

unsigned long ADD_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res);
unsigned long SUB_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res);
unsigned long MUL_WITH_OVERFLOW32(uint32_t a, uint32_t b, uint32_t *res);

unsigned long ADD_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res);
unsigned long SUB_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res);
unsigned long MUL_WITH_OVERFLOW64(uint64_t a, uint64_t b, uint64_t *res);
#endif
