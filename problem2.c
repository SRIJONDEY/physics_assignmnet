#include <stdio.h>
#include <math.h>
int main()
{
 int m_green, m_red;
 double lambda_green, lambda_red, theta_green_deg, d, theta_red_rad, theta_red_deg;
 m_green = 3;
 m_red = 2;
 lambda_green = 530e-9;
 lambda_red = 700e-9;
 theta_green_deg = 65.0;
 d = (m_green * lambda_green) / sin(theta_green_deg * M_PI / 180.0);
 theta_red_rad = asin((m_red * lambda_red) / d);
 theta_red_deg = theta_red_rad * 180.0 / M_PI;
 printf("Angle for second-order red light = %.2f degrees\n", theta_red_deg);
 return 0;
}
