#include <stdio.h>
#include "vehicle.h"
#include "branch.h"
#include <string.h>
#include <stddef.h>
int main()
{
        
	FILE *file;
	file = fopen( "new.txt","a" );
	char permission;
	char vBranchName[ 10 ];
	char vNumber[ 20 ];
	int vOnRent;
	while(1)
	{
		printf( "Do you want to enter the data Y/N ?" );
		
		scanf( "%c",&permission );
		getchar();
		if( permission=='n'|| permission=='N' )
		{
			break;
		}
			printf( "vehicle branch name = " );
			scanf( "%s",vBranchName );
			getchar();

			printf( "vehicle number is  =  " );
			scanf( "%s",vNumber );
                 	getchar();

			printf( "number on vehicle on rent  = " );
       			scanf( "%d",&vOnRent );
                        getchar();

			fprintf( file,"%s\t%d\t%s\n",vNumber,vOnRent,vBranchName );
	}

	char tempVehicleBranchName[ 10 ];
	char tempVehicleNumber[ 10 ];
	bool tempVehicleOnRent;
        fclose( file );



        FILE *f = fopen( "new.txt","r" );

	rewind(f);
	fscanf( file,"%s%d%s",tempVehicleNumber,&tempVehicleOnRent,tempVehicleBranchName );
        



        //   printf( "%s %d %s\n",tempVehicleNumber,tempVehicleOnRent,tempVehicleBranchName);


        


       // printf( "%s %d %s\n",tempVehicleNumber,tempVehicleOnRent,tempVehicleBranchName);
        
        
        
	struct vehicleNode* vehicleHead;
	struct vehicleNode* firstVehicle=( struct vehicleNode* )malloc( sizeof( struct vehicleNode* ));
        vehicleHead=firstVehicle;

	strcpy( firstVehicle->vehicleNumber,tempVehicleNumber );
	firstVehicle->vehicleOnRent = tempVehicleOnRent;
        firstVehicle->nextVehicleInfo = NULL;
      // printf("vehicle number is %s\n ",firstVehicle->vehicleNumber);	
           
	struct branchNode* firstBranch=( struct branchNode* )malloc( sizeof( struct branchNode* ));
        struct branchNode* branchHead;
        branchHead = firstBranch;
	strcpy( firstBranch->branchName,tempVehicleBranchName);
        firstBranch->nextBranchInfo = NULL;
      // printf("branch name is %s ", firstBranch->branchName);
	 
       while( fscanf( file,"%s%d%s",tempVehicleNumber,&tempVehicleOnRent,tempVehicleBranchName )!=EOF)
	{
            printf("%s\t%d\n",tempVehicleNumber, tempVehicleOnRent);
            vehicleHead = addVehicle( tempVehicleNumber,&tempVehicleOnRent, vehicleHead );
	    branchHead = addBranch( tempVehicleBranchName, branchHead );
	}
        

            vehicleHead = firstVehicle;
            branchHead = firstBranch;


            displayVehicle( vehicleHead );
            displayBranch( branchHead );

        
        

	    fclose( f );
//        free( firstVehicle );
//        free( firstBranch );
	return 0;
}
