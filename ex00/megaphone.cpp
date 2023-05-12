#include <iostream>
#include <string>

std::string	to_upper(char *in);

int main(int ac, char **av)
{
	if (ac == 1)
	{
			std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			if (i > 1)
					std::cout << " ";
					std::cout << to_upper(av[i]);
		}
		std::cout << std::endl;
	}
}

std::string to_upper(char *in)
{
	std::string out = in;
	for (size_t i = 0; i < out.size(); i++)
		if (out[i] >= 'a' && out[i] <= 'z')
			out[i] += 'A' - 'a';
	return (out);
}