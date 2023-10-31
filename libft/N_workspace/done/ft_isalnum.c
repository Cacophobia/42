

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isnum(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
