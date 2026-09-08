#pragma once

#ifdef _WIN32
  #define PROCEDURE_ORIENTED_PROGRAMMING_C_EXPORT __declspec(dllexport)
#else
  #define PROCEDURE_ORIENTED_PROGRAMMING_C_EXPORT
#endif

PROCEDURE_ORIENTED_PROGRAMMING_C_EXPORT void procedure_oriented_programming_c(void);
PROCEDURE_ORIENTED_PROGRAMMING_C_EXPORT void procedure_oriented_programming_c_print_message(const char *message);
