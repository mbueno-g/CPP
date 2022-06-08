
#include <iostream>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char	**argv)
{
	int		i;
	char	a;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
	else
	{
		while (i < argc)
		{
			while(*argv[i])
			{
					a = ft_toupper(*argv[i]);
					std::cout << a;
					argv[i]++;
			}
			i++;
		}
		std::cout << '\n';
	}
}
