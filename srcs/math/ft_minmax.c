
double	ft_dminmax(const double min, const double value, const double max)
{
	if (value < min)
		return (min);
	else if (value > max)
		return (max);
	else
		return (value);
}
