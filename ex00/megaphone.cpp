#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
	int i;
	int j;
	char upper;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				upper = std::toupper(static_cast<unsigned char>(argv[i][j]));
				std::cout << upper;
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
  return 0;
}
