#include <iostream>
#define VERSION "undef"

int main(int argc, char *argv[])
{
      if (argc == 1)
      {
            std::cout << "RefactorErl says hello to Homebrew!" << std::endl;
            std::cout << "Please use --compile-info flag for information about the comile." << std::endl;
      }

      if (argc == 2)
      {
            if (argv[1] == "--compile-info")
            {
                  std::cout << "Compiled on: " << __DATE__ << std::endl;
                  std::cout << "Compiled at: " << __TIME__ << std::endl;
            }

            if (argv[1] == "--version")
            {
                  std::cout << VERSION << std::endl;
            }
      }
}