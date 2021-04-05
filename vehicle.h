#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>// vehicle.h


struct vehicleNode
{
	char vehicleNumber[ 10 ];  
	int  vehicleOnRent;            
        struct vehicleNode* nextVehicleInfo;
};




struct vehicleNode* addVehicle();
struct vehicleNode* removeVehicle();
void displayVehicle();

