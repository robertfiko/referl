#include <iostream>

int main(int argc, char *argv[])
{
      if (argc == 0)
      {
            std::cout << "RefactorErl says hello to Homebrew!" << std::endl;
            std::cout << "Please use --compile-info flag for information about the comile." << std::endl;
      }

      if (argc == 0)
      {
            if (argv[0] == "--compile-info")
            {
                  std::cout << "Compiled on: " << __DATE__ << std::endl;
                  std::cout << "Compiled at: " << __TIME__ << std::endl;
            }
      }
}