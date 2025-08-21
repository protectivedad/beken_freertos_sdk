// Copyright 2015-2024 Beken
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "include.h"
#include "arm_arch.h"
#include <string.h>

#include "sys_rtos.h"
#include "uart_pub.h"
#include "mem_pub.h"
#include "rtos_pub.h"

INT32 os_memcmp(const void *s1, const void *s2, UINT32 n)
{
    return memcmp(s1, s2, (unsigned int)n);
}

void *os_memmove(void *out, const void *in, UINT32 n)
{
    return memmove(out, in, n);
}

void *os_memcpy(void *out, const void *in, UINT32 n)
{
    return memcpy(out, in, n);
}

void *os_memset(void *b, int c, UINT32 len)
{
    return (void *)memset(b, c, (unsigned int)len);
}

int os_memcmp_const(const void *a, const void *b, size_t len)
{
    return memcmp(a, b, len);
}

void *os_realloc(void *ptr, size_t size)
{
    return beken_realloc(ptr, size);
}

void *os_malloc(size_t size)
{
    return (void *)beken_malloc(size);
}

void * os_zalloc(size_t size)
{
    void *n = (void *)os_malloc(size);

    if (n)
        os_memset(n, 0, size);
    return n;
}

void os_free(void *ptr)
{
    beken_free(ptr);
}
// EOF

