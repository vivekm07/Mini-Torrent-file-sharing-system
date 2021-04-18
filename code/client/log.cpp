/************************************************************************
** Created by: Vivek Majithia *******************************************
************************************************************************/

#include "clientheader.h"

//***************************************************************************
// This function write client log in file
//***************************************************************************
void writelog(string str)
{
	ofstream myfile(logpath, std::ios_base::app | std::ios_base::out);  
    myfile<<str<<endl;
    myfile.close();
}
