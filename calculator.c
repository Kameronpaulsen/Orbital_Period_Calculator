#include <stdio.h>

int main(int argc,const char* argv[])
{
	int planet;
	
	printf("\nPlease Select Celestial Body:\n");
	printf("0:Kerbol\n");
	printf("1:Kerbin\n");
	printf("2:Mun\n");
	printf("3:Minmus\n");
	scanf("%i",&planet);
	printf("You selected %d\n",planet);
}
