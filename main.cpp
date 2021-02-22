#include <iostream>
#include <string.h>
#define VERSION "undef"

int main(int argc, char *argv[])
{
      std::cout << "Recived " << argc << " args." << std::endl;
      if (argc == 1)
      {
            std::cout << "RefactorErl says hello to Homebrew!" << std::endl;
            std::cout << "Please use --compile-info flag for information about the comile." << std::endl;
      }

      if (argc == 2)
      {
            if (argv[1] == "--compile-info" || strcmp(argv[1], "--compile-info") == 0)
            {
                  std::cout << "Compiled on: " << __DATE__ << std::endl;
                  std::cout << "Compiled at: " << __TIME__ << std::endl;
            }

            if (argv[1] == "--version" || strcmp(argv[1], "--version") == 0)
            {
                  std::cout << VERSION << std::endl;
            }
      }
}