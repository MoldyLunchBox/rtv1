#ifndef RTV1_H
# define RTV1_H
# include <stdio.h>
# include <math.h>
# include <mlx.h>
#include <stdlib.h>
# define WIDTH  600
# define HEIGHT 600
# define BPP 3
# define PSIZE (4 - (600 * 3) % 4) % 4
# define FILE_HEADER_SIZE 14
# define INFO_HEADER_SIZE 40

typedef struct	s_mlx
{
	int		i;
	int		j;
	double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	int		max_it;
	double	factor;
	int		down;
	void	*ptr;
	void	*win;
	int		***cords;
	void	*img;
	int		*d;
	int		start;
	int		end;
	double	fx;
	double	fy;
	double	old_fx;
	double	old_fy;
	double	up;
	double	ang;
	double	line;
	double	tilt;
	double	twoab;
	double	cx;
	double	cy;
	int		it;
	double	aa;
	double	bb;
	double	px;
	double	py;
	double	in_min;
	double	in_max;
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		key;
	int		color;
	int		limit;
	int		origin;
	int		len;
	int		started;
	int		r;
	int		g;
	int		b;
}				t_mlx;
#endif