#include "get_next_line.h"

int	main(int argc, char **argv)
{
    char	*line;
    int		fd;
    int		ret;

    if (argc == 2)
    {
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	    ft_putendl("pas reussis a ouvrir");
	else
	{
	    while ((ret = get_next_line(fd, &line)))
	    {
		ft_putnbr(ret);
		ft_putchar(' ');
		ft_putendl(line);
	    }
	}
    }
    else
	ft_putendl("mauvais nombre darguments");
    return (0);
}
