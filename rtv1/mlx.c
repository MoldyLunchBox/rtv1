
#include "rtv1.h"
void circleBres(int *dd,int xc, int yc, int r) 
{ 
    int x = 0, y = r; 
    int d = 3 - 2 * r; 
    //
    dd[y * WIDTH + x] = 0x0ff000;
    while (y >= x) 
    { 
        // for each pixel we will 
        // draw all eight pixels 
          
        x++; 
  
        // check for decision parameter 
        // and correspondingly  
        // update d, x, y 
        if (d > 0) 
        { 
            y--;  
            d = d + 4 * (x - y) + 10; 
        } 
        else
            d = d + 4 * x + 6; 
       // drawCircle(xc, yc, x, y); 
        dd[y * WIDTH + x] = 0x0ff000;
    } 
} 
void		image_clear(int *d,int center_y, int center_x, int radius)
{
	int	y;
	int x;
    int res;
    double PI = 22 / 7;
	y = 0;
	while (y < HEIGHT)
	{
		x = -1;
		while (x++ < WIDTH)
        {

			res = (((x*x) - (2 * center_x*x) + (center_x * center_x)) + ((y*y) - (2 * center_y*y) + (center_y * center_y)));
          if( res <= radius*radius && res >= 0)
                d[y * WIDTH + x] = 0x000ff0;
       
            
        }
		y++;
	}
}
int main()
{
    t_mlx	*mlx;
	int		bpp;


    mlx = (t_mlx *)malloc(sizeof(t_mlx));
	mlx->ptr = mlx_init();
	mlx->win = mlx_new_window(mlx->ptr, WIDTH, HEIGHT, "ok");
	mlx->img = mlx_new_image(mlx->ptr, WIDTH, HEIGHT);
	mlx->d = (int *)mlx_get_data_addr(mlx->img, &bpp, &bpp, &bpp);
    image_clear(mlx->d, 200,200,100);
    mlx_put_image_to_window(mlx->ptr, mlx->win, mlx->img, 0, 0);
    mlx_loop(mlx->ptr);

}
