#include <stdio.h>
#include "vehicle.h"
#include "string.h"
// vehicle.c



struct vehicleNode* addVehicle(char * vNumber, int r, struct vehicleNode* vehicleHead )
{
 //  while( vehicleHead->nextVehicleInfo!=NULL )
  //{
  //   vehicleHead = vehicleHead->nextVehicleInfo;
 // }
  if( vehicleHead->nextVehicleInfo == NULL )
  {
      struct vehicleNode* root = ( struct vehicleNode* )malloc( sizeof( struct vehicleNode* ));
      vehicleHead->nextVehicleInfo = root; 
      strcpy( root->vehicleNumber, vNumber ); 
      root->vehicleOnRent   = r;
      //printf("%s\t", vehicleHead->vehicleNumber);
      //printf("%d\n", vehicleHead->vehicleOnRent);    
      root->nextVehicleInfo = NULL;
      vehicleHead = root;
      return vehicleHead;
   //   free( root );
  }
}
void removeVehicle()
{

}
void displayVehicle( struct vehicleNode* vehicleHead )
{
   while( vehicleHead !=NULL )
   {
     printf( "vehicle number is = %s\n vehicle on rent = %d\n",vehicleHead->vehicleNumber, vehicleHead->vehicleOnRent );
     vehicleHead = vehicleHead->nextVehicleInfo; 
   }
}
