/*Program ini berfungsi untuk menghitung Biaya Perjalanan Taxi
 */
 
#include <stdio.h>
#define FARE_PER_MILES 1.50
int
main(void)
{
	double	first_odometer,
			miles,
			end_odometer,
			total_fare;
	
	printf("TAXI FARE CALCULATION");							/*Judul Program*/
	
	printf("\n\nEnter the beginning odometer reading	: ");	/*Masukkan meteran awal Taxi*/
	scanf("%lf",&first_odometer);
	
	printf("Enter the ending odometer reading	: ");			/*Masukkan meteran akhir Taxi*/
	scanf("%lf",&end_odometer);
	
	miles = end_odometer-first_odometer;						/*Rumus untuk menghitung jarak*/
	total_fare = miles*FARE_PER_MILES;							/*Rumus untuk menghitung biaya*/
	
	printf("\nYou traveled distance of %.1lf miles. At $1.50 per mile, your fare is $%.2lf.",miles,total_fare);
	
	return (0);
}
