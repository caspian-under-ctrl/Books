#include <stdio.h>

// The first line may be confusing, but it's just C syntax that tells
// the compiler to include headers for a standard input/output
// (I/O) library named stdio. This header file is added to the
// program when it is compiled. It is located at
// /usr/include/stdio.h, and it defines several constants and
// function prototypes for corresponding functions in the standard
// I/O library. Since the main() function uses the printf()
// function from the standard I/O library, a function prototype is
// needed for printf() before it can be used. This function
// prototype (along with many others) is included in the stdio.h
// header file. A lot of the power of C comes from its extensibility
// and libraries.

int main()

// The main execution of a C program begins in the aptly named
// main()function. Any text following two forward slashes (//) is a
// comment, which is ignored by the compiler.

{
  int i ;
  for (i = 0 ; i < 10 ; i++)
  {
    puts("Hello World ! \n");
  }
  return 0;
}
