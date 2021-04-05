#include <stdio.h>
#include "vehicle.h"
#include "string.h"
// vehicle.c



struct vehicleNode* addVehicle(char * vNumber, int r, struct vehicleNode* vehicleHead )
{
 
  if( vehicleHead->nextVehicleInfo == NULL )
  {
      struct vehicleNode* root = ( struct vehicleNode* )malloc( sizeof( struct vehicleNode* ));
      vehicleHead->nextVehicleInfo = root; 
      strcpy( root->vehicleNumber, vNumber ); 
      root->vehicleOnRent   = r;    
      root->nextVehicleInfo = NULL;
      vehicleHead = root;
      return vehicleHead;
  }
}
struct vehicleNode* removeVehicle( char *Number, struct vehicleNode* vehicleHead )
{
  struct vehicleNode* prev = ( struct vehicleNode* )malloc( sizeof( struct vehicleNode* ));

  struct vehicleNode* root = ( struct vehicleNode* )malloc( sizeof( struct vehicleNode* ));
  root = vehicleHead;
  while( root )
 {

    if( !(strcmp( vehicleHead->vehicleNumber,Number )))
    {
        vehicleHead= vehicleHead->nextVehicleInfo;
    }
    if(!( strcmp( root->vehicleNumber, Number)))
    {
       // printf( "hii from strcmp" );
        prev->nextVehicleInfo = root->nextVehicleInfo;
       break;   
    } 
    else
    {
        prev = root;
    }
    root = root->nextVehicleInfo;
 }
    return vehicleHead; 
}
void displayVehicle( struct vehicleNode* vehicleHead )
{
   while( vehicleHead !=NULL )
   {
     printf( "vehicle number is = %s\n vehicle on rent = %d\n",vehicleHead->vehicleNumber, vehicleHead->vehicleOnRent );
     vehicleHead = vehicleHead->nextVehicleInfo; 
   }
}
