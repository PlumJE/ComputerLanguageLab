#include <stdio.h>

#include "procedure_oriented_programming_c.h"

void procedure_oriented_programming_c(void) {
#ifdef NDEBUG
    printf("procedure_oriented_programming_c/0.1: Hello World Release!\n");
#else
    printf("procedure_oriented_programming_c/0.1: Hello World Debug!\n");
#endif

#ifdef _M_X64
    printf("  procedure_oriented_programming_c/0.1: _M_X64 defined\n");
#endif

#ifdef _M_IX86
    printf("  procedure_oriented_programming_c/0.1: _M_IX86 defined\n");
#endif

#ifdef _M_ARM64
    printf("  procedure_oriented_programming_c/0.1: _M_ARM64 defined\n");
#endif

#if defined(__i386__)
    printf("  procedure_oriented_programming_c/0.1: __i386__ defined\n");
#endif

#if defined(__x86_64__)
    printf("  procedure_oriented_programming_c/0.1: __x86_64__ defined\n");
#endif

#if defined(__aarch64__)
    printf("  procedure_oriented_programming_c/0.1: __aarch64__ defined\n");
#endif

#if defined(_MSC_VER)
    printf("  procedure_oriented_programming_c/0.1: _MSC_VER %d\n", _MSC_VER);
#endif

#if defined(__GNUC__)
    printf("  procedure_oriented_programming_c/0.1: __GNUC__ %d.%d\n", __GNUC__, __GNUC_MINOR__);
#endif
}

void procedure_oriented_programming_c_print_message(const char *message) {
    printf("procedure_oriented_programming_c/0.1 %s\n", message);
}