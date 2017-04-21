//Motor 1 is the Left Motor
//Motor 2 is the right motor
 #include <kipr/botball.h>

int main()
{
//Go Straight and go out of the box
	motor(1, 100);
	motor(2,100);
msleep(3000);
//Turn the motor
	motor(2, -100);
	motor(1,100);
msleep(500);
//Drive Straigh
	motor(1, 100);
	motor(2,100);
msleep(3000);
//Turn
	motor(1, -100);
	motor(2, 100);
msleep(50);
//Straight
	motor(1, 100);
	motor(2, 100);
msleep(1000);
//Turn
	motor(1, -100);
	motor(2, 100);
msleep(500);
//Straight

	motor(1, 100);
	motor(2, 100);
msleep(2000);



	return 0;
}