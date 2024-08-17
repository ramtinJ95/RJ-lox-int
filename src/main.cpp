#include <iostream>

int main(int argc, char *argv[])
{
  int exit_code = 0;
  if (argc > 1)
  {
    std::cout << "Usage: rjlox [script]";
    exit_code = 64;
  }
  else if (argc == 1) {
    runFile(argv[0]);
  }
  else {
    runRepl();
  }
  return exit_code;
}
