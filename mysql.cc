
#include "mysql.h"

// Class member function definition

Mysql :: Mysql()
{
//   cout<<"Content-type: text/html\r\n\r\n";
   connect=mysql_init(NULL);
   if (!connect)
   {
       cout<<"MySQL Initialization Failed";
       //return 1;
   }   
   connect=mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0,NULL,0);
   if (connect)
   {
//       cout<<"Connection Succeeded\n";
   }
   else
   {
       cout<<"Connection Failed\n";
   }
   i = j = 0;
}

void Mysql :: Select()
{
   mysql_query (connect,"select * from RollNoDetails;");
   res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
   
   while (((row=mysql_fetch_row(res_set)) !=NULL))
   {
       cout<<"Sno : "<<row[i]<<"\t Branch: "<<row[i+1]<<endl;
       j += atoi (row[i]);// converting to int
       //cout<<"i = "<<j<<endl;
   }
}

void Mysql :: getBranchNames(string branchname[], int &size)
{
   mysql_query (connect,"select distinct BranchName from RollNoDetails;");
   res_set = mysql_store_result(connect);
   unsigned int numrows = mysql_num_rows(res_set);
   while (((row=mysql_fetch_row(res_set)) !=NULL))
   {
      //size = i;
       //cout<<"Branch Name "<<row["BranchName"] << endl;//<<"\t Branch: "<<row[i+1]<<endl;
       //j += atoi (row[i]);// converting to int
       //cout<<"i = "<<j<<endl;
       branchname[i] = row[0];
       i++;
   }
   size = i;
   
}

// Destructor
Mysql :: ~Mysql()
{
   mysql_close (connect);
}

