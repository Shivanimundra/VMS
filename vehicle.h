#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>// vehicle.h


struct vehicleNode
{
	char vehicleNumber[ 10 ];  
	bool  vehicleOnRent;            
        struct vehicleNode* nextVehicleInfo;
};




struct vehicleNode* addVehicle();
void removeVehicle();
void displayVehicle();

