#include <stdio.h>
#include "vehicle.h"
#include "branch.h"
#include <string.h>
#include <stddef.h>
int main()
{
        
	FILE *file;
	file = fopen( "new.txt","a" );
	char permission,c;
        char remove[ 10 ];
	char vBranchName[ 10 ];
	char vNumber[ 20 ];
	char  vOnRent;
        int t;
	while( 1 )
	{
		printf( "Do you want to enter the data Y/N ?" );
		
		scanf( "%c",&permission );
		getchar();
		if( permission=='n'|| permission=='N' )
		{
			break;
		}
                else if (permission == 'y' || permission == 'Y')
                {
			printf( "vehicle branch name = " );
			scanf( "%s",vBranchName );
			getchar();
                        int l = strlen( vBranchName );
                        while( l)
			{
			  if(!( ( vBranchName[ l-1 ]>=65 &&  vBranchName[ l-1 ]<=90 ) || ( vBranchName[ l-1 ]>=97 && vBranchName[ l-1 ]<=121)))
 			  {
                              printf( "Invalid Input\n Please enter again" );
                                            
			      printf( "\nvehicle branch name = \n");
                                               
			      scanf( "%s",vBranchName );
			      getchar();
                              l=strlen( vBranchName );
			  }
                          printf( "%d\tl= %d\n",vBranchName[ l-1 ],l );
                          l--;	
			}

			printf( "vehicle number is  =  " );
			scanf( "%s",vNumber );
                 	getchar();
                        
                        l = strlen( vNumber );
                        while( l )
			{
			  if(!( ( vNumber[ l-1 ]>=65 &&  vNumber[ l-1 ]<=90 ) || ( vNumber[ l-1 ]>=97 && vNumber[ l-1 ]<=121)|| ( vNumber[ l-1 ]>=48 && vNumber[ l-1 ]<58)))
 			  {
                              printf( "Invalid Input\n Please enter again" );
                              
			      printf( "\nvehicle number = \n");
                              //l=strlen( vNumber );
			      scanf( "%s",vNumber );
			      getchar();
                              l=strlen( vNumber );
                              
                              printf( "%d\tl= %d\n",vNumber[ l-1 ],l );
                              
			  }
                          l--;	
			}
			

			printf( "vehicle on rent  =  " );
       			scanf( "%c",&vOnRent );
                        
                        printf( "%d",vOnRent );
                        getchar();
                        if(( vOnRent!= '0') && (vOnRent != '1') )
                        {
                           printf( "Invalid Input\n Please enter again" );
                              
			   printf( "\n vehicle on rent  =  " );
       			   scanf( "%c",&vOnRent );
                           getchar();
                        }

			fprintf( file,"%s\t%d\t%s\n",vNumber,vOnRent,vBranchName );
                }
                else
                {

                        printf( "Invalid Input\nPlease give permission in Y or N only" );
                        printf( "\nFor example press Y or y for YES" );
                        printf( "\nPress N or n for NO\n" ); 
                        
			printf( "Do you want to enter the data Y/N ?" );
		
			scanf( "%c",&permission );
			getchar();
                        
			if( permission=='n'|| permission=='N' )
			{
				break;
			}
                	else if (permission == 'y' || permission == 'Y')
                	{
				printf( "vehicle branch name = " );
				scanf( "%s",vBranchName );
				getchar();
                        	int l = strlen( vBranchName );
                       		 while( l )
				{		
			  		if(!( ( vBranchName[l-1]>=65 &&  vBranchName[l-1]<=90 ) || ( vBranchName[ l-1 ]>=97 && vBranchName[ l-1 ]<=121)))
 			  		{
                              			printf( "Invalid Input\n Please enter again" );
                              
			      			printf( "\nvehicle branch name = \n");
                              			//l=strlen( vBranchName );
			      			scanf( "%s",vBranchName );
			      			getchar();
                              			l=strlen( vBranchName );
                                                
                                                printf( "%d\tl= %d\n",vBranchName[ l-1 ],l );	
			  		}
                                   l--;	
				}	

				printf( "vehicle number is  =  " );
				scanf( "%s",vNumber );
                 		getchar();
                        
                        	l = strlen( vNumber );
                                
                        	while( l )
				{
					if(!( ( vNumber[ l-1 ]>=65 &&  vNumber[ l-1 ]<=90 ) || ( vNumber[ l-1 ]>=97 && vNumber[ l-1 ]<=121)|| ( vNumber[ l-1 ]>=48 && vNumber[ l-1 ]<58)))
 			  		{
                              			printf( "Invalid Input\n Please enter again" );
                              
			      			printf( "\nvehicle number = \n");
                              			//l=strlen( vNumber );
			      			scanf( "%s",vNumber );
			      			getchar();
                              			l=strlen( vNumber );
                                               // printf( "%d\tl= %d\n",vNumber[ l-1 ],l );	
			  		}
                                     l--;	
				}
			

				printf( "vehicle on rent  =  " );
       				scanf( "%c",vOnRent );
                        	getchar();
                                
                        	if( (vOnRent != '0') && (vOnRent != '1') )
                        	{
                           		printf( "Invalid Input\n Please enter again" );
                              
			   		printf( "\nnumber on vehicle on rent  =  " );
       			   		scanf( "%c",&vOnRent );
                           		getchar();
                        	}	

				fprintf( file,"%s\t%c\t%s\n",vNumber,vOnRent,vBranchName );
                	}
			/*if( permission=='n'|| permission=='N' )
			{
				break;
			}
               	        else if (permission == 'y' || permission == 'Y')
                	{
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
                	}*/
                        else
			{
                           printf( "Invalid Input :(\n" );
                           printf( "Please restart the system\n" );
                           break;
			}	

                }
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
            //printf("%s\t%d\n",tempVehicleNumber, tempVehicleOnRent);
            vehicleHead = addVehicle( tempVehicleNumber,&tempVehicleOnRent, vehicleHead );
	    branchHead = addBranch( tempVehicleBranchName, branchHead );
	}
        

            vehicleHead = firstVehicle;
            branchHead = firstBranch;


            displayVehicle( vehicleHead );
            displayBranch( branchHead );
            printf( "\nDo you want to delete the data Y/N?" );
            scanf( "%c",&c);
            if( c=='Y' || c=='y' )
            {
              printf( "\nenter the vehicle number for deletion = " );
              scanf( "%s" , remove );
              vehicleHead = removeVehicle( remove,vehicleHead );
            }
               
        

            displayVehicle( vehicleHead );
            displayBranch( branchHead );
	    fclose( f );
//        free( firstVehicle );
//        free( firstBranch );
	return 0;
}
