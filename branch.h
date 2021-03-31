#include <stdio.h>
// This is branch.h file.



struct branchNode
{
	char  branchName[ 10 ];
	struct branchNode* nextBranchInfo;
};

struct branchNode*  addBranch();
void removeBranch();
void displayBranch();
	
