#include <iostream>
#include <cstdio>

int main(int argc, char **argv)
{
    int i = 1;
    int j;
    std::string ch;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                ch = toupper(argv[i][j]);
                std::cout << ch;
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
