#include <stdio.h>
#include <string.h>
#include "calculator.h"
#include <math.h>

typedef struct{
	char name[20];
	float mass;
	float radius;
}body;

typedef struct{
	float apoapsis;
	float periapsis;
	float eccentricity;
	float semi_major_axis;
	float period;
	float ap_radii;
	float pe_radii;
	float GM;
}orbit;

const float G  = 6.67300E-11;
void instantiate_bodies(body*);

int main(int argc,const char* argv[])
{ 
	body celestial_bodies[100];
	instantiate_bodies(celestial_bodies);
	
	body user_body;
	orbit user_orbit;

	printf("\nPlease Select Celestial Body:\n");
	printf("0:Kerbol\n");
	printf("1:Kerbin\n");
	printf("2:Mun\n");
	printf("3:Minmus\n");

	int i;
	scanf("%i",&i);
	printf("You selected %s\n",celestial_bodies[i].name);
	
	float desired_orbit;
	printf("Please Enter Your Desired Orbit\n");
	scanf("%f",&desired_orbit);
	printf("You entered %f\n",desired_orbit);
	user_body = celestial_bodies[i];
	
}

float orbital_period(float mass, float apoapsis, float periapsis)
{	
	float body_radius;
	float apoapsis_radii = apoapsis + body_radius;
	float periapsis_radii = periapsis + body_radius;
	float semi_major_axis = (apoapsis_radii+periapsis_radii)/2.0;
	float e = eccentricity(apoapsis_radii,periapsis_radii);
	return 0.0;	
}

float semi_major_axis(float ap_radii,float pe_radii)
{
	return ((ap_radii+pe_radii)/2.0);
}

float eccentricity(float ap_radii,float pe_radii)
{
	return ((ap_radii-pe_radii)/(ap_radii + pe_radii));
}

void instantiate_bodies(body* bodies)
{
	//Kerbol
	strcpy(bodies[0].name, "Kerbol");
	bodies[0].mass = 0.0;
	bodies[0].radius = 0.0;
	//Kerbin
	strcpy(bodies[1].name,"Kerbin");
	bodies[1].mass=0.0;
	bodies[1].mass=0.0;
	//Mun
	strcpy(bodies[2].name, "Mun");
	bodies[2].mass = 0.0;
	bodies[2].radius = 0.0;
	//Minmus
	strcpy(bodies[3].name, "Minmus");
	bodies[3].mass=0.0;
	bodies[3].radius=0.0;
}
