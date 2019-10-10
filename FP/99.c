/*Program ini berfungsi untuk menghitung berapa banyak tenaga yang dihasilkan oleh sebuah dam
 */

#include <stdio.h>
#define MEGAWATTS_PER_WATTS 1e-6
#define WATER_MASS_PER_ONE_CUBIC_METER 1e3
#define GRAVITY 9.80
#define EFFICIENCY_CONSTANT 9/10
int
main (void)
{
	double	work_by_water,
			power_produced,
			mass,
			volume,
			height,
			megawatt;
	
	printf("POWER PRODUCED FROM DAM PER ONE SECOND\n\n"); 						/*Judul*/
	
	printf("Enter the height of the dam (meter)			:"); 					/*Mendapatkan data tinggi dam*/
	scanf("%lf",&height);
	
	printf("Enter the water's rate of flow (metercubic per second)	:"); 		/*Mendapatkan data debit air*/
	scanf("%lf",&volume);
	
	mass = volume*WATER_MASS_PER_ONE_CUBIC_METER; 								/*Rumus-rumus untuk mendapatkan power*/
	work_by_water = mass*GRAVITY*height;
	power_produced = work_by_water*EFFICIENCY_CONSTANT;
	megawatt = power_produced*MEGAWATTS_PER_WATTS;
	
	printf("\nPower produced in megawatts				: %.2f MW",megawatt); 	/*Hasil program*/
	
	return (0);
}
