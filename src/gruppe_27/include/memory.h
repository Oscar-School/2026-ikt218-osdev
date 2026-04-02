#ifndef MEMORY_H
#define MEMORY_H
 
#include <stdint.h>
#include <stddef.h>
#include "multiboot2.h"
 

extern uint32_t end;
 
void  init_kernel_memory(uint32_t *kernel_end);
 
void *malloc(size_t size);
void  free(void *ptr);
 
void init_paging();
 

void print_memory_layout(uint32_t mb2_info_addr);
 
#endif // MEMORY_H