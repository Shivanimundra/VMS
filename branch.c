#include "branch.h"
#include "stdlib.h"
#include "string.h"
// branch.c

int numberOfVehicle;
int branchVehicleOnRent;
int freeVehicleInBranch;



struct branchNode* addBranch( char *bName, struct branchNode* branchHead )
{
  if( branchHead->nextBranchInfo == NULL )
  {
     struct branchNode* root = ( struct branchNode* )malloc( sizeof( struct branchNode* ));
     branchHead->nextBranchInfo = root; 
     strcpy( root->branchName, bName ); 
     root->nextBranchInfo = NULL;
     branchHead=root;
     return branchHead; 
  }
}	
void removeBranch()
{
  
}
void displayBranch( struct branchNode* branchHead )
{
   while( branchHead!=NULL )
   {
      printf( " branch name is = %s\n",branchHead->branchName );
      branchHead = branchHead->nextBranchInfo; 
   }
}
